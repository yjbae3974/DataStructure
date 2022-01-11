//
// Created by 배연준 on 2022/01/11.
//
#include <stdio.h>

int main(){
    int length;
    int arr[100] = {0};
    scanf("%d",&length);
    for (int i = 0; i < length; ++i) {
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for (int i = 0; i < length; ++i) {
        if(arr[i]>=max)
            max=arr[i];
        if(arr[i]<=min)
            min=arr[i];
    }
    printf("최대값: %d, 최소값: %d",max,min);
}
