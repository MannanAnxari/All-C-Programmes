#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main()
{
	int ms, s, m, h;
	int d2=5;
	
	printf("                                    Set Time\n");
	
	printf("\n                                Enter Mili Second = ");
	scanf("%d",&ms);
	
	printf("\n                                   Enter Second = ");
	scanf("%d",&s);
	
	printf("\n                                   Enter Minutes = ");
	scanf("%d",&m);
	
	printf("\n                                    Enter Hours = ");
	scanf("%d",&h);
	
	if (ms>100 || s>60 || m>60 || h>12)
	{
		printf ("\n                                        ERROR...!\t\t\t\t");
		exit (0);
	}
	while (1)
	{
		ms++;
		if(ms>99)
		{
			s++;
			ms=0;
		}
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
		if(h>11)
		{
			h=0;
		}
		printf("\n                                   Clock\n");
		
		printf("\n                                H : M : S : MS \n");
		
		printf("\n                                 %02d:%02d:%02d [%02d]",h,m,s,ms);
		Sleep(d2);
		
		system("cls");
    }
}

