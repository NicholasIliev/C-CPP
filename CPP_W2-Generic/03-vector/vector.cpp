#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm> // for min and max

void add_arrays(
        int *array1, int *array2, int *result_array,
        int size1, int size2)
{
    int max_size = std::max(size1, size2);

    for (int i = 0; i < max_size; ++i) {
        if (i < size1)
            result_array[i] = array1[i];

        if (i < size2)
            result_array[i] += array2[i];
    }
}

void init_array(int *array, int size) {
    for (int i = 0; i < size; ++i)
        array[i] = i;
}

int main(int argc, char **argv) {
    int size1, size2, result_size;
    int *array1, *array2, *result_array;

    if (argc != 3) {
        std::cout << "Usage: " << argv[0] << " <size array 1> <size array 2>\n";
        return -1;
    }

    size1 = atoi(argv[1]);
    size2 = atoi(argv[2]);
    result_size = std::max(size1, size2);

    array1 = (int *)malloc(size1 * sizeof(int));
    array2 = (int *)malloc(size2 * sizeof(int));
    result_array = (int *)malloc(result_size * sizeof(int));

    init_array(array1, size1);
    init_array(array2, size2);

    add_arrays(array1, array2, result_array, size1, size2);

    for (int i = 0; i < result_size; ++i)
        std::cout << result_array[i] << " ";
    std::cout << "\n";

    free(array1);
    free(array2);
    free(result_array);
    return 0;
}
