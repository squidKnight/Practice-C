#include "lineFollowBehavior.h"

typedef struct line_vtbl line_vtbl;
struct line_vtbl {
  void (*runBehavior)(line const *l);
};

static line_vtbl the_line_vtbl = {
  line_runBehavior
};

void line_runBehavior(line *l)
{
  
}
void line_construct(line *l)
{
 behavior_construct(&l->base);
  l->base.vptr = (behavior_vtbl *)&the_line_vtbl;
}