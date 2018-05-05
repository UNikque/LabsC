#include <stdio.h>
#include <malloc.h>
 
/*
Лабораторная работа №14 (очереди)
Задание 2: "Объединить две целочисленных очереди в одну новую." */
			
typedef struct node {
    int val;
    struct node* next;
} node_t;
 
typedef struct {
    node_t* head;
    node_t* tail;
} queue_t;
 
void queue_init(queue_t* q);
int  queue_push(queue_t* q, int val);
void queue_pop(queue_t* q);
int  queue_empty(queue_t* q);
#define queue_front(q)  (q).head->val
 
 
//слияние очереди в одну q3
int queue_union(queue_t* q3, queue_t* q1, queue_t* q2){
    node_t* p1, *p2, *eq, **pq;
 
    queue_init(q3);
    if((q1->head == NULL) || (q2->head == NULL))
        return 0;
 
    p1 = q1->head;
    p2 = q2->head;
    pq = &q3->head;
    eq = q3->head;
 
    while((p1 != NULL) && (p2 != NULL)){
        if(p1->val < p2->val){
            *pq = p1;
            p1  = p1->next;
        } else {
            if(p1->val == p2->val){
                *pq = p1;
                p1  = p1->next;
                pq  = &(*pq)->next;             
            }
            *pq = p2;
            p2  = p2->next;
        }
        eq = *pq;
        pq = &(*pq)->next;
    }
 
    while(p1 != NULL){
        *pq = p1;
        p1  = p1->next;
        eq  = *pq;
        pq  = &(*pq)->next;
    }
 
    while(p2 != NULL){
        *pq = p2;
        p2  = p2->next;
        eq  = *pq;
        pq  = &(*pq)->next;
    }
    q3->tail = eq;
    q1->head = q1->tail = 
    q2->head = q2->tail = NULL;
    return 1;
}
 
 
int main(void){
    int     i;
    queue_t q1, q2, q3;
 
    queue_init(&q1);
    queue_init(&q2);
    for(i = 0; i < 10; i += 2){
        queue_push(&q1, i);
        queue_push(&q2, i + 1);
    }
    queue_push(&q1, 9);
    queue_push(&q2, 90);
 
    //слить две q1 q2 в q3
    queue_union(&q3, &q1, &q2);
 
    printf("head: %d\ntail: %d\n",
           q3.head->val, q3.tail->val);
 
    while(! queue_empty(&q3)){
        printf("%d ", queue_front(q3));
        queue_pop(&q3);
    }
    return 0;
}
 
 
//инициализация
void queue_init(queue_t* q){
    q->head = q->tail = NULL;
}
 
//добавить в очередь
int queue_push(queue_t* q, int val){
    node_t* p = (node_t*)malloc(sizeof(node_t));
    if(p != NULL){
        p->val  = val;
        p->next = NULL;
        if(q->head == NULL)
            q->head = q->tail = p;
        else {
            q->tail->next = p;
            q->tail = p;
        }
    }
    return (p != NULL);
}
 
//вытолкнуть из очереди
void queue_pop(queue_t* q){
    node_t* t = q->head;
    if(t != NULL){
        q->head = q->head->next;
        free(t);
    }
    if(q->head == NULL)
        q->tail = NULL;
}
 
int queue_empty(queue_t* q){
    return (q->head == NULL);
}
