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




 




