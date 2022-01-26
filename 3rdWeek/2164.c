//
// Created by brian on 2022-01-26.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int max;
    int front;
    int rear;
    int* que;
}Queue;

int Initialize(Queue *q, int num){
    q->max = num;
    q->que = calloc(num,sizeof (int));
    q->front = q->rear = q->num = 0;
}

int Enque(Queue *q, int num){
    if(q->num>=q->max){
        return -1;
    }
    q->num++;
    q->que[q->rear++] = num;
    if(q->rear == q->max){
        q->rear %= q->max;
    }
    return 0;
}

int Deque(Queue *q, int* x){
    if(q->num <= 0){
        return -1;
    }
    q->num--;
    *x = q->que[q->front++];
    if(q->front == q->max){
        q->front %= q->max;
    }
    return 0;
}

int main(){
    int n;
    Queue myque;
    scanf("%d",&n);
    Initialize(&myque, n);
    int garbage;
    for (int i = 0; i < n; ++i) {
        Enque(&myque, i+1);
    }
    while (myque.num != 1) {
        Deque(&myque, &garbage);
        Deque(&myque, &garbage);
        Enque(&myque, garbage);
    }
    printf("%d",myque.que[myque.front]);
}