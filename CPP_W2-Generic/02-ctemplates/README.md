The program [ctemplates.cpp](ctemplates.cpp) solves the previous exercise.
A single templated `add_and_print` function handles all types of arguments.
But the definition of `Complex` is unsatisfactory. Using int for the real and
imaginary parts is convenient and fast, but limiting. In the main function
provided, using int for c3 and c4 leads to loss of precision. Adding the two
numbers together produces the wrong result.

Rewrite this program to use make `Complex` templated on the type of the real
and imaginary parts. The main function then should create different
instantiations for the c1/2 and c3/4. 

An example of expected output is:
```shell
./ftemplates     
(4+5i) + (9+11i) = (13+16i)
(4.1+5.1i) + (8.9+10.9i) = (13+16i)
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/02-ctemplates
```
