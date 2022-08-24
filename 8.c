#include<stdio.h>
#include<conio.h>
void dup(int a[],int s)
{
    int freq[100]={0},i;
    for(i=0;i<10;i++)
    freq[a[i]]++;
    for(i=0;i<100;i++)
      if(freq[i]!=0)
    printf("%d ",i);
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