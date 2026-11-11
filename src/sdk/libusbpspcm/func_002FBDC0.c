/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void *D_005EAAC8[];
void Pes6Heap_Free(void *);

void func_002FBDC0(void) {
    if (D_005EAAC8[0] != NULL) {
        Pes6Heap_Free(D_005EAAC8[0]);
        D_005EAAC8[0] = NULL;
    }
}
