/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00BA3ED0(s32, s32);                    /* extern */
s32 func_00BA4920(M2C_UNK);                         /* extern */
M2C_UNK func_00BA5350(s32, s32, s32, M2C_UNK);      /* extern */
s32 func_00BA6600(M2C_UNK);                         /* extern */
s32 func_00BB4780(void *);                          /* extern */
s32 func_00BBBC90(void *);                          /* extern */
M2C_UNK func_00BBC080();                            /* extern */

void func_00BB2E30(void *arg0) {
    s32 temp_v0;
    s8 var_v1;

    temp_v0 = func_00BA6600(1);
    switch (temp_v0) {                              /* irregular */
    case 2:
        M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
        func_00BBC080();
        var_v1 = 5;
        M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
block_25:
        M2C_FIELD(arg0, s8 *, 0x10) = var_v1;
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xC) = 2;
        if (func_00BBBC90(arg0) == 0) {
            var_v1 = 0x1C;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        } else {
            var_v1 = 0x1B;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        }
        goto block_25;
    case 0:
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            func_00BA3ED0(M2C_FIELD(arg0, s32 *, 0x20), *M2C_FIELD(arg0, s32 **, 8));
            var_v1 = 0x19;
            M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
        } else {
            func_00BA5350(*M2C_FIELD(arg0, s32 **, 8), M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 4), 0);
            if (func_00BA4920(0) == 0) {
                var_v1 = 0x1B;
                M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            } else {
                var_v1 = 0x19;
                M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
            }
        }
        goto block_25;
    }
}
