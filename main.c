#include "lib/queue.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Queue* queue = malloc(sizeof(Queue));
    QueueElem* elem = malloc(sizeof(QueueElem));
    enqueue(&queue, elem);
}