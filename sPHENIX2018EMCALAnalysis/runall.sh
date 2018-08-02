#!/bin/bash
Year=2018
File=3

echo "START RUNUNG SCRIPT"

rm Results/*png
rm Results/$Year/*
rm ROOTFiles/$Year/*
rm -rf pngfiles/$Year/*png
rm -rf pngfiles/$Year/Single/*png


echo "DONE CLEARING"

cp parameters/parameters${Year}-${File}.h parameters.h

echo "START RUNNING MACROS"

if [ $Year -eq 2018 ]; then
root -b -l -q PosFix.C
fi


root -b -l -q MakeFile.C
root -b -l -q ReadHis2.C
root -b -l -q InterlopationV4reverse.C
root -b -l -q Projection2018.C
root -b -l -q RMS2018.C
