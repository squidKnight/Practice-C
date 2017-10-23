#ifndef LINE_FOLLOW_BEHAVIOR_H
#define LINE_FOLLOW_BEHAVIOR_H

#include "Behavior.h"
typedef struct line line;
typedef struct line_vtbl line_vtbl;

typedef struct line line;

struct line
{
  behavior base;
};
void line_construct(line *l);
void line_runBehavior(line *l);
#endif