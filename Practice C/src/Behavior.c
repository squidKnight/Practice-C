#include "Behavior.h"
void behavior_runBehavior(behavior const *b)
{
  
}

static behavior_vtbl the_behavior_vtbl = {
 behavior_runBehavior
};

void behavior_construct(behavior *b) {
 b->vptr = &the_behavior_vtbl; 
}

