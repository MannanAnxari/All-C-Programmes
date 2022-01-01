#include <stdio.h>

main()
{
    int a, i = 0, ans, ans2;

    printf("Enter An Integer - ");
    scanf("%d", &a);

    while (a < 10)
    {

        i++;

        ans = i * a;
        printf("\n%d X %d = %d\n", a, i, ans);
    }

    getch();
}
