#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
#pragma omp parallel
    printf("hello world\n printed by : %d\n");

    return 0;
}