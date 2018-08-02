set i=2280
set f=2361

rm -rf check.dat

echo $i
echo $f

while ( $i < $f )

echo "Now i = " $i

set a=`ddump -p 1110 -n0 /direct/sphenix+data+data03/phnxreco/sphenix/t1044/production/production_2043/beam_00000${i}-0000.prdf |grep "2CH" | tail -1`
set b=`ddump -p 1110 -n0 /direct/sphenix+data+data03/phnxreco/sphenix/t1044/production/production_0506beam_00000${i}-0000.prdf |grep "2CV" | tail -1`

if( $i > 999 ) then
set a=`ddump -p 1110 -n0 /direct/sphenix+data+data03/phnxreco/sphenix/t1044/production/production_0506/beam_0000${i}-0000.prdf |grep "2CH" | tail -1`
set b=`ddump -p 1110 -n0 /direct/sphenix+data+data03/phnxreco/sphenix/t1044/production/production_0506/beam_0000${i}-0000.prdf |grep "2CV" | tail -1`
endif

echo "Run Number " "$i"  "$a" "$b" >> check.dat

#set b=`cat test.dat|grep "466*" `

#if(" $b" != " " ) then
#echo "a = " $a
#echo "Run i  pass = " $i
#echo "/gpfs/mnt/gpfs04/sphenix/user/zshi/sPHENIX/2018TestBeam/DataFiles/beam_00000"$i"-0000_DSTReader.root" >> Filelist.list
#echo "/sphenix/data/data03/phnxreco/sphenix/t1044/production/produciton_current/beam_00000"$i"-0000_DSTReader.root" >> Filelist.list
#endif

@ i = $i + 1

end

