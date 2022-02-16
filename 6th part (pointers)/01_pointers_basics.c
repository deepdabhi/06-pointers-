#include <stdio.h>

int main()
{
    int *j, i;
    j = &i;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    printf("add of i = %u. \n", &i);
    printf("add of i = %u. \n", j);
    printf("add of j = %u. \n", &j);
    printf("value of i = %d. \n", *(&i));
    printf("value of i = %d. \n", i);
    printf("value of i = %d. \n", *j);
    printf("value of j = %d. \n", *(&j));
    return 0;
}