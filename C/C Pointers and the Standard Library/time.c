#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int sleep_duration = atoi(argv[1]);
    time_t start_time, end_time;

    start_time = time(NULL);

    sleep(sleep_duration);

    end_time = time(NULL);

    double time_taken = difftime(end_time, start_time);
    printf("sleep duration: %.6f seconds\n", time_taken);

    return 0;
}
