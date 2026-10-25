/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_00520240[];
void func_00153FA0(void *);

void func_001954A0(void) {
    if (D_00520240[0] != NULL) {
        func_00153FA0(D_00520240[0]);
        D_00520240[0] = NULL;
    }
}
