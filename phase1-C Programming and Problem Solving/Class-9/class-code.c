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

//!Problem 2.1: ✅ https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
/*
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

*/


 //? Problem 2.2:  Different way to solve (প্রথম কোডে: বাড়তি মেমোরি ছাড়াই In-place Two-Pointer Technique ব্যবহার করা হয়েছে এবং লুপ $\frac{N}{2}$ বার চলায় সময় ও মেমোরি জটিলতা যথাক্রমে $O(N)$ ও $O(1)$।দ্বিতীয় কোডে: রিভার্স স্ট্রিং সংরক্ষণের জন্য Auxiliary Space $O(N)$ লাগে এবং দুটি পৃথক লুপ ব্যবহার করায় একাধিক পাস (Multiple Passes) লাগে।)

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    scanf("%s", s1);

    int equal = 1;
    int len = strlen(s1);
    for(int i=0; i<len/2; ++i)
    {
        int j = len-1-i;

        if(s1[i] != s1[j])
        {
            equal = 0;
        }
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
*/


 //!Problem-3: https://atcoder.jp/contests/abc322/tasks/abc322_b

 /*
#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    getchar();
    char S[n+1];
    char T[m+1];

    gets(S);
    gets(T);

    int prefix = 1;
    for(int i=0; i<n; ++i)
    {
        //S[i]==T[i]
        if(S[i]!=T[i]) //not prefix
        {
            prefix = 0;
        }
    }

    //Suffix Check, last n characters
    int suffix = 1;
    for(int i=0; i<n; ++i)
    {
        int j = m-n+i;
        if(S[i]!=T[j]) //not suffix
        {
            suffix = 0;
        }
    }

    if(suffix == 1 && prefix == 1) printf("0\n");
    else if(suffix == 0 && prefix == 1) printf("1\n");
    else if(suffix == 1 && prefix == 0) printf("2\n");
   // else if(suffix == 0 and prefix == 0) 
    printf("3\n");
    //else if(suffix == 0 and prefix == 0) printf("3\n");

}
 */

//!Problem-4: https://atcoder.jp/contests/abc236/tasks/abc236_b

/*
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int cnt[n+1];
    for(int i=1; i<=n; ++i)
    {
        cnt[i] = 0;
    }

    for(int i=0; i<n*4 - 1; ++i)
    {
        int x;
        scanf("%d",&x);
        cnt[x]++;
    }

    int ans;
    for(int i=1; i<=n; ++i)
    {
        if(cnt[i]==3) ans = i;
    }

    printf("%d\n",ans);
}
*/

//! Problem-5: https://atcoder.jp/contests/abc294/tasks/abc294_b

/*

*/
