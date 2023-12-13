#include<iostream>
#include <stdio.h>
using namespace std;

void printArr(const int a[], int N);
void merge(const int list1[], int size1,
    const int list2[], int size2, int list3[]);

int main()
{
    int i;
    int a[5] = { 0 }, b[6] = { 0 }, c[11] = { 0 };

    printf("输入从小到大的数组a（5个元素）：");
    for (i = 0; i < 5; ++i)
    scanf_s("%d", &a[i]);

    printf("输入从小到大的数组b（6个元素）：");
    for (i = 0; i < 6; ++i)
    scanf_s("%d", &b[i]);

    merge(a, 5, b, 6, c);
    return 0;
}

void printArr(const int a[], int N)     
{
    int i;
    for (i = 0; i < N; ++i)
        printf("%2d ", a[i]);
    putchar('\n');
}

void merge(const int list1[], int size1,
    const int list2[], int size2, int list3[])
{
    int i, j, k;

    for (i = 0, j = 0, k = 0; i < size1 && j < size2; )
    {
        if (list1[i] < list2[j])
            list3[k++] = list1[i++];
        else
            list3[k++] = list2[j++];
    }
    if (i != size1)
        for (; i < size1; ++i)
            list3[k++] = list1[i];
    if (j != size2)
        for (; j < size2; ++j)
            list3[k++] = list2[j];

    printf("合并后的数组为：\n");
    printArr(list3, size1 + size2);
}