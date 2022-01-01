#include <stdio.h>

int main()
{

    int inte; 

while(1)
{
    printf("\n\n\n          Crach The Password...!\n\n 'q' For quit\n\n\n            [ 7 | 3 | 0 | 9 ]\nOne Number is Correct But Wrongly Pleased\n\n\n            [ 2 | 6 | 1 | 8 ]\nOne Number is Correct But Wrongly Pleased\n\n\n            [ 4 | 9 | 0 | 3 ]\nTwo Number is Correct But Wrongly Pleased\n\n\n            [ 0 | 2 | 4 | 1 ]\nOne Number is Correct But Wrongly Pleased\n\n\n            [ 1 | 0 | 4 | 5 ]\n            Nothing is Correct");
    printf("\n\n\nEnter The Password : ");
    scanf(" %d", &inte);
      
    if(inte == 9638)
    printf("Your Password is Correct\n");
    
    else
    printf("\nYour Password is incorrect"); 
}

return 0;
}
