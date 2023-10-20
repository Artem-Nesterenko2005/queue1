#include "queue.h"
#include <stdbool.h>
#include <stdlib.h>

Queue *createQueue()
{
    Queue* queue = malloc(sizeof(Queue));
    queue->end = NULL;
    queue->head = NULL;
    return queue;
}

int enqueue(Queue** queue, int value)
{
    QueueElem* queueElem = malloc(sizeof(QueueElem));
    queueElem->value = value;
    queueElem->next = NULL;
    if ((*queue)->end == NULL)
    {
        (*queue)->end = queueElem;
        (*queue)->head = queueElem;
    }
    else
    {
        (*queue)->head->next = queueElem;
        (*queue)->head = queueElem;
    }
}

int front(Queue* queue)
{
    if (queue == NULL)
    {
        return;
    }
    if (queue->end == NULL)
    {
        return;
    }
    return queue->end->value;
}

int back(Queue* queue)
{
    if (queue == NULL)
    {
        return;
    }
    if (queue->head == NULL)
    {
        return;
    }
    return queue->end->value;
}

bool isEmpty(Queue* queue)
{
    if (queue->end == NULL)
    {
        return true;
    }
    return false;
}

void deleteQueue(Queue** queue)
{
    while ((*queue) != NULL)
    {
        //dequeue(queue);
    }
}