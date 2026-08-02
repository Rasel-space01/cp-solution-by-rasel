//! ✅✅Class -4 ( Introduction to Conditional Statements)✌💥💚
/*
#include <stdio.h>
int main()
{
    int age;
    printf(" Enter your age:");
    scanf("%d",&age);
    if(age<=18){
        printf("Votter");
    }
    else{
        printf(" Non votter");
    }
}
*/

//? x==y
//? x=y 
/*
if(x==y){
        printf("It,s equal");
    }
    else{
        printf(" Not equal");
    }
//!
if(x=y){
        printf("");
    }
    else{
        printf(" ");
    }

*/

/* 
if( age>=18){
    printf("you are eligible to vote\n");
}
else if(age==17){
    printf("you will be eligible to vote next year");
}
else{
    printf("Ypu are not eligible to vote");
}

*/
//! And operator uses
/*
#include <stdio.h>

int main() {
    int x = 60;

    if (x >= 10 && x <= 20) {
        printf("x is between 10 and 20\n");
    }
    else if (x >= 30 && x <= 40) {
        printf("x is between 30 and 40\n");
    }
    else {
        printf("x is out of range\n"); 

    return 0;
}
*/

//?Check Day Type using OR Operator

/*
#include <stdio.h>

int main() {
    int day = 6; 
    
    if (day == 6 || day == 7) {
        printf("Enjoy! Today is a weekend (Holiday).\n");
    } 
    else {
        printf("Get back to work! Today is a weekday.\n");
    }
    return 0;
}
*/


//!Individual vs Combined Income Status(if-else).

#include <stdio.h>

int main() {
    int fatherIncome = 30000;
    int yourIncome = 20000;

    if ((fatherIncome >= 50000 || yourIncome >= 50000) && fatherIncome >= yourIncome) {
        printf("Family Run by Individual Income and It was father\n");
    }
    else if ((fatherIncome >= 50000 || yourIncome >= 50000) && yourIncome >= fatherIncome) {
        printf("Family Run by Individual Income and It was you\n");
    }
    else if (fatherIncome + yourIncome >= 50000) {
        printf("Family Run by Combined Income\n");
    }
    else {
        printf("Problem\n");
    }

    return 0;
}