#include <omp.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
      #pragma omp parallel num_threads(4)
      {
            printf("I am %d thread out of %d threads!\n", omp_get_thread_num() + 1, omp_get_num_threads());
      }
      return 0;
}
