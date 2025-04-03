// #include <stdio.h>
// int main(){
//      int n;
//      printf("enter the number:");
//      scanf("%d",&n);
//      if (n<2){
//           printf("defoult");
//           return 0;
//      }

//      int a=0;
//      for(int i=2;i<n;i++){
//           if(n%i==0){
//                a=1;

//           }
//      }
//      if (a==0){
//           printf("this is prime number");
//      }
//      else{
//           printf("this is composite number ");

//      }
//      return 0;
// }





// #include <stdio.h>

// int main() {
//     int n, i, a = 1;
    
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     if (n < 2) {
        
//         a = 0;
//     } else {
//         for (i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 a = 0;
//                 break;
//             }
//         }
//     }
    
//     if (a==1)
//         printf("%d is a prime number.\n", n);
//     else
//         printf("%d is not a prime number.\n", n);
    
//     return 0;
// }





// #include <stdio.h>

// int main() {
//     int n, i;
    
//     printf("Enter a number: ");
//     scanf("%d", &n);
    
//     for (i = 1; i <= 10; i++) {
//         printf("%d * %d = %d\n", n, i, n * i);
//     }
    
//     return 0;
// }
 

// #include<stdio.h>
// int factorial(int n){
//     if(n==1) return 1;
    
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     int fact = factorial(n);
//     printf("%d",fact);
//     return 0;
// }



// #include<stdio.h>
// void greeting(int n){
//     if(n>100) return;
//         printf("%d\n",n);
//         greeting(n+1);
        
    
//     return;
// }

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     greeting(n);
   
    
//     return 0;
// }

// #include<stdio.h>
// void increasing(int x,int n){
//     if(x>n) return;
//         printf("%d\n",x);
//         increasing(x+1,n);
        
    
//     return;
// }

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     increasing(1,n);
   
    
//     return 0;
// }

// #include<stdio.h>
// void increasing(int n){
//     if(n==0) return;
//          printf("%d\n",n);
//         increasing(n-1);
//         printf("%d\n",n);
        
    
//     return;
// }

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     increasing(n);
   
    
//     return 0;
// }
// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
    
//     sum(n-1,n+s);
    

        
        
    
//     return;
// }

// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     sum(n,0);
   
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a =34;
//     int *x=&a;
//     int **y=&x;
//     int ***z=&y;
//     printf("%d\n",a);
//     printf("%d\n",*x);
//     printf("%d\n",**y);
//     printf("%d\n",***z);
//     return 0;
// }

// #include<stdio.h>
// int min(int a,int b){
//     if(a<b) return a;
//     else return b;
// }
// int gcd(int a,int b){
//     for(int i=1;i>=min;i++){
//         if(a%i==0 && b%i==0){
//             printf("%d",i);

//         }

//     }
//     return;

// }

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("enter the number : \n");
//     int lcm = gcd(a,b);
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("inter the number :");
//     scanf("%d",&a);
//     int root = sqrt(a);
//     printf("the squre root is : %d",root);
//     return 0;
// }

// #include <stdio.h>
// #include<math.h>
// int main(){
//     int a,b;
//     printf("inter the number :\n");
//     scanf("%d %d",&a,&b);
//     int root = sqrt(a);
//     int result = sqrt(b);
//     int p = pow(a,b);
//     printf("the squre root of a is : %d\n",root);
//     printf("the squre root of b is : %d\n",result);
//     printf("the power of this value is : %d\n",p);
//     return 0;
// }

// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=1;i<=x;i++){
//         fact = fact*i;
//     }
//     return fact;

// }
// int combination(int a,int b){
//     int ncr = factorial(a)/(factorial(b)*factorial(a-b));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("enter the number :\n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             int ncr = combination(i,j);
//             printf("%d ",ncr);
//         }
//         printf("\n");
//     }
//     return 0;


// }

// #include<stdio.h>
// int factorial(int x){
//     int fact = 1;
//     for(int i=1;i<=x;i++){
//         fact = fact*i;
//     }
//     return fact;

// }
// int combination(int a,int b){
//     int ncr = factorial(a)/(factorial(b)*factorial(a-b));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("enter the number :\n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for (int k=0;k<=n-i;k++){
//             printf("  ");
//         }
//         for(int j=0;j<=i;j++){
//             int ncr = combination(i,j);
//             printf(" %d ",ncr);
//         }
//         printf("\n");
//     }
//     return 0;


// }

// #include<stdio.h>
// int min(int a,int b){
//     if(a<b) return a;
//     else return b;
// }
// int gcd(int a,int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//             hcf = i;

//         }

//     }
//     return hcf;

// }

// int main(){
//     int a,b;
    
//     printf("enter the number : \n");
//     scanf("%d %d",&a,&b);
//     int hcf = gcd(a,b);
//     int lcm = (a*b)/hcf;
//     printf("hcf of %d and %d is %d \n",a,b,hcf);
//     printf("lcm of %d and %d is %d\n ",a,b,lcm);
//     return 0;
// }

// #include<stdio.h>
// void dec(int n){
//     if(n==0) return;
//     printf("good  ramashish good \n");
//     dec(n-1);
//     return;
// }
// int main(){
//     int n;
//     printf("enter the number : \n");
//     scanf("%d",&n);
//     dec(n);
//     return 0;
// }


// #include<stdio.h>
// void inc(int x,int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     inc(x+1,n);
    
//     return;
// }
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     inc(1,n);
//     return 0;
// }

// #include<stdio.h>
// void dec(int n){
//     if(n==0) return;
//     printf("%d\n",n);
//     dec(n-1);
//     printf("%d\n",n);
//     return;
// }
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     dec(n);
//     return 0;
//  }

// #include<stdio.h>
// void sum(int n){
//     int sum= 0;
//     for(int i=1;i<=n;i++){
//         sum = sum +i;
//     }
//     printf("%d",sum);
//    return;

// }
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     sum(n);
//     return 0;
// }

// #include<stdio.h>
// void sum(int n ,int s){
//     if (n==0)
//     {
//        printf("%d",s);
//        return;
//     }

//     sum(n-1,n+s);
    
// }
// int main(){
//     int n;
//     printf("enter the number :");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
    
//     // Taking input from the user
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {
//         // Printing spaces
//         for (int j = 1; j <= n-i; j++) {
//             printf(" ");
//         }

//         // Printing stars
//         for (int k = 1; k <=i; k++) {
//             printf("*");
//         }
        
//         printf("\n");  // Move to the next line
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
    
//     // Taking input for array size
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Taking input for array elements
//     printf("Enter %d elements: ", n);
//     for (int i = 1; i <= n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Finding the largest number
//     int largest = arr[1];  
//     for (int i = 1; i <= n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }

//     // Printing the largest number
//     printf("The largest number is: %d\n", largest);

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, sum = 0;

//     // Taking input for array size
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Taking input for array elements
//     printf("Enter %d elements: \n", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum = sum + arr[i];  // Adding each element to sum
//     }

//     // Displaying the sum of elements
//     printf("Sum of all elements: %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main() {
    int rows, cols;

    // Taking input for matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], sum[rows][cols];

    // Taking input for first matrix
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
        
    }

    // Taking input for second matrix
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
        
    }

    // Performing matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
        
    }

    // Displaying the result matrix
    printf("Sum of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
