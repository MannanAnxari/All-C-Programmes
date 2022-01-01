#include <stdio.h>
#include <conio.h>
int main()
{
    int phy, chem, bio, math, comp;
    int sum;
	float per; 

    // Input marks of five subjects from user
    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);
    
    printf("Enter Biology marks: ");
    scanf("%d", &bio);
    
    printf("Enter Math marks: ");
    scanf("%d", &math);
    	
    printf("Enter Computer marks: ");
    scanf("%d", &comp);

    sum = (phy + chem + bio + math + comp);
    printf("\nYour Total Sum is = %d", sum);
     
     
    /* Calculate percentage */
    per = (phy + chem + bio + math + comp) / 5.0;

    printf("\nYour Percentage Is = %.f % \n", per);
    
    // Make Grade Using Percentage & IF ELSE Functions
    
    if(per >= 90)
        printf("Your Grade is A+\n");
    
    else if(per >= 80)
        printf("Your Grade is A\n");
    
    else if (per >=70)
	    printf("Your Grade is B");
    
    else if (per >=60)
	    printf("Your Grade is C");

     else if (per >=50)
	    printf("Your Grade is C");
	    
	 else if (per >=40)
	    printf("Your Grade is D");
	    
    else
    {
    	printf("LOSSSSERRRRRR");
	}

    getch();
}

