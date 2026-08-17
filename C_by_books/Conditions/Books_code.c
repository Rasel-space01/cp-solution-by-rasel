//! Conditional statement (if-else)
/*
if(condition){

}
*/
/*
#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        printf("%d is positive\n", num);
    }

    printf("Program ended\n");

    return 0;
}
*/

//! if-else 
/*
    if (condition) {
    // condition true হলে এটা চলেবে
    } else {
    // condition false হলে এটা চলেবে
    }
*/
//?Example 1: Even or Odd (% operator)
/*
 #include <stdio.h>
int main() {
    int num = 7;
    if (num % 2 == 0) {
    printf("%d is even\n", num);
    } else {
    printf("%d is odd\n", num);
    }
    return 0;
}
*/
//? Grade system .

#include <stdio.h>

int main() {
    int marks = 75;

    if (marks >= 80) {
        printf("Grade: A+\n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: A-\n");
    } else if (marks >= 50) {
        printf("Grade: B\n");
    } else if (marks >= 40) {
        printf("Grade: C\n");
    } else if (marks >= 33) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}




