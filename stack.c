//
// Created by hong on 2019/9/11.
//

#include <stdlib.h>

#include "stack.h"
#include "list.h"

int stack_push(Stack *stack, const void *data) {
    return list_ins_next(stack, NULL, data);
}

int stack_pop(Stack *stack, void **data) {
    return list_rem_next(stack, NULL, data);
}
