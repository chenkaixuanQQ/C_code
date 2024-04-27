#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    double count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        double X_0 = (double)rand() / RAND_MAX;
        double Y_0 = (double)rand() / RAND_MAX;
        if ((X_0 - 1) * (X_0 - 1) + (Y_0 - 1) * (Y_0 - 1) < 1)
            count++;
    }

    double Pai = count * 4.0 / 1000000;
    cout << Pai << endl;

    return 0;
}