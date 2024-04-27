#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 100010  

int n;
int a[N], s[N];

int main()
{
    scanf("%d", &n);// ‰»În

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);// ‰»ÎAi

        if (a[i] < 100000)
            s[a[i]]++;
    }

    for (int i = 1; i < N; i++)
    {
        if (s[i] % (i + 1))
        {
            printf("%d\n", i);
            return 0;
        }
        s[i + 1] += s[i] / (i + 1);
    }
    return 0;
}

