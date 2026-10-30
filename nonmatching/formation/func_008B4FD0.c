/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008B4790();                                /* extern */
s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008D3130(void *);                      /* extern */
M2C_UNK func_008D3490(void *, s32, s32, M2C_UNK);   /* extern */
s32 func_008D90A0(u8);                              /* extern */
extern char D_008EE190[];

s32 func_008B4FD0(void *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0_2;
    s32 var_v1;
    u8 temp_v0;

    if ((*(u16 *)D_008EE190) & 0x80) {
        return func_008B4790();
    }
    if (arg1 == 1) {
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x16);
        switch (temp_v0) {                          /* irregular */
        case 1:
            func_008D3130(arg0 + 0x1CA8);
            if (func_008D90A0(M2C_FIELD(arg0, u8 *, 0x19)) & 0x40) {
                func_0026E840(0x84008401);
                return 0x27;
            }
block_23:
        default:
            return 0x28;
        case 0:
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x3220);
            if ((temp_v0_2 != 0) && ((temp_v0_2 + 1) != (arg0 + 1)) && (func_008BC3B0() == 0)) {
                if (M2C_FIELD(arg0, u8 *, 0) != 0) {
                    var_v1 = 1;
                } else {
                    var_v1 = 0;
                }
                temp_s1 = func_001F08B0(var_v1 + 0x3C0000);
                func_008D3490(arg0 + 0x1CA8, temp_s1, func_001F08B0(0x3F0012), 1);
                M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
            }
            goto block_23;
        }
    } else {
        return 0;
    }
}
