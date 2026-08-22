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
/*
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
*/

//? Nested if-(if er bitor if).
 /*
  #include <stdio.h>
 #include <stdbool.h>
 int main(){
    if(true){
        printf("Outer if executed\n");
        if(true){
            printf(" Inner if executed\n");
        }

    }
    return 0;
 }


 */
//? Discount System.
/*
    #include <stdio.h>
#include <stdbool.h>
int main() {
    int totalBill = 1500;
    bool isMember = true;
    if (totalBill > 1000)
     {
        printf("Bill is above 1000\n");
    
      if (isMember) 
      {
        printf("You get 20%% discount!\n");
      } 
    else {
       printf("You get 10%% discount.\n");
         }
      }
    else
     {
    printf("No discount for bills under 1000.\n");
     }
    return 0;

}

*/

//! Switch case:
//এত else if লিখতে হচ্ছে!
//এরকম situation এর জন্য আছে switch-case — অনেক clean এবং readable!


//Syntax:
/*
    switch (expression) {
    case value1:
        // value1 হলে এটা চলবে
        break;

    case value2:
        // value2 হলে এটা চলবে
        break;

    case value3:
        // value3 হলে এটা চলবে
        break;

    default:
        // কোনো case match না করলে এটা চলবে
}
*/

//? Example:
/*
    #include <stdio.h>

int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            printf("You selected ONE\n");
            break;

        case 2:
            printf("You selected TWO\n");
            break;

        case 3:
            printf("You selected THREE\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

*/

//? Practice problem (Simple Calculator).
 /* 
 #include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

 */

 //! Loops:

 //? while Loop.
 /*
    #include<stdio.h>
 int main()
 {
    int count =0;
    while(count<100){
        printf("Rafiqe\n");
        count++;
    }
 }
 */
//? Practice example:
//1 To N until summation.
/*
    #include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0;        // যোগফল শুরুতে 0
    int i = 1;          // 1 থেকে যোগ শুরু করবো

    while (i <= n) {    // N পর্যন্ত যোগ করবো
        sum = sum + i;  // যোগ করো
        i++;            // পরের number এ যাও
    }

    printf("Sum = %d\n", sum);

    return 0;
}

*/

//? Infinite Loop (যে লুপ কখন ও শেষ হয় না).

//? Break Statement.
/*
    #include <stdio.h>

int main() {
    int i = 1;

    while (i <= 100) {
        printf("%d ", i);

        if (i == 5) {
            printf("\n\nFound 5! Stopping...\n");
            break;  // Loop থেকে বের!
        }

        i++;
    }

    printf("Loop ended.\n");

    return 0;
}

*/

//? Break example.
 /*
    #include <stdio.h>

int main() {
    int password = 1234;
    int input;
    int attempts = 0;

    printf("=== Login System ===\n\n");

    while (attempts < 3) {
        printf("Enter password: ");
        scanf("%d", &input);

        attempts++;

        if (input == password) {
            printf("\n✓ Access granted!\n");
            break;
        } else {
            printf("✗ Wrong password! %d attempt(s) left.\n\n", 3 - attempts);
        }
    }

    if (attempts == 3 && input != password) {
        printf("Account locked!\n");
    }

    return 0;
}

 */
//? continue statement .

/*
#include <stdio.h>

int main() {
    int i = 0;

    printf("Odd numbers from 1 to 10:\n");

    while (i < 10) {
        i++;

        if (i % 2 == 0) {
            continue;  // Even হলে skip করো
        }

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

*/

//! For loop
/*
    for (initialization; condition; update) {
    // code
      }
*/
//? Example: 1 to N unil summation.
/*
    #include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i এর shortcut (পর্ব ৯ এ শিখেছি)
    }

    printf("Sum of 1 to %d = %d\n", n, sum);

    return 0;
}
 


*/
//? Nested for loop ( loop vitor loop)
/*
    #include <stdio.h>

int main() {
    int rows = 3;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {       // বাইরের loop: row
        for (int j = 1; j <= cols; j++) {   // ভেতরের loop: column
            printf("*");
        }
        printf("\n"); // প্রতি row এর পর new line
    }

    return 0;
}
*/
//?for Loop এ break এবেং continue.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            printf("\nFound 6! Stopping...\n");
            break;
        }
        printf("%d ", i);
    }

    return 0;
}

 
 




 




