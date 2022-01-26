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
    int num, k;
    scanf("%d %d",&num, &k);
    Queue myque;
    Initialize(&myque, num);
    for (int i = 0; i < num; ++i) {
        Enque(&myque, i+1);
    }
//    for (int i = 0; i < num; ++i) {
//        printf("%d ",myque.que[i]);
//    }
//    puts("");
    int garbage;
    printf("<");
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < k - 1; ++j) {
            Deque(&myque, &garbage);
            Enque(&myque, garbage);
        }
        Deque(&myque,&garbage);
        if(i != num -1){
            printf("%d, ",garbage);
        }
        else{
            printf("%d",garbage);
        }
    }
    printf(">");
}