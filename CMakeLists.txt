cmake_minimum_required(VERSION 3.14)
project(algorithm_and_data C)

set(CMAKE_C_STANDARD 11)

add_library(algorithm_and_data library.c library.h list.c list.h frames.c frames.h dlist.c dlist.h clist.c clist.h page.c page.h stack.c stack.h queue.c queue.h events.c events.h event.h set.c set.h cover.c cover.h hashpjw.c hashpjw.h chtbl.c chtbl.h ohtbl.c ohtbl.h)