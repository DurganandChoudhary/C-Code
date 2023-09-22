#include<stdio.h>

int check_prime(int num);
void printPrimes(int lowerlimit,int upperlimit);

int main()
{
    int lowerlimit,upperlimit;

    printf("Enter the lower and upper limit to primes: \n");
    scanf("%d%d",&lowerlimit,&upperlimit);
    printPrimes(lowerlimit,upperlimit);
    return 0;
}
void printPrimes(int lowerlimit,int upperlimit)
{
    printf("All prime numbers between %d to %d are: \n",lowerlimit,upperlimit);

    while (lowerlimit<=upperlimit)
    {
        if(check_prime(lowerlimit))
        {
            printf("%d \n",lowerlimit);
        }
        lowerlimit++;
    }
    
}
int check_prime(int num)
{
    int i;
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}