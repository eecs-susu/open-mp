// #include <omp.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    // #pragma omp parallel num_threads(4)
    {
        printf("Hello world!\n");
    }
    return 0;
}
