for((i = 1; i<100 ; ++i)); do
    #~echo $i
    ./gen $i 100 100 > int
    ./CHANDF2 < int > out1
    ./brute < int > out2
    diff out1 out2 || break
    #~diff -w <(./CHANDF2 < int) <(./brute < int) || break
done
