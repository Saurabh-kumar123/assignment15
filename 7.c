#include<stdio.h>
#include<conio.h>
void dup(int a[],int s)
{
    int freq[100]={0},i,count=0;
    for(i=0;i<10;i++)
    freq[a[i]]++;
    for(i=0;i<100;i++)
      if(freq[i]!=0)
    if(freq[i]>=2)
    count++;
    printf("dublicate element is %d",count);
}
int main()
{
    int a[10],i;
    printf("enter a array of 10 element\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    dup(a,10);
    return 0;
}