#include<stdio.h>
#include<conio.h>

int extractAns(int a, int b);

main()
{
   int w, x, valu; /*
    printf("Enter Values Like This ==> (Base, Power)");
    scanf("%d%d",&a,&b);
    val = extractAns(a, b); 
    printf("The Value Of %d To The Power Of %d is %d",a, b, val);
    */
    printf("enter num");
    scanf("%d%d",w,x);
    valu=extractAns (w,x);
    printf("%d",valu);
    }

int extractAns(int a, int b)
{
    int val;
    val=a+b;
    /* for(int loop=0 ; b>val ; loop++) {
        val=val*a;
    } */
printf("%d",val)
}
