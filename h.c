// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j=j+2){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d ",a);
//             a = a+2;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
       
        
//         for(int j=1;j<=n;j++){
//             int d=a+64;
//             char ch = (char)d;
//             printf("%c " ,ch);
//             a = a+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int a=1;
       
        
//         for(int j=1;j<=i;j++){
//             int d=a+64;
//             char ch = (char)d;
//             printf("%c " ,ch);
//             a = a+1;
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         if(i % 2 != 0){
//             for(int j=1; j<=i; j++){
//                 printf("%d ",j);
//             }
          
//         }
//         else{
//             for(char ch = 'A'; ch < 'A'+i; ch++){
//                 printf("%c ",ch);
//             }
//         }
//        printf("\n"); 
//     }
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if(i==n/2+1 || j==n/2+1){
//                 printf("* ");
//             }
//             else{
//                 printf("# ");
//             }
           
//         } 
//         printf("\n");
       
        
        
        
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j = 1; j<=n; j++){
//             if(j==(n/2)+1 || i==(n/2)+1){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
           
//         } 
//         printf("\n");
       
        
        
        
//     }
//     return 0;

// }


// #include<stdio.h>
// int main(){
//     int row ,col;
//     printf("enter the valule ");
//     scanf("%d %d",&row,&col);

//     for(int i =1; i<=col; i++){
//         for(int j =1;j<=row;j++){
//             if(i==1 || i == col || j==1 || j==row ){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the valule ");
//     scanf("%d",&n);

//     for(int i =1; i<=n; i++){
//         for(int j =1;j<=n;j++){
//             if(i==j || i+j== n+1 || i==n/2 +1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the valule ");
//     scanf("%d",&n);
//     int a=1;
//     for(int i =1; i<=n; i++){
//         for(int j =1;j<=i;j++){
//             printf("%d ",a);
//             a=a+2;

//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a ,n;
//     printf("enter the valule ");
//     scanf("%d",&n);
    
//     for(int i =1; i<=n; i++){
//         if(i%2!=0) a=1;

//         else
//         a = 0;
//         for(int j =1;j<=i;j++){
//             printf("%d ",a);
           

//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a ,n;
//     printf("enter the valule ");
//     scanf("%d",&n);
    
//     for(int i =1; i<=n; i++){
//         if(i%2!=0) a=1;

//         else
//         a = 0;
//         for(int j =1;j<=i;j++){
           
           
//             printf("%d ",a);
//             if(a==0) a=1;
//             else
//             a=0;
            

//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {  
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) { 
//             printf("*");
//         }
//         printf("\n");  
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) {  
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (int k = 1; k <= n; k++) { 
//             printf("*");
//         }
//         printf("\n");  
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
    

//     for (int i = 1; i <= n; i++) { 
        
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
       
        
//         for (char ch = 'A';ch< 'A'+i; ch++) { 
//             printf("%c",ch);
            
//         }
      
//         printf("\n");  
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (int k = 1; k <= (2*i-1); k++) {  
//             printf("*");
//         }
//         printf("\n");  
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (int k = 1; k <= (2*i-1); k++) {  
//             printf("%d",k);
//         }
//         printf("\n");  
//     }

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: "); 
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (char ch= 'A'; ch <= 'A'+(2*i-1); ch++) {  
//             printf("%c",ch);
//         }
//         printf("\n");  
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: "); 
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");

//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }

    

//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     for (int i = n; i >= 1; i--) { 
//         for (int j = 1; j <= n - i; j++) {  
//             printf(" ");
//         }
//         for (int k = 1; k <=2*i-1; k++) {  
//             printf("*");
//         }
//         printf("\n");  
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     int nst=n;
//     int nsp=1;

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <= nst; j++) {  
//             printf("*");
//         }
//         for (int k = 1; k <=nsp; k++) {  
//             printf(" ");
//         }
//         for (int j = 1; j <= nst; j++) {  
//             printf("*");
//         }    
//         nst--;
//         nsp+=2;


//         printf("\n");  
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;  // You can change the value of n for different patterns
//     printf("enter the value ");
//     scanf("%d",&n);

//     for (int i = n; i >= 1; i--) {
//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }

//         // Spaces in the middle
//         for (int j = 1; j <= 2*(n-i); j++) {
//             printf(" ");
//         }

//         // Right stars
        
//         for (int j = 1; j <= i; j++) {
//             printf("*");
//         }
        

//         printf("\n"); // Move to next line
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int n;  // You can change the value of n for different patterns
//     printf("enter the value ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
        
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
        
//         printf("\n");
//     }

    

//     return 0;
// } 

// #include <stdio.h>

// int main() {
//     int n = 7; // Pattern size

//     for (int i = 0; i < n / 2 + 1; i++) { // Rows loop
//         // Left Side Numbers
//         for (int j = 1; j <= n / 2 + 1 - i; j++) {
//             printf("%d", j);
//         }

//         // Middle Spaces
//         for (int j = 1; j <= 2 * i; j++) {
//             printf(" ");
//         }

//         // Right Side Numbers
//         for (int j = n - i; j <= n; j++) {
//             printf("%d", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;

//     for(int i =1;i<=n;i++){
//         fact = fact*i;
//     }
//     return fact;
// }
// int combination(int x, int y){
//     int ncr = factorial(x)/(factorial(y)*factorial(x-y));
//     return ncr;
// }
// int main(){
//     int n;
//     printf("enter the number : ");
//     scanf("%d",&n);
//     for(int i = 0; i<=n;i++){
//         for (int space = 0; space < n - i; space++) {
//             printf(" ");
//         }
//           for(int j =0;j<=i;j++){
//               int icj = combination(i,j);
//               printf(" %d ",icj);
//             }
//         printf("\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// void swap(int* x, int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a = 4;
//     int b = 8;
//     swap(&a,&b);
//     printf("the value of a is %d \n ",a);
//     printf("the value of b is %d \n ",b);
//     return 0;
// }

// #include<stdio.h>
// int min(int a, int b){
//     if(a<b)
//     return a;
//     else
//     return b;
// }
// int gcd(int a,int b){
//     int hcf;
//     for(int i=1;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
            
//             printf("%d",i);
//             hcf = i;
            
//         }
//     }
//     return hcf;
// }
// int main(){
//     int a;
//     printf("enter the number a : \n");
//     scanf("%d,",&a);
//     int b;
   
//     printf("enter the number b :\n ");
//     scanf("%d",&b);
//     int hcf = gcd(a,b);
//     printf("%d",hcf);
//     return 0;
// }

// #include <stdio.h>

// // Minimum value function
// int min(int a, int b) {
//     return (a < b) ? a : b;
// }

// // Function to find HCF and print all common divisors
// int gcd(int a, int b) {
//     int hcf;
//     printf("Common divisors of %d and %d are: ", a, b);
    
//     for (int i = 1; i <= min(a, b); i++) {
//         if (a % i == 0 && b % i == 0) {
//             printf("%d ", i);  // Printing common divisor
//             hcf = i;  // Updating HCF
//         }
//     }
    
//     return hcf;
// }

// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
    
//     int hcf = gcd(a, b);
    
//     printf("\nHCF of %d and %d is: %d\n", a, b, hcf);
    
//     return 0;
// }
