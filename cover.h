//
// Created by hong on 2019/9/15.
//

#ifndef ALGORITHM_AND_DATA_COVER_H
#define ALGORITHM_AND_DATA_COVER_H

#include "set.h"

typedef struct KSet_ {
    void *key;
    Set set;
} KSet;

int cover(Set *members, Set *subsets, Set *covering);

#endif //ALGORITHM_AND_DATA_COVER_H
