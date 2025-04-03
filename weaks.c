#include<stdio.h>
int main(){
int day;
printf("Enter a day");
scanf("%d",&day);
day=day%7;
switch(day){
case 0:
     printf("sunday\n");
break;
case 1:printf("monday\n");
break;
case 2:
    printf("tuesday\n");
        break;
case 3: ("wednesday\n");
        break;
case 4 :
        printf("thursday\n");
        break;
case 5:
    printf("friday\n");
    break;
case 6 :
    printf("saturday\n");
    break;
default :
    printf("invalid");
    break;
}
return 0;}

