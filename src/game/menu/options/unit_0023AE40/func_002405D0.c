/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Heap_Alloc(s32, s32);                        /* extern */

void func_002405D0(s32 *arg0, s32 arg1, s32 arg2) {
    *arg0 = Pes6Heap_Alloc(arg1, arg2);
}
