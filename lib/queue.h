#pragma once
#include <stdbool.h>

//queue element
struct QueueElem
{
    int value;
    struct QueueElem* next;
};
typedef struct QueueElem QueueElem;

//queue
struct Queue
{
    struct QueueElem* end;
    struct QueueElem* head;
};
typedef struct Queue Queue;

//adds an item to the end of the queue
int enqueue(Queue** queue, int value);

//removes the first item from the queue and returns its value
int dequeue();

//checks if the queue is empty
bool isEmpty();

//deletes a queue
void deleteQueue();

//returns the value of the top element
int front(Queue *tail);

//returns the value of the last element
int back(Queue *head);

//outputs a queue
void printQueue();