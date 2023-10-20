#pragma once
#include <stdbool.h>

//queue
typedef struct Queue Queue;

//adds an item to the end of the queue
int enqueue(Queue** queue, int value);

//removes the first item from the queue and returns its value
void dequeue();

//checks if the queue is empty
bool isEmpty(Queue *queue);

//deletes a queue
void deleteQueue(Queue *queue);

//returns the value of the top element
int front(Queue *tail);

//returns the value of the last element
int back(Queue *head);

//outputs a queue
void printQueue();

//create queue structure
Queue* createQueue();