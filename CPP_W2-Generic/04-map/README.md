The program [map.cpp](map.cpp) initialises two vectors `vec1` and `vec2` and
then calculates their dot product: it multiplies itemwise the two vectors and
accumulates the result. This is inefficient though: only a few values in each
vector are non-zero. Allocating space for all indexes wastes memory, while
iterating over all indexes is slow and pointless.

Write a solution without vectors which avoids storing or handling zero values.
You can use a map from int to int to only hold indexes and values for the
non-zero positions of the two vectors. E.g. if vector is this:

[0, 0, 0, 1, 0, 0, 0, 0, 0, 3]

a sparse representation using std::map would be:

```
std::map<int, int> v;
v[3] = 1;
v[9] = 3;
```

Then multiplying the two sparse vectors means
- iterating through the key-value pairs of one of them
- for each key, checking if the second one has the same key
- if it does, multiply and accumulate the two values.

Notes:
- A range-for loop on std::map<X, Y> returns std::pair<X, Y> key-value pairs.
- For each pair p, p.first returns the key, p.second returns the value.
- Better to use auto to hold the iteration variable.
- For accessing the map, read the map documentation, especially find(), contains(), and operator[]

Your code should:
- Have no vector objects
- Use std::maps in the definition of dot()

An example of expected output is:
```shell
./map
170
```

Check the correctness of your program with this command:
```shell
check50 -l --ansi-log ppetoumenos/comp26020-problems/2023-2024/CPP_W2-Generic/04-map
```
