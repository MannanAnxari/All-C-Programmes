#include <stdio.h>

int extractAns(int a, int b);

int main()
{
    int n1,n2,pow;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    pow = extractAns(n1, n2);       
    printf("sum = %d",pow);

    return 0;
}

int extractAns(int a1, int b1)
{
    int result=1;
    
    for(int loop=0 ; b1>loop ; loop++) {
        result=result*a1;
    }
//    return result;                  
}
