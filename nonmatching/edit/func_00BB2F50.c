/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BA3ED0(s32, s32);                    /* extern */
s32 func_00BB4780(void *);                          /* extern */
M2C_UNK func_00BBBFE0(M2C_UNK);                     /* extern */
M2C_UNK func_00BBC080();                            /* extern */
s32 func_00BBFC30(s32);                             /* extern */

void func_00BB2F50(void *arg0) {
    s32 temp_v0;
    s8 var_v1;

    temp_v0 = func_00BBFC30(arg0 + 0x18);
    switch (temp_v0) {                              /* irregular */
    case 5:
        M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
        func_00BBBFE0(1);
        func_00BBC080();
        var_v1 = 5;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
block_9:
        M2C_FIELD(arg0, s8 *, 0x10) = var_v1;
        return;
    case 3:
        *M2C_FIELD(arg0, s32 **, 8) = M2C_FIELD(arg0, s32 *, 0x18);
        func_00BA3ED0(M2C_FIELD(arg0, s32 *, 0x20), *M2C_FIELD(arg0, s32 **, 8));
        var_v1 = 0x1B;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        goto block_9;
    }
}
