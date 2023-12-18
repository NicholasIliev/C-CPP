#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max
#include <array>

#define SIZE1 100
#define SIZE2 154

template <int T1, int T2>
void add_arrays(std::array<int, T1>& array1, std::array<int, T2>& array2, std::array<int, std::max(T1, T2)>& result_array){
    int max_size = std::max(T1, T2);

    for (int i = 0; i < max_size; ++i) {
        if (i < T1)
            result_array[i] = array1[i];

        if (i < T2)
            result_array[i] += array2[i];
    }
}

template <int T>
void init_array(std::array<int, T>& array) {
    for (int i = 0; i < T; ++i)
        array[i] = i;
    }

int main(int argc, char **argv) {
    constexpr int result_size = std::max(SIZE1, SIZE2);

    std::array<int, SIZE1> array1;
    std::array<int, SIZE2> array2;

    init_array<SIZE1>(array1);
    init_array<SIZE2>(array2);


	std::array<int, result_size> result_array;

	std::fill(result_array.begin(), result_array.end(), 0);

    add_arrays<SIZE1, SIZE2>(array1, array2, result_array);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    return 0;
}
