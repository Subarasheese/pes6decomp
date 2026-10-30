/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern int func_002DCA30(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
M2C_UNK func_0085EF40();                            /* extern */
M2C_UNK func_0085F190();                            /* extern */
M2C_UNK func_008D3130(void *);                      /* extern */
M2C_UNK func_008D3490(void *, s32, s32, M2C_UNK);   /* extern */
s32 func_008D90A0(u8);                              /* extern */
extern char D_008EE190[];

s32 func_008B4790(void *arg0, s32 arg1) {
    s32 temp_s1_2;
    s32 var_v1;
    s64 temp_s1;
    u8 temp_v1;
    u8 var_v0;

    if (arg1 != 1) {
        goto block_29;
    }
    if (((s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30) != 3) {
        return 0x28;
    }
    temp_s1 = (s64) (func_00858C20(M2C_FIELD(arg0, u8 *, 0) & 0xFF) << 0x30) >> 0x30;
    if (temp_s1 == *func_008472D0()) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
        switch (temp_v1) {                          /* irregular */
        case 3:
            return 0x27;
        case 2:
            func_008D3130(arg0 + 0x1CA8);
            if (func_008D90A0(M2C_FIELD(arg0, u8 *, 0x19)) & 0x40) {
                func_0026E840(0x84008401);
                func_008D3490(arg0 + 0x1CA8, 0, 0, 0);
                if (func_002DCA30() != 0) {
                    func_0085EF40();
                }
                var_v0 = M2C_FIELD(arg0, u8 *, 0x16) + 1;
block_28:
                M2C_FIELD(arg0, u8 *, 0x16) = var_v0;
            }
block_29:
            return 0;
        case 0:
            func_0085F190();
            M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) + 1);
            /* fallthrough */
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0) != 0) {
                var_v1 = 1;
            } else {
                var_v1 = 0;
            }
            temp_s1_2 = func_001F08B0(var_v1 + 0x3C0000);
            func_008D3490(arg0 + 0x1CA8, temp_s1_2, func_001F08B0(0x3F0012), 1);
            var_v0 = M2C_FIELD(arg0, u8 *, 0x16) + 1;
            goto block_28;
        }
    } else {
        return 0x28;
    }
}
