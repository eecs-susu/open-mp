#include <omp.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rank;
    #pragma omp parallel private(rank) num_threads(4)
    {
     rank = omp_get_thread_num();
     usleep(300000);
     printf("I am %d thread.\n", rank);
    }
    return 0;
}
