/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_002DCE40(u16);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
s16 func_00857CB0(s32, u16);                        /* extern */
extern s32 D_003EA294;
extern char D_008B09E0[];
extern char D_008B0E20[];

s32 func_00847370(void) {
    s32 sp48;
    s32 sp4C;
    M2C_UNK *var_s1;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_s0;
    s32 var_s2;

    var_s1 = ((void *)D_008B09E0);
    func_00110E58(func_001105C8(), &sp4C, &sp48);
    temp_s0 = (sp48 / 1000) + (sp4C * 0x3E8);
    if (!(D_003EA294 & 4)) {
        var_s2 = 0;
        do {
            temp_v1 = M2C_FIELD(var_s1, s16 *, 0);
            if ((temp_v1 != 0) && (temp_v1 != (*(s16 *)D_008B0E20)) && ((u32) (temp_s0 - M2C_FIELD(var_s1, s32 *, 0x74)) >= 0x1389U)) {
                temp_v0 = func_00857CB0(M2C_FIELD(var_s1, s32 *, 0x10), func_002DCE40(M2C_FIELD(var_s1, u16 *, 0xE)));
                M2C_FIELD(var_s1, s16 *, 0x80) = (s16) M2C_FIELD(var_s1, s16 *, 0x7E);
                M2C_FIELD(var_s1, s16 *, 0x7E) = (s16) M2C_FIELD(var_s1, s16 *, 0x7C);
                M2C_FIELD(var_s1, s16 *, 0x7C) = (s16) M2C_FIELD(var_s1, s16 *, 0x7A);
                M2C_FIELD(var_s1, s16 *, 0x7A) = (s16) M2C_FIELD(var_s1, s16 *, 0x78);
                M2C_FIELD(var_s1, s16 *, 0x78) = (s16) M2C_FIELD(var_s1, s16 *, 0x82);
                M2C_FIELD(var_s1, s16 *, 0x82) = temp_v0;
                M2C_FIELD(var_s1, s32 *, 0x74) = temp_s0;
            }
            var_s2 += 1;
            var_s1 += 0x88;
        } while (var_s2 < 8);
    }
    return 0;
}
