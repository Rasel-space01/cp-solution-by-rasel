//!✅ Practice Problems on Array & String Practice
//!Problem-1: https://atcoder.jp/contests/abc290/tasks/abc290_a
/*
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int score[n];
    for(int i=0; i<n; ++i)
    {
        scanf("%d", &score[i]);
    }

    int total = 0;
    for(int i=0; i<m; ++i)
    {
        int problem;
        scanf("%d",&problem);
        total += score[problem-1];
    }

    printf("%d\n",total);

}

*/

//!✅ https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
  
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s1[1001];
    scanf("%s", s1);

    char s2[1001];
    //s1 er reverse s2

    int len = strlen(s1);
    for(int i=0; i<len; ++i)
    {
        int j = len-1-i;
        s2[i] = s1[j];
    }
    s2[len] = '\0';

    bool equal = 1;
    for(int i=0; i<len; ++i)
    {
        if(s1[i]!=s2[i]) equal = 0;
    }

    if(equal) //PALINDROME
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}

