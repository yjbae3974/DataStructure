#include <stdio.h>

int main(){
    int num;
    int a[] ={1,2,3,4,5};
    for (int i = 0; i < 5; ++i) {
        printf("%d\n",&a[i]);
    }
    /*
     * 출력결과:
     * 1
     * 2
     * 3
     * 4
     * 5
     * */
}