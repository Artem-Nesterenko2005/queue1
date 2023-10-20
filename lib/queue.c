#include "queue.h"
#include <stdlib.h>

int enqueue(Queue** queue, int value)
{
    QueueElem* queueElem = malloc(sizeof(QueueElem));
    queueElem->value = value;
    queueElem->next = NULL;
    (*queue)->head->next = queueElem;
    (*queue)->head = queueElem;
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

int front(Queue* queue)
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