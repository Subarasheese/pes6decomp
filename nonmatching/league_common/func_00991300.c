/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00991950(void);
extern u8 func_00225820(void);
extern s32 func_00238330(s32);
s32 func_00210DF0();                                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_0098FEA0(M2C_UNK);                     /* extern */
s32 func_00B60960(M2C_UNK);                         /* extern */
M2C_UNK func_00B60F10();                            /* extern */
M2C_UNK func_00B60F40(M2C_UNK, M2C_UNK);            /* extern */

s32 func_00991300(void) {
    M2C_UNK var_s1;
    s32 temp_v1;
    u32 temp_v0;

    if (func_00210DF0() != 2) {

    } else {
        temp_v0 = func_00991950();
        if (temp_v0 != 0) {
            if (M2C_FIELD(temp_v0, s16 *, 0x478) == 0) {
                if (M2C_FIELD(temp_v0, s32 *, 0x4AC) == 0) {
                    temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x4B0);
                    switch (temp_v1) {              /* irregular */
                    case 8:
                        var_s1 = 0;
block_20:
                        if ((temp_v1 == 7) && (M2C_FIELD(temp_v0, u8 *, 0x495) != (func_00238330(func_00225820()) & 0xFF))) {
                            func_0026E840(0x8C008005);
                        } else if (func_00B60960(var_s1) != 0) {
                            func_0026E840(0x84028400);
                            func_0098FEA0(0);
                            func_00B60F40(var_s1, 0);
                            func_00B60F10();
                            M2C_FIELD(temp_v0, s32 *, 0x4AC) = 2;
                            func_00958000(0x1E);
                        } else {
                            func_0026E840(0x8C008005);
                        }
                        break;
                    case 7:
                        var_s1 = 2;
                        goto block_20;
                    }
                }
            }
        }
    }
    return 0;
}
