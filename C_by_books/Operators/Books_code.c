//! Arithmetic Operators( + , - , * , / , %)

/*
 #include <stdio.h>
int main()
{
    //int a= 5,b=6;
    int sum= 5+5;;
    //printf(" The sum is: %d", a+b);
    printf(" The sum is: %d", sum);
    return 0;
}
*/

//? User input to sum.

/*
#include <stdio.h>
int main() {
int a, b;
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
int sum = a + b;

//printf("%d + %d = %d\n", a, b, sum);
printf(" %d\n", sum);
return 0;
}
*/
//! Modulus operator (%)

// only find (reminder)

/*
#include <stdio.h>
int main() {
int a = 7;
int b = 3;
int quotient = a / b; // ভাগফল
int remainder = a % b; // ভাগশেষ
printf("Quotient = %d\n", quotient);
printf("Remainder = %d\n", remainder);
return 0;
}

*/

//? Uses of Modulus operator

//? Even or odd find
/*
#include <stdio.h>
int main() {
int num = 7;
int remainder = num % 2;
printf("%d from 2 to divide and got reminder = %d\n", num, remainder);
// remainder 1, তাই 7 বিজাড়!
return 0;
}
*/

//? Clock calculate
/*
 #include <stdio.h>
int main(){
    int hours = 25;
    int clock = hours %2;
    printf(" %d Hour = %d min\n", hours, clock);// 25 hour por 1 ta bajbe.

    return 0;
}
*/

//? last digit finding.

/*
#include <stdio.h>

int main() {
    int num = 12345;
    int last_digit = num % 10;

    printf("%d এর শেষ digit = %d\n", num, last_digit);

    return 0;
}

*/
//? Make a calculator

/*
#include <stdio.h>

int main() {
    int a, b;

    printf("===== Simple Calculator =====\n\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n===== Results =====\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float)a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    return 0;
}

*/

//? find a average?

/*
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    float avg = (float)sum / 3;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
*/

//? find the percentage.
/*
#include <stdio.h>

int main() {
    int obtained, total;

    printf("Enter obtained marks: ");
    scanf("%d", &obtained);

    printf("Enter total marks: ");
    scanf("%d", &total);

    float percentage = ((float)obtained / total) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}

*/


//! Assignment Operators.
//? Addition assignment
/*
#include <stdio.h>
 int main(){
    int a=10;
    printf("Initial : a = %d\n",a);
    a+=5; //a=a+5
    printf("Final output: %d\n",a);
    return 0;
 }
*/
//?Subtraction assignment.
/*
 #include <stdio.h>

 int main() {
    int balance = 1000;  
    printf("Initial balance: %d\n", balance);

    balance -= 250;  //a=a-250
    printf("After withdrawing 250: %d\n", balance);

    balance -= 175; 
    printf("After withdrawing 175: %d\n", balance);

    printf("\nRemaining balance: %d\n", balance);

    return 0;
}
*/
 
//?Multiplication Assignment.
/*
#include <stdio.h>

int main() {
    int num = 2;
    printf("Initial: %d\n", num);

    num *= 3;  // 2 * 3 = 6
    printf("After num *= 3: %d\n", num);

    num *= 4;  // 6 * 4 = 24
    printf("After num *= 4: %d\n", num);

    return 0;
}
*/
 
//?Division Assignment.
/*
#include <stdio.h>

int main() {
    int num = 100;
    printf("Initial: %d\n", num);

    num /= 2;  // 100 / 2 = 50
    printf("After num /= 2: %d\n", num);

    num /= 5;  // 50 / 5 = 10
    printf("After num /= 5: %d\n", num);

    return 0;
}
*/
//?Modulus Assignment.
#include<stdio.h>
int main(){
    int num=17;
    printf("The number is: %d\n",num);
    num %=5;
    printf("The final result is: %d",num);
    return 0;
}

 
//! Relational Operators.
//! Logical Operators.
//! Bitwise Operators.
//! Bit Operators.