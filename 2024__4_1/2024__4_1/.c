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
//    // ���ڴ��������Ĵ���
//    int x = 0;
//    scanf("%d", &x);
//
//    int n = 1;
//    int A[10] = { 1 };
//    int i = 0;
//
//    //1.������x�ķ�Χ��
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
//    //�ж��м���1��
//    for (i = 1; i < n; i++)
//    {
//        if (x > Com(n) - Com(i))//���ڵ���������Ѿ��жϹ��ˣ��ʴ����ﲻ�ض�д
//        {
//            i--;
//            break;
//        }
//        else if (x == Com(n) - Com(i))//���������
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
//    //�����е�1�źã�
//    int pos = Com(n) - Com(i) - x;
//    int count = 0;//��count����һ���ж��ٸ�1�ƶ���
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
    if (x == 1)         //1�Ƚ�����ֱ���ų���
        printf("%d\n", b + 1);
    else
    {
        for (i = 0; i < x; i++)  //�ж����鳤��
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



    int s[100000];//ԭʽΪint s[b];
    if (x == 1)     //������һ����1�ų���
    {
        printf("2 1");
    }



    else
    {
        for (i = b - 1; i >= 0; i--)   //�����ʼ��Ϊ�ݼ��ĵȲ����г�ʼֵΪb
        {
            s[i] = b - i;
        };



        //û����
        s[0] = x - sum1 + 1;       //ȷ����һ������
        if (x - sum1 < sum2 - x)    //ȷ����������
            g = x - sum1;
        else
            g = sum2 - x;



        for (m = 0; m < g; m++)
        {
            for (i = 1; i < b - 2 * m - 1; i++)  //����һ���������һ����ÿ������һ��ÿ�ظ�һ����Ҫ��һ�������������Ӻ���ǰ
            {
                s[i]--;
            };
        };
        for (i = 0; i < b; i++)
            printf("%d ", s[i]);
    };
    return 0;
}