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


