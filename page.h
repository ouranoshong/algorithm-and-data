//
// Created by hong on 2019/9/10.
//

#ifndef ALGORITHM_AND_DATA_PAGE_H
#define ALGORITHM_AND_DATA_PAGE_H

#include "clist.h"

typedef struct Page_ {
    int number;
    int reference;
} Page;

int replace_page(CListElmt **current);

#endif //ALGORITHM_AND_DATA_PAGE_H
