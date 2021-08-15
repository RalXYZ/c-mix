#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "c_procedure.h"

#define LEN 50

void c_procedure(const char* caller_language, int caller_stack) {
    srand((unsigned int)time(NULL));
    int callee_stack = rand() % 10000;
    printf("[%04d] start of a C procedure, called by %s [%04d]\n", callee_stack, caller_language, caller_stack);

    printf("[%04d] end of a C procedure\n", callee_stack);
}
