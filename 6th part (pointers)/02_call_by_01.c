#include <stdio.h>
// void call_by_value(int a, int b);//call by value
// void call_by_ref(int *a, int *b);//call by refernce value

void call_by_value(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
void call_by_ref(int *x, int *y)
{
    int c;
    c = *y;
    *y = *x;
    *x = c;
}
int main()
{
    int x = 4, y = 5;
    printf("The value of a and b before sewap is %d and %d. \n", x, y);
    // call_by_value(x, y); // THIS WILL NOT WORK PROPERLY,AS IT IS CALL BY VALUE.
    call_by_ref(&x, &y);
    printf("The value of a nd b after swap is %d and %d. \n", x, y);
    return 0;
} // Always take such variable in main, which is not present in functions.