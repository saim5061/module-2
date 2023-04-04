// #include <stdio.h>
//     int main()
//     {
//         int x=0;
//         if (x) {
//             printf("hi");
//         }
//         else {
//             printf("how are u");
//         }
//     }
// In C, any value that is not 0 is considered to be true, and 0 is considered to be false.



//  #include <stdio.h>
//     int main()
//     {
//         int x = 0;
//         if (x == 1) {
//             if (x >= 0) {
//                 printf("true ");
//             }
//             else {
//                 printf("false");
//             }
//         }
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x = 5;
//         if (x < 10) {
//             printf("hello ");
//         }
//         if (x == 5) {
//             printf("hi");
//         }
//         else {
//             printf("no");
//         }
//     }


// Program to display a number if it is negative

#include <stdio.h>
// int main() {
//     int number;

//     printf("Enter an integer: ");
//     scanf("%d", &number);

//     // true if number is less than 0
//     if (number < 0) {
//         printf("You entered %d.\n", number);
//     }

//     printf("The if statement is easy.");

//     return 0;
// }


// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}