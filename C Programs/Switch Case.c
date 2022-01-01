#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

main()
{
	char a, b, c;
	int no1,no2,no3,no4;
	
	printf("Press A To D\n\n                                                             A = Login\n\n                                                             B = Signup\n\n                                                             C = Exit\n\n                                                             ");
	
	scanf("%c",&a);
	
	switch(a)
    {
        case 'a':
            printf("\n                                     **********************************************************\n");
            printf("                                     *                         LOGIN                          *");
            printf("\n                                     **********************************************************\n");
            printf("\nUSERNAME = ");
            scanf("%s",&b);
            printf("PASSWORD = ");
            scanf("%s",&c);
        
            {printf("\n\n                                                      Your Account Suspend...!\n\n\n\n\n\n\n\n");
            getch();
			}
            
            break;

        case 'b':
        	printf("\n                                     **********************************************************\n");
            printf("                                     *                         SIGNUP                         *");
            printf("\n                                     **********************************************************\n");
            printf("\nUSERNAME = ");
            scanf("%s",&b);
            printf("PASSWORD = ");
            scanf("%s",&c);
            
            {printf("\n\n                                       Your Account Has Created I Will Contact You Later...!\n\n\n\n\n\n\n");

            getch();
			}
            
            break;
        
            case 'c':
            	printf("\n\n\n                                                         Press Any Key To EXIT",no4);
            break;
            

        default:
        	printf("\n                                     **********************************************************\n");
            printf("                                     *                     Invalid Clicks                     *");
            printf("\n                                     **********************************************************\n");

    }
}
