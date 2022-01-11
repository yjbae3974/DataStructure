//
// Created by 배연준 on 2022/01/11.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int var = 5;
    int *arr1 = calloc(var,sizeof(int));
    int *arr2 = malloc(var * sizeof(int));\
    int arr3[5] = {0};
    for (int i = 0; i < var; ++i) {
        arr1[i] = i;
        arr2[i] = i;
    }

    for (int i = 0; i < var; ++i) {
        printf("%d\n",arr1[i]);
    }
    for (int i = 0; i < var; ++i) {
        printf("%d\n",arr2[i]);
    }
}
