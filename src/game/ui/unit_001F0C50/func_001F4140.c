/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void *Pes6Heap_Alloc(s32, M2C_UNK);                  /* extern */
s8 func_001EC0F0();                                 /* extern */
s32 func_001EC540();                                /* extern */
M2C_UNK func_001F3FB0(u8 *, void *);                /* extern */

void *func_001F4140(u8 *arg0, s8 arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = Pes6Heap_Alloc(arg2, 1);
    M2C_FIELD(temp_v0, s8 *, 0) = arg1;
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 4) = func_001EC0F0();
        M2C_FIELD(temp_v0, s32 *, 0x1C) = func_001EC540();
    }
    if (arg0 != NULL) {
        func_001F3FB0(arg0, temp_v0);
    }
    if (*arg0 == 0) {
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 5) = 0;
        }
    } else if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 5) = 1;
    }
    return temp_v0;
}
