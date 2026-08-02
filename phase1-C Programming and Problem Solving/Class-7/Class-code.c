//! ✅✌Class-7: Practice Problems on Loop✅
 //? pyramid print
 /*
 #include<stdio.h>
int main()
{
    int n=21;
  for( int i=1; i<=n; i+=2){
    int space_count = (n-i)/2;
    for( int j=1; j<=space_count; j++){
        printf(" ");
    }
    for( int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
  }
  return 0;
}
 */

//? Diamond print
/*
#include<stdio.h>
int main()
{
    int n=21;
  for( int i=1; i<=n; i+=2){
    int space_count = (n-i)/2;
    for( int j=1; j<=space_count; j++){
        printf(" ");
    }
    for( int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
  }

   for( int i=n-2; i>=1; i-=2){
    int space_count = (n-i)/2;
    for( int j=1; j<=space_count; j++){
        printf(" ");
    }
    for( int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");
  }
  
  return 0;
}

*/

//! Prob-1: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_C

/*
#include<stdio.h>
int main(){
    while (1)
    {
        int x, y;

    scanf("%d %d", &x, &y);
    if( x==0 && y==0){
        break;
    }

    if(x < y){
        printf("%d %d\n", x, y);
    }
    else {
        printf("%d %d\n", y, x);
    }

    }
    
    return 0;
}
*/

 
//! Prob-2: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B
/*
#include <stdio.h>

int main(){
    int case_no = 1;

    while(1){
        int x;
        scanf("%d", &x);

        if(x==0){
            break;
        }

        printf("Case %d: %d\n", case_no, x);
        case_no++;
    }

    return 0;
}
*/

//! Prob-3: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_D

/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    //int sum = 0;
    long long sum=0;
    int mn;
    //int mx = -10000000;
    int mx;

    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d", &x);

        sum += x;

        if(i==1){
            mn = x;
            mx =x;
        }

        if(x < mn){
            mn = x;
        }

        if(x>mx){
            mx =x;
        }
    }

    printf("%d %d %ld\n", mn,mx,sum);
    return 0;
}
*/
//! Prob-4: https://lightoj.com/problem/greetings-from-
/*
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int test_case = 1; test_case <= t; test_case++){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("Case %d: %d\n", test_case, a+b);
    }

    return 0;
}
*/

 //?Same problem but shortcut:

 /*
 #include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);

        printf("%d\n", a+b);
    }

    return 0;
}

 */

//! Make a simple calculator?
/*
#include <stdio.h>

int main(){
    while(1){
        int x, y;
        char c;

        scanf("%d %c %d", &x, &c, &y);

        int result;

        if(c == '+'){
            result = x+y;
        }
        else if(c == '-'){
            result = x-y;
        }
        else if(c == '*'){
            result = x*y;
        }
        else {
            printf("Unknown operator\n");
            continue;
        }
        printf("%d\n",result);
    }
    return 0;
}
*/

//!number count problem./123 last digit remove ,,integer division.
/*
//digit count
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count =0;

    while(n>0){
        n /= 10;
        //printf("%d\n", n);
        count++;
    }
    printf("Total Number is:%d\n",count);
    return 0;
}
*/

//last digit
/*
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    do {
        int last_digit = n%10;

        printf("%d\n", last_digit);

        n /= 10;
    } while(n>0);

    return 0;
}

*/


//number reverse
/*
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int reverse_number =0;

    do {
        int last_digit = n%10;
         reverse_number *=10;
         reverse_number +=last_digit;
        

        n /= 10;
    } while(n>0);
    printf("%d\n",reverse_number);

    return 0;
}
*/

/*
//?Output:
2335
233
23
2
0
palindoma;
abba
reverse:abba
202
reverse: 202

*/
//! Palindom
/*
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int given_number = n;

    int reverse_number = 0;

    do {
        int last_digit = n%10;

        reverse_number *= 10;
        reverse_number += last_digit;

        n /= 10;
    } while(n>0);

    if(reverse_number == given_number){
        printf("%d is a palindrome\n", given_number);
    }

    return 0;
}
*/


//! Palindom (1 to 1000) ki na?
#include<stdio.h>
int main(){
    int count =0;
    for( int i=1;i<=1000; i++){
    int n=i;


    int given_number = n;

    int reverse_number = 0;

    do {
        int last_digit = n%10;

        reverse_number *= 10;
        reverse_number += last_digit;

        n /= 10;
    } while(n>0);

    if(reverse_number == given_number){
        printf("%d is a palindrome\n", given_number);
        count++;
    }
}
printf("Total palindom number %d\n", count);
    return 0;
}





