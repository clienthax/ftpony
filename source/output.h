#ifndef OUTPUT_H
#define OUTPUT_H

#define print(...) sprintf(&superStr[strlen(superStr)], __VA_ARGS__)

extern char superStr[];

#endif
