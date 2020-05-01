#!/bin/bash

# Ugly little Bash script, generates a set of .h files for GFX using
# GNU FreeFont sources.  There are three fonts: 'Mono' (Courier-like),
# 'Sans' (Helvetica-like) and 'Serif' (Times-like); four styles: regular,
# bold, oblique or italic, and bold+oblique or bold+italic; and four
# sizes: 9, 12, 18 and 24 point.  No real error checking or anything,
# this just powers through all the combinations, calling the fontconvert
# utility and redirecting the output to a .h file for each combo.

# Adafruit_GFX repository does not include the source outline fonts
# (huge zipfile, different license) but they're easily acquired:
# http://savannah.gnu.org/projects/freefont/

convert=./fontconvert
inpath=~/Downloads/freefont-20120503/
outpath=ClockFonts/
fonts=(FreeMono FreeSans FreeSerif)
styles=("" Bold Italic BoldItalic Oblique BoldOblique)
sizes=(8 9 10 11 12 14 16 18 24 30 36 42 48 54 60 66 72)

for f in ${fonts[*]}
do
	for index in ${!styles[*]}
	do
		st=${styles[$index]}
		for si in ${sizes[*]}
		do
			infile=$inpath$f$st".ttf"
			if [ -f $infile ] # Does source combination exist?
			  then
				outfile=$outpath$f$st$si"ptClock.h"
#				printf "%s %s %s > %s\n" $convert $infile $si $outfile
				$convert $infile $si 48 58 > $outfile
			fi
		done
	done
done
