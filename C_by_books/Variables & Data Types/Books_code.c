//!✅✌First problem solve.

/*
#include<stdio.h>
int main(){
    printf("Hello world!");
    return 0;
}
*/

//! escape sequencelike (\n-new line, \t-tab space)
/*
#include <stdio.h>
int main() {
  printf("Hello\n");
  printf("World");
   return 0;
}

*/

//! Formate specifier(%d,%lf,%c,%f)
//? int(%d)
/*
#include<stdio.h>
int main()
{
    int age =25;
    printf(" my age is: %d",age);
    return 0;
}
*/

//? float(%f)

/*
#include<stdio.h>
int main() {
float price = 99.50;
printf("Price is %f", price);
return 0;
}
*/

//? Double(%lf)
/*
#include <stdio.h>
int main() {
double pi = 3.14159265358979;
printf("PI = %.10lf", pi);
return 0;
}
*/

//? Char (%c)
/*
#include <stdio.h>
int main() {
char grade = 'A';
printf("Your grade is %c", grade);
return 0;
}
*/

//? long long  (data type)
/*
#include <stdio.h>
int main() {
long long population = 8000000000; 
printf("World population: %lld", population);
return 0;
}
*/



//?— Integer Overflow (like int,long long).
/*
#include <stdio.h>
int main() {
int num = 2147483647;
num = num + 1;
printf("%d", num);
return 0;
}
*/

//? Two Variable into the Text.

/*
#include<stdio.h>
int main() {
    int age =34;
    int marks =78;
        printf(" The age is: %d \n The marks is: %d",age,marks);

       // printf(" The age is: %d and The marks is: %d",age,marks);
    return 0;
}
*/
//? Format specifier আর variable এর order always match korte hobe.
#include<stdio.h>
int main() {
    int age = 25;
    int marks = 95;
    int roll = 101;
    printf("Age: %d, Marks: %d, Roll: %d", age, marks, roll);
    return 0;
}
