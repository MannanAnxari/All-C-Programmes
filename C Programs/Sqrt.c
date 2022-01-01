#include <stdio.h>

int sqrt(int a);

int main()
{
    int a, b, i = 0;
    while (i < 10)
    {
        printf("\n\n\nEnter Number You Want To Extract Sqrt : ");
        scanf("%d", &a);

        b = sqrt(a);
        printf("\nYour Sqrt is %d ", b);
        i++;
    }
}

int sqrt(int a)
{

    int b = a * a;
    return b;
}
