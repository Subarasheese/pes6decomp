/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001B4D20(void *);
extern char D_00CE4EA0[];

void func_00BC6670(void) {
    if (*(void **)D_00CE4EA0 != NULL) {
        func_001B4D20(*(void **)D_00CE4EA0);
        *(void **)D_00CE4EA0 = NULL;
    }
}
