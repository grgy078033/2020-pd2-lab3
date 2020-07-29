1.how to compile:  
  
    g++ -o main cow.cpp  
  
--------------------------  
2.the empirical results and explanation for question B:  
  
    size = 1000:  
        sort(): 0.000722 seconds  
        v1/v2 are different.  
        insertion_sort(): 0.025716 seconds  
        v1/v2 are the same.  
  
    size = 10000:  
        sort(): 0.008912 seconds  
        v1/v2 are different.  
        insertion_sort(): 1.66358 seconds  
        v1/v2 are the same.  
  
    size = 100000:  
        sort(): 0.099067 seconds  
        v1/v2 are different.  
        insertion_sort(): 145.142 seconds  
        v1/v2 are the same.  
  
    size = 1000000:  
        sort(): 0.641487 seconds  
        v1/v2 are different.  
        insertion_sort(): 11615.5 seconds  
        v1/v2 are the same.  
  
    explaination:  
        CPU has a limit to deal with the appointment per second(ex:1GHz = 10^9 per second)  
        when size = 1000000 = 10^6  
        O(n^2) = 10^6^2 = 10^12, CPU needs 1000 seconds  
        O(n log n) = 6 * 10^6, CPU needs 0.006 seconds  
        According to this and the result above, when size comes bigger, O(n^2) needs more time than O(n log n)  
