#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//NEXT arithmetic

int GetNext(char ch[], int cLen, int next[]) 
{//cLenΪ��ch�ĳ���
    next[1] = 0;
    int i = 1, j = 0;
    while (i <= cLen) {
        if (j == 0 || ch[i] == ch[j]) 
            next[++i] = ++j;
        else 
            j = next[j];
    }
}






