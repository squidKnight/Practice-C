#ifndef BEHAVIOR_H
#define BEHAVIOR_H

typedef struct behavior behavior;
typedef struct behavior_vtbl behavior_vtbl;
struct behavior_vtbl{
	void (*runBehavior)(behavior const *b);
};

struct behavior{
	behavior_vtbl *vptr;
};

void behavior_construct(behavior *b);

#endif