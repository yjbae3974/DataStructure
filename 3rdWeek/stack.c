//
// Created by brian on 2022-01-26.
//

#include <stdio.h>
#include <stdlib.h>
#define THIS 5  //전처리 연산자. 자주 쓰는 숫자나 연산자를 미리 집어넣음.

typedef struct {
    int max;
    int ptr;
    int *stk;//배열주소 포인터
}Stack;

int Initialize(Stack *s, int max){
    s->ptr = 0;
    s->stk = calloc(max, sizeof(int));
    if(s->stk == NULL){
        s->max = 0;
        return -1;
    }
    s->max = max;
}

int Push(Stack *s, int num){
    if(s->ptr >=s->max){
        return -1;
    }
    s->stk[s->ptr++] = num;
    return 0;
}

int Pop(Stack *s, int* num){
    if(s->ptr <=0){
        return -1;
    }
    *num = s->stk[--s->ptr];
    return 0;
}

int main(){

}