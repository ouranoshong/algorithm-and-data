//
// Created by hong on 2019/9/11.
//

#ifndef ALGORITHM_AND_DATA_EVENTS_H
#define ALGORITHM_AND_DATA_EVENTS_H

#include "queue.h"
#include "event.h"

int receive_event(Queue *events, const Event* data);
int process_event(Queue *events, int (*dispatch)(Event *event));

#endif //ALGORITHM_AND_DATA_EVENTS_H
