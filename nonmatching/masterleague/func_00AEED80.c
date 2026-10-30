/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern s32 func_00AF0910(s32, s32);
extern s32 func_001F08B0(s32);
extern void func_001DF370(void *, s32);
extern f32 func_001E4E30(void);
M2C_UNK func_001DF510(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00971DD0(s32, s32);                    /* extern */
M2C_UNK func_009737C0(void *, M2C_UNK);             /* extern */
M2C_UNK func_009737E0(void *, s32, s32);            /* extern */
M2C_UNK func_00AEE370(s32, s16, s32);               /* extern */
M2C_UNK func_00AEEC50(s16);                         /* extern */
s32 func_00AF0930(s32);                             /* extern */
extern char D_00B79180[];

void func_00AEED80(s32 arg0) {
    s32 *var_s3;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 var_s1_2;
    s32 var_s2;
    u32 temp_v0;
    u32 var_s1;
    u32 var_s2_2;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        temp_s0 = func_00AF0930(arg0) & 0xFF;
        var_s2 = 0;
        var_s1 = temp_v0;
        do {
            func_009737C0(M2C_FIELD(var_s1, void **, 8), 0);
            func_009737C0(M2C_FIELD(var_s1, void **, 0x3C), 0);
            var_s2 += 1;
            var_s1 += 4;
        } while (var_s2 < 0xD);
        var_s1_2 = 0;
        if (temp_s0 > 0) {
            var_s2_2 = temp_v0;
            var_s3 = ((void *)D_00B79180) + ((arg0 & 0xFF) * 0x34);
            do {
                func_009737E0(M2C_FIELD(var_s2_2, void **, 8), var_s1_2, func_001F08B0(*var_s3));
                func_009737C0(M2C_FIELD(var_s2_2, void **, 8), 1);
                temp_v0_2 = func_00AF0910(arg0, var_s1_2 & 0xFF);
                func_00AEE370(temp_v0_2, M2C_FIELD((temp_v0 + (temp_v0_2 * 2)), s16 *, 0x1B0), temp_v0 + 0x1D0);
                func_009737E0(M2C_FIELD(var_s2_2, void **, 0x3C), var_s1_2 + 0xE, temp_v0 + 0x1D0);
                if (!(func_001E4E30() <= 205.0f)) {
                    func_001DF510(M2C_FIELD(M2C_FIELD(var_s2_2, void **, 0x3C), void **, 0xC), 0x43480000, 0x41800000);
                    func_001DF370(M2C_FIELD(M2C_FIELD(var_s2_2, void **, 0x3C), void **, 0xC), 0x10);
                }
                func_009737C0(M2C_FIELD(var_s2_2, void **, 0x3C), 1);
                var_s1_2 += 1;
                var_s3 += 4;
                var_s2_2 += 4;
            } while (var_s1_2 < temp_s0);
        }
        func_00AEEC50(M2C_FIELD(temp_v0, s16 *, 0x1CC));
        func_00971DD0(M2C_FIELD(temp_v0, s32 *, 0x178), arg0 & 0xFF);
    }
}
