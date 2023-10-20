#include<stdio.h>
int main()
{
    int n,i=1,oddSum=0,count=0;
    scanf("%d",&n);
    printf("The odd numbers are :",n);
    while(1){
            if(i%2!=0){
                printf("%d ",i);
                oddSum = oddSum+i;
                count++;
            }
            if(count==n) break;
            i++;
    }
    printf("\nThe Sum of odd Natural Number upto %d terms : %d\n",n,oddSum);
    //Alraaafi
}
