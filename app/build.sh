#!/bin/sh

# clean
rm ./DuneDynasty.app/Contents/MacOS/dunedynasty
rm ./DuneDynasty.app/Contents/libs/*.dylib

# Then copy executable ...
cp ../Build/dist/dunedynasty DuneDynasty.app/Contents/MacOS/

# ... and bundle dylibs
../../macdylibbundler/dylibbundler -of -b -x ./DuneDynasty.app/Contents/MacOS/dunedynasty -d ./DuneDynasty.app/Contents/libs/
otool -L DuneDynasty.app/Contents/MacOS/dunedynasty
