#include <stdio.h>
#include <conio.h>

int main()
{
    int mon, day, i=0;

    while(i<10)

    {

        printf("\n\nEnter Your Birth Month : ");
        scanf("%d", &mon);

        printf("Enter Your Birth Day : ");
        scanf("%d", &day);

        if( (mon == 12 && day >= 22) || (mon == 1 && day <= 19) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is CAPRICORN\n");
        }
        else if( (mon == 1 && day >= 20) || (mon == 2 && day <= 17) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is AQUARIUS\n");
        }
        else if( (mon == 2 && day >= 18) || (mon == 3 && day <= 19) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is PISCES\n");
        }
        else if( (mon == 3 && day >= 20) || (mon == 4 && day <= 19) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is ARIES\n");
        }
        else if( (mon == 4 && day >= 20) || (mon == 5 && day <= 20) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is TAURUS\n");
        }
        else if( (mon == 5 && day >= 21) || (mon == 6 && day <= 20) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is GEMINI\n");
        }
        else if( (mon == 6 && day >= 21) || (mon == 7 && day <= 22) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is CANCER\n");
        }
        else if( (mon == 7 && day >= 23) || (mon == 8 && day <= 22) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is LEO\n");
        }
        else if( (mon == 8 && day >= 23) || (mon == 9 && day <= 22) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is VIRGO\n");
        }
        else if( (mon == 9 && day >= 23) || (mon == 10 && day <= 22) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is LIBRA\n");
        }
        else if( (mon == 10 && day >= 23) || (mon == 11 && day <= 21) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is SCORPIO\n");
        }
        else if( (mon == 11 && day >= 22) || (mon == 12 && day <= 21) )
        {
            printf("\n\nYour Zodiac Sign According to your Birth date is SAGITTARIUS\n");
        }
        else
        {
            printf("\n\nInvalid Date of Birth\n");
        }

    }

    return 0;
}
