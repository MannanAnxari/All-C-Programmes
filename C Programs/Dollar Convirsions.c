#include <stdio.h>
#include <conio.h>

int main()
{
    int i=0;
    char input;
    float dollar = 0.0065;
    float pkr = 152.85;
    float first, ans;

   while (i<10)
   {
       printf("Enter the input character.\n\nq For quit\n1. Dollar To Pkr\n2. Pkr to Dollar\n\n");
       scanf(" %c", &input);
  
       switch (input)
       {
        case 'q':
        printf("Quitting the program...");
        return 0;
       
        case '1':
        printf("Enter How Much Dollar You Can Convert in Pkr\n\n"); 
        scanf("%f", &first);
        
        ans = first * pkr;
        printf("%.2f$ is Your Answer\n\n",ans);
        
        break;
        
        case '2':
        printf("Enter How Much Pkr You Can Convert in Dollar\n\n");
        scanf("%f\n", &first);
        
        ans = first * dollar;
        printf("%.2f$ is Your Answer \n\n",ans);
        
        break;
        
        default :
        return 0;
        }
        
    }


}
