#include "queue.h"
#include <stdio.h>
#include <stdbool.h>

bool isEmpty(Queue* queue)
{

	if (queue->end = NULL)
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
}