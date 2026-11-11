/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */

void func_002405A0(s32 *arg0) {
    Pes6Heap_Free(*arg0);
    *arg0 = 0;
}
