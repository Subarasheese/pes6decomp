/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern u32 func_00288670(u32, u32);
M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_009BAE30(void *);                          /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B7C7F0(void *);                      /* extern */
extern char Pes6MatchSquads[];

void func_00C02BF0(void *arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    M2C_FIELD(arg0, s8 *, 0x61) = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
    temp_v1 = func_009E1C90(1) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        if (func_009BAE30(arg0) == 0) {
        default:
block_12:
            var_s0 = 1;
        }
        break;
    case 12:
        if (func_00BF6280() == 0) {
            func_009BAE30(arg0);
        }
        goto block_12;
    }
    if (var_s0 != 0) {
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), 0x385, 0);
        func_00207390(M2C_FIELD(arg0, s32 *, 4), 6);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    } else {
        func_00B7C7F0(arg0);
    }
}
