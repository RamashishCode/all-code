#include<stdio.h>
int main(){
    int arr[7]={3,4,2,3,7,4,7};
    for( int i=0;i<7;i++){
        for(int j= i+1;j<7;j++){
        if(arr[i]!=arr[j]){
            printf( "%d",arr[i]);

        }
      }
    }
return 0;
}
