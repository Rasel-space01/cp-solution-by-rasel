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

//! Uses of Modulus operator

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
/*
#include <stdio.h>
int main() {
int a = 10;// = assign kora
printf("a = %d\n", a);
return 0;
}
*/


//!Compound Assignment Operators.

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
/*
#include<stdio.h>
int main(){
    int num=17;
    printf("The number is: %d\n",num);
    num %=5; //17 % 5 = 2 (17 ক 5 দিয়ে ভাগ করলে ভাগশেষ ২)।
    printf("The final result is: %d",num);
    return 0;
}
*/
//? Increment Operator(++).
/*
#include <stdio.h>

int main() {
    int counter = 0;
    printf("Initial: %d\n", counter);

    counter = counter + 1;
    printf("After 1st increment: %d\n", counter);

    counter = counter + 1;
    printf("After 2nd increment: %d\n", counter);

    counter = counter + 1;
    printf("After 3rd increment: %d\n", counter);

    return 0;
}
 
*/

//counter = counter + 1;  // লম্বা উপায়.
//counter += 1;  // Compound Assignment(shortcut).
//counter++;   // Increment Operator (সবিচেয় ছোট!).


//? Decrement Operator(--).

/*
 #include <stdio.h>

int main() {
    int countdown = 5;

    printf("Countdown: %d\n", countdown);

    countdown--;
    printf("Countdown: %d\n", countdown);

    countdown--;
    printf("Countdown: %d\n", countdown);

    countdown--;
    printf("Countdown: %d\n", countdown);

    countdown--;
    printf("Countdown: %d\n", countdown);

    countdown--;
    printf("Countdown: %d\n", countdown);

    printf("\nBlast off! 🚀\n");

    return 0;
}
*/


//counter = counter - 1; // লম্বা উপায় .
//counter -= 1;// Compound Assignment .
//counter--;// Decrement Operator (সবিচেয় ছোট!) .

//? Postfix vs Prefix .

// a++; // Postfix — ++ পরে

// ++a; // Prefix — ++ আগে

//Postfix (a++) — “আগে use করো, পরে বাড়াও”

/*
#include<stdio.h>
int main()
{
 int a=5;
 int b=a++;  //Postfix.
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 return 0;
}

*/

//Postfix (a++) — “আগে use করো, পরে বাড়াও”
/*
 #include <stdio.h>
   int main() {
   int a = 5;
   int b = ++a; // Prefix
   printf("a = %d\n", a);
   printf("b = %d\n", b);
   return 0;
}
*/

//! Relational Operators.
//? == Equal to.

/*
 #include <stdio.h>
    int main() {
    int result1 = (5 == 5);
    int result2 = (5 == 3);
    printf("5 == 5: %d\n", result1);
    printf("5 == 3: %d\n", result2);
    return 0;
}
*/

//? Not equal to.
/*
  #include <stdio.h>
    int main() {
    int result1 = (5 != 3);
    int result2 = (5 != 5);
    printf("5 != 3: %d\n", result1);
    printf("5 != 5: %d\n", result2);
    return 0;
}  
*/
//? > Greater than.
/*
    #include <stdio.h>
    int main() {
    int result1 = (10 > 5);
    int result2 = (5 > 10);
    int result3 = (5 > 5);
    printf("10 > 5: %d\n", result1);
    printf("5 > 10: %d\n", result2);
    printf("5 > 5: %d\n", result3);
    return 0;
    }
*/
//? < Less than.
//? >= Greater than or equal.
//? <= Less than or equal.
//? Bool Data type ( true or false).


//! Logical Operators.
//? && (AND) ,, || (OR) ,, !(NOT)
//? && দুইটা condition ই true হেল result true হয়। 
//? || যেকোনো একটা condition true হলেই result true হয়।
//? !(NOT)  true কে false, false কে true বানায় ।
//? Example : Student Pass check.
//? Problem: Theory  তে 33+ এবং (Practical এ 33+ অথবা Viva তে 33+)

#include <stdio.h>
int main() {
    int theory = 45;
    int practical = 25;
    int viva = 40;
    int passed = (theory >= 33) && ((practical >= 33) || (viva >= 33));
    printf("Theory: %d\n", theory);
    printf("Practical: %d\n", practical);
    printf("Viva: %d\n", viva);
    printf("Passed: %d\n", passed);
    return 0;
}

//! Bitwise Operators.

//! Bit Operators.