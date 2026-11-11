/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 D_0058CF60[];
void Pes6Heap_Free(void *p);
void func_00259610(void) {
    u8 *p;
    p = *(u8 **)D_0058CF60;
    if (p != 0) {
        Pes6Heap_Free(p);
    }
}
