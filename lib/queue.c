#include "queue.h"
#include <stdbool.h>
#include <stdlib.h>

int enqueue(Queue** queue, int value)
{
    QueueElem* queueElem = malloc(sizeof(QueueElem));
    queueElem->value = value;
    queueElem->next = NULL;
    (*queue)->head->next = queueElem;
    (*queue)->head = queueElem;
}

int dequeue(Queue** queue)
{
    if (*queue == NULL)
    {
        return 0;
    }
    QueueElem* ptr = (*queue)->end;
    (*queue)->end = ptr->next;
    return ptr->value;
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

void deleteQueue(Queue* queue)
{
    while (queue != NULL)
    {
        dequeue(queue);
    }
    free(queue);
}