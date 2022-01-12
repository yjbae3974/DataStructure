//
// Created by brian on 2022-01-12.
//
#include <stdio.h>
#include <stdlib.h>

int main(){
    int var = 5;
    int *arr1= calloc(var,sizeof (int));
    int *arr2 = calloc(var, sizeof (int));
    printf("%p %p\n",arr1,arr2);
    var++;
    arr1 = calloc(var, sizeof(int));
    printf("%p %p\n",arr1,arr2);
    arr1[5] = 5;

}
