#include <stdio.h>            
#include <locale.h>


int largest(int*arr, int size) {
    int i,max=0;
    for (i = 0; i < size; i++) {
        if (arr[max] < arr[i]) {
            max = i;
        }
    }
    return arr[max];
}

int smolest(int* arr, int size) {
    int i, min = 0;
    for (i = 0; i < size; i++) {
        if (arr[min] > arr[i]) {
            min = i;
        }
    }
    return arr[min];
}


int main(void)
{
    setlocale(LC_ALL, "Rus");



    //1
    printf("Enter 5 nums\n");
    int arr[5];
    scanf_s("%d %d %d %d %d",&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("largest num: %d\n", largest(arr, 5));

    //2
    printf("Enter 5 nums\n");
    scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("smolest num: %d\n", smolest(arr, 5));

    //3
    printf("Enter 3 nums\n");
    scanf_s("%d %d %d", &arr[0], &arr[1], &arr[2]);
    arr[0] < arr[1] < arr[2] ? printf("YES\n") : printf("NO\n");

    //4
    printf("Enter month\n");
    scanf_s("%d", &arr[0]);
    switch (arr[0]) {
        case 1:
        case 2:
        case 12:printf("winter\n"); break;
        case 3:
        case 4:
        case 5:printf("spring\n"); break;
        case 6:
        case 7:
        case 8:printf("summer\n"); break;
        case 9:
        case 10:
        case 11:printf("autumn\n"); break;
    }


    return 0;
}
