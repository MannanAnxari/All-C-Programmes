#include<stdio.h>

main()

{

char input;
float dol = 0.0065 , pkr = 152.80 , m, ans;

printf("Enter 1 For USD To PKR\nEnter 2 For PKR To USD\nEnter q For Quit\n");
scanf("%c",&input);

switch(input)

{

case '1':
	printf("Enter How Many USD You Can Convert into PKR\n");
	scanf("%f", &m);
	
	ans = m * pkr;
	printf("%.2f$ is Answer",ans);	
	break;
	
case '2':
	printf("Enter How Many PKR You Can Convert into USD\n");
	scanf("%f", &m);
	
	ans = m * dol;
	printf("%.2f$ is Answer",ans);
	break;
	
case 'q':
	printf("Quittting The Program...\n");
	return 0;
	
	default:
		break;
}
	
}
