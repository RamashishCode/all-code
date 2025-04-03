#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
  if(a>b){
   int temp=a;
    a=b;
    b=temp;
  }
  printf("the numbers between %d and %d is :",a,b);
  for ( int i=a; i<=b;i++)
  printf(" %d",i);
   return 0;}
