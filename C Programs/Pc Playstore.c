#include <stdio.h>
#include <conio.h>
#include <windows.h>

main()

{
	int h, m, s, delay=1000;
			
            printf("\nEnter Hours: ");
            scanf("%d", &h);

            printf("\nEnter Minuts: ");
            scanf("%d", &m);

            printf("\nEnter Second: ");
            scanf("%d", &s);

            if(h>12 || m>60 || s>60)
            {
                printf("Error! Incorrect Value");
            }

            while(1)
            {
                s++;
                if(s>59)
                {
                	m++;
                    s=0;
                }
                if(m>59)
                {
                	h++;
                    m=0;
                }
                if(h>12)
                {
                    h=0;
                }
                printf("\nHH : MM : SS\n");
                printf("%02d : %02d : %02d",h,m,s);
                Sleep(delay);
                system("cls");

			}
}
