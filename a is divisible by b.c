#include<stdio.h>
int main(){
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if (b==0){
    printf("divisible by zero not allowed.\n");}

   else{
    if(a%b==0)
        printf("%d is divisible by %d.\n",a,b);
    else
        printf("%d is not divisible by %d.\n",a,b);

   }
   return 0;
}
