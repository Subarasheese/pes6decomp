/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_00520238[];
void func_00153FA0(void *);

void func_00197AC0(void) {
    if (D_00520238[0] != NULL) {
        func_00153FA0(D_00520238[0]);
        D_00520238[0] = NULL;
    }
}
