#include <stdio.h>
#include <stdlib.h>

// Define a structure to represent a timestamp
struct timestamp {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

// Function to add two timestamps and return the result
struct timestamp add_timestamps(struct timestamp t1, struct timestamp t2);

int main(int argc, char *argv[]) {
    struct timestamp t1, t2;
    
    // Check if there are exactly 7 command-line arguments (program name + 6 values)
    if (argc != 7) {
        printf("Usage: %s <hour1> <minute1> <second1> <hour2> <minute2> <second2>\n", argv[0]);
        return 1; // Exit with an error code
    }

    // Convert command-line arguments to integers and store them in an array
    int arr[6];
    for (int i = 1; i < argc; i++) {
        arr[i - 1] = atoi(argv[i]);
    }
    
    // Initialize t1 and t2 with the values from the array
    t1.hour = arr[0];
    t1.minute = arr[1];
    t1.second = arr[2];

    t2.hour = arr[3];
    t2.minute = arr[4];
    t2.second = arr[5];

    // Call the add_timestamps function to calculate the result
    struct timestamp result = add_timestamps(t1, t2);

    // Print the result in the format "hour minute second"
    printf("Result: %d %d %d\n", result.hour, result.minute, result.second);
    
    return 0; // Exit with success
}

// Function to add two timestamps and return the result
struct timestamp add_timestamps(struct timestamp t1, struct timestamp t2) {
    struct timestamp result;

    // Add seconds and handle carry to minutes
    result.second = t1.second + t2.second;
    result.minute = t1.minute + t2.minute;
    result.hour = t1.hour + t2.hour;
        
    // Check if seconds exceeded 60, and adjust minutes and seconds accordingly
    if (result.second >= 60) {
        result.second -= 60;
        result.minute++;
    }
    // Check if minutes exceeded 60, and adjust hours and minutes accordingly
    if (result.minute >= 60) {
        result.minute -= 60;
        result.hour++;
    }

    return result;
}

