//!✅ Practice Problems on Array & String Practice
//!Problem-1: https://atcoder.jp/contests/abc290/tasks/abc290_a

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

//!✅ https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
  


