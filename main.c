#include "lib/queue.h"
#include <stdlib.h>

int main()
{
    Queue* queue = createQueue();
    enqueue(&queue, 2);
    enqueue(&queue, 6);
    return 0;
}