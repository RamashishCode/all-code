#include <stdio.h>
int main(){
     int n;
     printf("enter the number:");
     scanf("%d",&n);
     if (n<2){
          printf("defoult");
     }

     int a=0;
     for(int i=2;i<=n;i++){
          if(n%i==0){
               int a=1;
          }
     }
     if (a==0){
          printf("this is prime number");
     }
     else if (a==1){
          printf("this is composite number ");
      
     }
     return 0;
}



