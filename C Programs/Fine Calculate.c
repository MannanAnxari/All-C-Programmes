#include <stdio.h>
#include <conio.h>

int main()

{
    int num, i=0;

    while(i<10)

    {

        printf("\n\nWrite down the number of days you returned the book : ");
        scanf("%d", &num);

        if( (num >= 1) && (num <= 5) )
        {
            printf("\n\nFine For Late Book Return is 10/- Rupees\n");
        }

        else if( (num >= 6) && (num <= 10) )
        {
            printf("\n\nFine For Late Book Return is 20/- Rupees\n");
        }

        else if( (num >= 11) && (num <= 29) )
        {
            printf("\n\nFine For Late Book Return is 40/- Rupees\n");
        }

        else if(num >= 30)
        {
            printf("\n\nSorry I can't Deal With You Again\n");
        }

    }

    return 0;
}
