#include <stdio.h>
#include <conio.h>

int main()
{
	int user, unit1;
	float result;
	
	printf("Press 1 For Inch To Foot\nPress 2 For Inch To Meter\n ");
	scanf("%d", &user);
	
	switch(user)
	{
	case 1:
		printf("Press 1 For Inch To Foot \n Press 2 For Foot To Inch");
		scanf("%d", &unit1);
           
		    if(unit1==1)
		{
            printf("Enter Your Inch :\n");
            scanf("%f", &unit1);
            printf("%f Inch = %f Foot\n", unit1 = unit1 / 12);
    	 }
	   
	        else if (unit1==2)
	    {
	        printf("Enter Your Foot :\n");
	        scanf("%f", &unit1);
            printf("%f Foor = %f Inch\n", unit1 = unit1 * 12);
        }
    case 2:
		printf("Press 1 For Inch To Meter \n Press 2 For Meter To Inch");
		scanf("%d", &unit1);
           
		    if(unit1==1)
		{
            printf("Enter Your Inch :\n");
            scanf("%f", &unit1);
            printf("%f Inch = %f Foot\n", unit1 = unit1 / 12);
    	}
	        else if (unit1==2)
	    {
	        printf("Enter Your Meter :\n");
	        scanf("%f", &unit1);
            printf("%f Inch = %f Meter\n", unit1 = unit1 * 12);
	   }
}
	
	
}
	

