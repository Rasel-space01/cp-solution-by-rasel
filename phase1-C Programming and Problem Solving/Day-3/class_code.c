//!Class-5 (condition problem solving ,A. Watermelon from codeforces)
//!Problem link1: https://codeforces.com/problemset/problem/4/A
/*
#include <stdio.h>
 int main()
 {
    int w;
    scanf("%d",&w);
    if (w>2 && w%2==0)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
 }
*/
 
 //!Problem link 2: https://atcoder.jp/contests/abc326/tasks/abc326_a
 #include <stdio.h>
 int main()
 {
    int x, y;
scanf("%d %d", &x, &y);

if (x > y) {
    if (x - y <= 3) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}
else {
    if (y - x <= 2) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}
    
    return 0;
 }
 //!Problem link 3: https://atcoder.jp/contests/abc304/tasks/abc304_b
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 999) {
        printf("%d\n", n);
    } 
    else if (n <= 9999) {
        printf("%d\n", n - (n % 10));
    } 
    else if (n <= 99999) {
        printf("%d\n", n - (n % 100));
    } 
    else if (n <= 999999) {
        printf("%d\n", n - (n % 1000));
    } 
    else if (n <= 9999999) {
        printf("%d\n", n - (n % 10000));
    } 
    else if (n <= 99999999) {
        printf("%d\n", n - (n % 100000));
    } 
    else {
        printf("%d\n", n - (n % 1000000));
    }

    return 0;
}

//!Problem link 4:https://atcoder.jp/contests/abc149/tasks/abc149_b
#include <stdio.h>

int main() {
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    if (k <= a) {
        printf("%lld %lld\n", a - k, b);
    } 
    else {
        long long int x = k - a;
        if (x <= b) {
            printf("0 %lld\n", b - x);
        } 
        else {
            printf("0 0\n");
        }
    }

    return 0;
}

//!Problem link 5:https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_C

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && b <= c) {
        printf("%d %d %d\n", a, b, c);
    } 
    else if (a <= c && c <= b) {
        printf("%d %d %d\n", a, c, b);
    } 
    else if (b <= a && a <= c) {
        printf("%d %d %d\n", b, a, c);
    } 
    else if (b <= c && c <= a) {
        printf("%d %d %d\n", b, c, a);
    } 
    else if (c <= a && a <= b) { // এখানে <= দিতে হবে
        printf("%d %d %d\n", c, a, b);
    } 
    else if (c <= b && b <= a) { // এখানেও <= দিতে হবে
        printf("%d %d %d\n", c, b, a);
    }

    return 0;
}