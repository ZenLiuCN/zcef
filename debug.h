//
// Created by Zen Liu on 2018-10-5.
//

#ifndef PROJECT_DEBUG_H
#define PROJECT_DEBUG_H
#ifndef NOLOG
#include <time.h>
    #define LOGGER_(format, ...){\
    time_t t;struct tm *p;time(&t);p=localtime(&t);\
    printf("[CEF] %d-%d-%d %d:%d:%d %s:%d <%s> :\n",1900+p->tm_year,1+p->tm_mon,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec,\
            __FILE__,__LINE__,__func__);\
    char str2[4096 + 1];\
    snprintf(str2, 4096, format, ##__VA_ARGS__);\
    printf(" %s\n", str2);\
    }
#endif
#endif //PROJECT_DEBUG_H
