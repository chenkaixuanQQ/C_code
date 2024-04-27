#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int Com(int n)
//{
//    return n * (n - 1) / 2;
//}
//
//int main()
//{
//    // 请在此输入您的代码
//    int x = 0;
//    scanf("%d", &x);
//
//    int n = 1;
//    int A[10] = { 1 };
//    int i = 0;
//
//    //1.首先找x的范围：
//    if (x == n)
//    {
//        printf("%d ", n);
//        return 0;
//    }
//    for (;1;)
//    {
//        if (x == Com(n))
//        {
//            i = n;
//            int j = 0;
//            printf("%d\n", n);
//            for (j = i; j > 0; j--)
//            {
//                A[j] = j;
//                printf("%d ", A[j]);
//            }
//            return 0;
//        }
//        if (x < Com(n))
//            break;
//        n++;
//    }
//    printf("%d\n", n);
//
//
//    //判断有几个1：
//    for (i = 1; i < n; i++)
//    {
//        if (x > Com(n) - Com(i))//等于的情况上面已经判断过了，故此这里不必多写
//        {
//            i--;
//            break;
//        }
//        else if (x == Com(n) - Com(i))//特殊情况：
//        {
//            int count = 2;
//            for (int j = 0; j < n; j++)
//            {
//                if (j < i)
//                {
//                    A[j] = 1;
//                    printf("%d ", A[j]);
//                    continue;
//                }
//                A[j] = count;
//                printf("%d ", A[j]);
//                count++;
//            }
//            return 0;
//        }
//    }
//
//    //把所有的1放好：
//    int pos = Com(n) - Com(i) - x;
//    int count = 0;//用count来数一共有多少个1移动了
//
//    for (int j = 1; pos >= 0; j++)
//    {
//        if (pos >= n - j)
//        {
//            A[n - j] = 1;
//            pos = pos - n + j;
//            count++;
//        }
//        else
//        {
//            A[pos + i - count - 1] = 1;
//            break;
//        }
//    }
//
//
//    int m = 2;
//    for (int j = 0; i - j - 1 > 0; j++)
//    {
//            A[j] = 1;
//    }
//
//    for (int j = 0; j < n; j++)
//    {
//        if (A[j] != 1)
//        {
//            A[j] = m;
//            printf("%d ", A[j]);
//            m++;
//        }
//        else
//        {
//            printf("%d ", A[j]);
//        }
//    }
//
//
//
//
//    return 0;
//}




#include <stdio.h>
int main()
{
    int x, sum1 = 0, sum2 = 0, a = 0, b = 1, i, h, g, m;
    scanf("%d", &x);
    if (x == 1)         //1比较特殊直接排除掉
        printf("%d\n", b + 1);
    else
    {
        for (i = 0; i < x; i++)  //判断数组长度
        {
            sum1 = sum1 + a;
            a++;
            sum2 = sum2 + b;
            b++;
            if (x >= sum1 && x <= sum2)
            {
                printf("%d\n", b);
                break;
            };
        };
    };



    int s[100000];//原式为int s[b];
    if (x == 1)     //跟上面一样把1排除掉
    {
        printf("2 1");
    }



    else
    {
        for (i = b - 1; i >= 0; i--)   //数组初始化为递减的等差数列初始值为b
        {
            s[i] = b - i;
        };



        //没看懂
        s[0] = x - sum1 + 1;       //确定第一个数字
        if (x - sum1 < sum2 - x)    //确定操作次数
            g = x - sum1;
        else
            g = sum2 - x;



        for (m = 0; m < g; m++)
        {
            for (i = 1; i < b - 2 * m - 1; i++)  //除第一个数与最后一个数每个数减一，每重复一次需要减一的数减少两个从后向前
            {
                s[i]--;
            };
        };
        for (i = 0; i < b; i++)
            printf("%d ", s[i]);
    };
    return 0;
}