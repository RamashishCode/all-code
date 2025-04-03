
#include <stdio.h>
int main(){
     int n;
     printf("enter the number:");
     scanf("%d",&n);




     for(int i=2;i<=n;i++){
          if(n%i==0){
            printf("this is not prime");}
            else if( n%i!=0){
                printf("this is prime");}
                else {
                    printf("ramashish");
                }


     }
     return 0;
}
