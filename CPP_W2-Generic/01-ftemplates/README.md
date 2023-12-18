The program [ftemplates.cpp](ftemplates.cpp) is the solution for the
overloading exercise from last week. It implements the `+` operation for
`Complex` numbers, it defines `<<` for output streams and `Complex`, and it
defines three overloaded versions of `add_and_print`: one for `Complex`, one
for `int`, one for `double`. The main function then calls the three different
versions of `add_and_print`.

Rewrite this program to use a single templated implementation of
`add_and_print`. Your program should:

- Define `add_and_print` only once
- Declare `add_and_print` to be a template


An example of expected output is:
```shell
./ftemplates     
(4+5i) + (9+11i) = (13+16i)
4 + 9 = 13
5.8 + 11.2 = 17
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/01-ftemplates
```
