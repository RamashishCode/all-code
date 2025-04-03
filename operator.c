#include<stdio.h>
__AW_ALIAS__

int main(){
int a,b;
   char operator;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
printf("Choose an operation(+,-,%%,*,/):");
scanf(" %c" , &operator);
switch(operator){
case '+':
     printf("results: %d + %d = %d",a,b,a+b);
break;
case '-':printf("results %d-%d=%d",a,b,a-b);
break;
case '%':
    if (b!=0)
        printf("results: %d %% %d=%d.\n",a ,b,a%b);
    else
        printf("Error: Modulus by zero is not allowed\n");
        break;
case '*': ("results: %d * %d = %d.\n",a,b,a*b);


        break;
case '/' :if(b!=0)
        printf("results:%d/%d=%d.\n",a,b,a/b);
        else
        printf("results: division by zero is not allowed.\n");
        break;
case 'default':
    printf("default");
    break;
}
return 0;}

