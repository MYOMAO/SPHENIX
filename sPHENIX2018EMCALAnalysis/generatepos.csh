set i=2289
set f=2361

rm -rf PosXY.list
#rm -rf check.dat

echo $i
echo $f

while ( $i < $f )

echo "Now i = " $i


cat check.dat | grep ${i} > buff.dat


set x=`cat buff.dat | grep -Eo "CH = [0-9]+\.[0-9]+"`
set y=`cat buff.dat | grep -Eo "CV = [0-9]+\.[0-9]+"`

set X=` echo $x | grep -Eo "[0-9]+\.[0-9]+"` 
set Y=` echo $y | grep -Eo "[0-9]+\.[0-9]+"`

if(  ${%x} == 0 ) then
set x=`cat buff.dat | grep -Eo "CH = [0-9]*"`
set X=` echo $x | grep -Eo "[0-9]*"`

endif

if( ${%y} == 0 ) then
set y=`cat buff.dat | grep -Eo "CV = [0-9]*"`
set Y=` echo $y | grep -Eo "[0-9]*"`
endif

echo "x = " $X "  y = " $Y

if( " $X" != " " ) then
echo $i " " $X " " $Y >> PosXY.list
endif

#set X=` echo $x | grep  `

#set a=`ddump -p 1110 -n0 /data0/phnxrc/fnal/beam/beam_00000${i}-0000.prdf |grep "2CH" | tail -1`
#set b=`ddump -p 1110 -n0 /data0/phnxrc/fnal/beam/beam_00000${i}-0000.prdf |grep "2CV" | tail -1`

#echo "Run Number " "$i"  "$a" "$b" >> check.dat

#set b=`cat test.dat|grep "466*" `

#if(" $b" != " " ) then
#echo "a = " $a
#echo "Run i  pass = " $i
#echo "/gpfs/mnt/gpfs04/sphenix/user/zshi/sPHENIX/2018TestBeam/DataFiles/beam_00000"$i"-0000_DSTReader.root" >> Filelist.list
#echo "/sphenix/data/data03/phnxreco/sphenix/t1044/production/produciton_current/beam_00000"$i"-0000_DSTReader.root" >> Filelist.list
#endif

@ i = $i + 1

end

