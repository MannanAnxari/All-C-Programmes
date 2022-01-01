#include <stdio.h>
#include <conio.h>

int main()

{
    char input, operator;
    int i=0, a = 1, first, second, n1;
    int h, m, s, delay=5;


    while(i<5)
    {
        printf("\n\n1 ==> Arithmetic Operators\n2 ==> Create Any Number Of Table\n3 ==> Digital Clock\n");
        scanf("%d", &input);

        switch(input)

        {

        case 1 : 
		{
            printf("\nEnter an Operator (+, -, *, /): ");
            scanf("%s", &operator);
            printf("\nEnter Two Numbers: ");
            scanf("%d %d", &first, &second);

            switch (operator)
            {
            case '+':
                printf("%d + %d = %d", first, second, first + second);
                break;
            case '-':
                printf("%d - %d = %d", first, second, first - second);
                break;
            case '*':
                printf("%d * %d = %d", first, second, first * second);
                break;
            case '/':
                printf("%d / %d = %d", first, second, first / second);
                break;
                // operator doesn't match any case constant
            }
            break;
        }
        case 2 :

		{
			
            printf("\nEnter What Number You Want Table\n");
            scanf("%d", &n1);

            while(a<11)
            {
                printf("%d × %d = %d \n", n1, a, a*n1);
                a++;
            }
            break;
		}
        
		
            default:
                printf("Error! Incorrect Value");
        		break;
    	}
        i++;
    }
}








