The program [array.cpp](array.cpp) is the same as in the vector exercise
with only one difference: the size of the two arrays is known at compile time.

Rewrite this program to use `std::array`s rather than C-style arrays for `array1`,
`array2` and `result_array`. Your program should:

- Have no calls to `malloc`/`free`
- Not include size-related parameters in the functions `add_arrays` and `init_array`
- Not use vectors

Hint 1: `std::max` returns a compile-time constant when its arguments are compile-time constants (We'll discuss why next week)

Hint 2: When passing `std::array`s to a function, you have to specify its template parameters there too. Using templated functions might make the code easier to read. 

An example of expected output is:
```shell
./array
0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 38 40 42 44 46 48 50 52 54 56 58 60 62 64 66 68 70 72 74 76 78 80 82 84 86 88 90 92 94 96 98 100 102 104 106 108 110 112 114 116 118 120 122 124 126 128 130 132 134 136 138 140 142 144 146 148 150 152 154 156 158 160 162 164 166 168 170 172 174 176 178 180 182 184 186 188 190 192 194 196 198 100 101 102 103 104 105 106 107 108 109 110 111 112 113 114 115 116 117 118 119 120 121 122 123 124 125 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/07-array
```
