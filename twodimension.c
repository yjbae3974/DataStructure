//
// Created by 배연준 on 2022/01/11.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int row = 5, col = 3;
    int **arr1 = calloc(row, sizeof(int*));
    for (int i = 0; i < row; ++i) {
        arr1[i] = (int*)calloc(col,sizeof(int));
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            arr1[i][j] = (i+1)*(j+1);
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ",arr1[i][j]);
        }
        puts("");
    }
}