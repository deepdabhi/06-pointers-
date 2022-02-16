#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int x = 4, y = 5;
    printf("The value of a and b before sewap is %d and %d. \n", x, y);
    // wrong_swap(x,y);THIS WILL NOT WORK PROPERLY,AS IT IS CALL BY VALUE.
    swap(&x, &y);
    printf("The value of a nd b after swap is %d and %d. \n", x, y);
    return 0;
} //Always take such variable in main, which is not present in functions.
void wrong_swap(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}