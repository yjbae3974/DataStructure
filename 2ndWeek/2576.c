//
// Created by brian on 2022-01-19.
//

#include<stdio.h>

int main(){
    int arr[7] = {0};
    int cnt = 0;
    int min = 101;
    int ifOdd = 0;
    for (int i = 0; i < 7; ++i) {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 1){
            ifOdd = 1;
            cnt += arr[i];
            if(min>arr[i])
                min = arr[i];
        }
    }
    if(ifOdd == 0)
        printf("-1");
    else{
        printf("%d\n%d",cnt,min);
    }
}