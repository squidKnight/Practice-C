#include "lineFollowBehavior.h"
#include <kipr/botball.h>

typedef struct line_vtbl line_vtbl;
struct line_vtbl {
  void (*runBehavior)(line const *l);
};

static line_vtbl the_line_vtbl = {
  line_runBehavior
};

void line_runBehavior(line *l/*what's this used for?*/, time, leftPort, rightPort, sensorMain, sensorSecondary)
{// Where does the state machine part go??
  int init = seconds();
  int watch = seconds() - init;
  if(sensorSecondary=!-1)//variable set to -1 if there is only one tophat; could also make a new function without second sesnor input
  {
    while(watch<time)
    {
      /*double-tophat line-follow code here??*/
      watch = seconds() - init;
    }
  }
  else
  {
    while(watch<time)
    {
      /*single-tophat line-follow code here??*/
      watch = seconds() - init;
    }
  }
void line_construct(line *l)
{
 behavior_construct(&l->base);
  l->base.vptr = (behavior_vtbl *)&the_line_vtbl;
}
