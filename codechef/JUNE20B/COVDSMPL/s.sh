#~aim:
#~run gen.cpp with input
#~p
#~where p belong to [2,5,10,15]

for ((i=1; i<=100; ++i)); do
	f="out_${i}"
	./gen 15 > p15/${f}
done
