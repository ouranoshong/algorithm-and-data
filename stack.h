//
// Created by hong on 2019/9/11.
//

#ifndef ALGORITHM_AND_DATA_STACK_H
#define ALGORITHM_AND_DATA_STACK_H

#include <stdlib.h>
#include "list.h"

typedef List Stack;

#define stack_init list_init
#define stack_destroy list_destroy

int stack_push(Stack *stack, const void * data);
int stack_pop(Stack *stack, void **data);

#define stack_peek(stack) ((stack)->head == NULL ? NULL : (stack)->head->data)

#define stack_size list_size

#endif //ALGORITHM_AND_DATA_STACK_H
