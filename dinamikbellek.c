#include <stdio.h>
#define SIZE 10

void bubble(int work[], size_t size, int (*compare)(int, int));
int ascending(int a, int b);
int descending(int a, int b);
void swap(int *element1Ptr, int *element2Ptr);

int main(void)
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};

    printf("Enter 1 to sort in ascending order,\n"
           "Enter 2 to sort in descending order: ");

    int order;
    scanf("%d", &order);

    puts("\nData items in original order");
    for (size_t i = 0; i < SIZE; i++)
        printf("%5d", a[i]);

    if (order == 1)
    {
        bubble(a, SIZE, ascending);
        puts("\nData items in ascending order");
    }
    else
    {
        bubble(a, SIZE, descending);
        puts("\nData items in descending order");
    }

    for (size_t i = 0; i < SIZE; i++)
        printf("%5d", a[i]);

    puts("");
    return 0;
}

void bubble(int work[], size_t size, int (*compare)(int, int))
{
    for (size_t pass = 1; pass < size; pass++)
    {
        for (size_t i = 0; i < size - 1; i++)
        {
            if (compare(work[i], work[i + 1]))
            {
                swap(&work[i], &work[i + 1]);
            }
        }
    }
}

int ascending(int a, int b)
{
    return a > b;   // büyükse yer değiştir
}

int descending(int a, int b)
{
    return a < b;   // küçükse yer değiştir
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
}
