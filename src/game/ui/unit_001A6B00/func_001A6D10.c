/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E98B4;
void Pes6Heap_Free(void *p);
void func_001A6D10(void) {
    u8 *p;
    p = D_003E98B4;
    if (p != 0) {
        Pes6Heap_Free(p);
        D_003E98B4 = 0;
    }
}
