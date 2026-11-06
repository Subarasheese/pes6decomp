/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00153FA0(void *);
typedef struct { s32 pad; void *p; } S;
void func_00CDA690(S *arg0) {
    if (arg0->p != NULL) {
        func_00153FA0(arg0->p);
        arg0->p = NULL;
    }
}
