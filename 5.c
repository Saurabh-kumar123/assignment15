#include<stdio.h>
#include<conio.h>
int duplicate(int[],int);
int main()
{
    int a[10],i;
    printf("enter a array of 10 element\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("adjacent duplicate is %d",duplicate(a,10));
    return 0;
}
  int duplicate(int a[],int s)
  {
    int i;
    for(i=0;i<s;i++)
     if(a[i]==a[i+1])
     return a[i];
  }