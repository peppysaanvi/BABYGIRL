#include <stdio.h>

int main() 
{
    int array[5]={1,2,3,4,5};
    int avg;
    int sum=0;
    printf("enter array\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&array[i]);
}

for(int j=0;j<5;j++)
{
    sum=sum+array[j];
   
}
 avg=sum/5;
printf("avg=%d",avg);

}
