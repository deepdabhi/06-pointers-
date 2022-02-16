#include <stdio.h>
void printAdd(int b)
{
    printf("The address of variable b is %u\n", &b);
}

int main()
{
    int j = 4;
    printf("The value of j is %d. \n", j);
    printAdd(j);
    printf("The address of variable i is %u\n", &j);
    return 0;
}