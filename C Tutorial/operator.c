#include<stdio.h>
#include<math.h>

int main()
{
    int b,c;
    int t=(int)1.99999;
    b=c=5;
    int a=b+c;
    int power = pow(b,c);
    printf("%d\n",a);
    printf("%d\n",power);
    printf("%d\n",16%6);
    printf("%d\n",-16%6);
    printf("%d\n",9*9);
    printf("%f\n",4*2.5);
    printf("%f\n",16.0/6);
    printf("%d\n",t);
    printf("%d\n",4 != 4);
    printf("%d\n",4==4);
    printf("%d\n",3>4 && 5>3);
    printf("%d\n",4>=4 && 5>3);
    printf("%d\n",3>4 || 5>3);
    printf("%d\n",!((3>4) && (5>3)));

    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("%d",x%2==0);


    return 0;

}