// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     printf("Reversed: %d\n", printf("%d", num) & 0);
//     return 0;
// }


#include <stdio.h>
#include <math.h>

int main() {
    // int num, digits;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // digits = (int)log10(num) + 1; // Correct digit count
    // printf("Reversed: %d\n", (num % 10) * pow(10, digits - 1) + ((num / 10) % 10) * pow(10, digits - 2) + ((num / 100) % 10) * pow(10, digits - 3) + ((num / 1000) % 10) * pow(10, digits - 4)); 
    // return 0;

    char c[] = "qwert";  // Correctly defining a string
    int len = sizeof(c) / sizeof(c[0]) - 1; // Get actual length (excluding '\0')

    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c ", c[j]);  // Correcting character printing
        }
        printf("\n");
    }
    
}
