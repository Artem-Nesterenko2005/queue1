#pragma once
#ifndef HEADER_H
#define HEADER_H

//queue element
typedef struct QueueElem;

//queue
typedef struct Queue;

//adds an item to the end of the queue
int enqueue();

//removes the first item from the queue and returns its value
int dequeue();

//checks if the queue is empty
bool isEmpty(Queue *queue);

//deletes a queue
void deleteQueue(Queue* queue);

//returns the value of the top element
int front();

//returns the value of the last element
int back();

//outputs a queue
void printQueue();
#endif