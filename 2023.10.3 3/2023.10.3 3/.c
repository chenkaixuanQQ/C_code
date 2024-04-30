#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ú�����ʹ�ö��ַ�����һ�������ڵ�����λ��

int position_confirm(int array[], int x, int size)
{

    int left = 0;
    int right = size;
    int mid = (left + right) / 2;
    if (x > array[size - 1] || x < array[0])
    {
        mid = -1;
    }
    else {
        while (x <= array[size - 1])
        {
            if (x == array[mid]) {
                mid = x;
                break;
            }
            else if (x < array[mid])
            {
                right = mid - 1;
            }
            else if (x > array[mid])
            {
                left = mid + 1;
            }

            mid = (left + right) / 2;
        }
    }

    return mid;
}

int main()
{
    //Firstly,creat a array.
    int array[] = { 1,2,3,4,5,6,7,8,9,10 };
    int size = sizeof(array) / sizeof(array[0]);

    //Secondly,enter a number.
    int num = 0;
again:
    printf("Please enter the number you want to check:");
    scanf("%d", &num);

    //In the end,confirm it's position.
    int c = position_confirm(array, num, size);

    if (-1 == c)
    {
        printf("Sorry,the number you enter isn't in the array.\n");
        goto again;
    }

    else
    {
        printf("Find it!It is the %dth in the array!\n", c);
    }
    return 0;
}