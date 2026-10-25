/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_005202C0[];
void func_00153FA0(void *);

void func_0019AAA0(void) {
    if (D_005202C0[0] != NULL) {
        func_00153FA0(D_005202C0[0]);
        D_005202C0[0] = NULL;
    }
}
