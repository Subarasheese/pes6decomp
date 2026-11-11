/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6Heap_Free(s32);                         /* extern */
s32 func_001D9F70();                                /* extern */
M2C_UNK func_001DA070(s32, s32);                    /* extern */

void func_002CA9A0(s32 arg0, s32 arg1) {
    s32 temp_s0;

    temp_s0 = func_001D9F70();
    func_001DA070(arg0, arg1);
    Pes6Heap_Free(temp_s0);
}
