/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008BFC70(s32, void *);                 /* extern */
M2C_UNK func_008C0040(s32, void *);                 /* extern */
M2C_UNK func_0099D5E0(M2C_UNK, s64, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_003EA4E0;
extern u8 D_003EA4F0;
extern u8 D_003EA4F1;
extern char D_00591A90[];
extern char D_00591A96[];
extern char D_00591B21[];
extern char D_00591EFC[];
extern char D_008EE190[];
extern char D_008EE730[];
extern char D_008EE750[];

void func_008B77A0(void) {
    M2C_UNK *var_a2;
    M2C_UNK *var_a3;
    M2C_UNK *var_s0;
    s32 var_a1;
    s32 var_s1;
    s64 temp_a1;

    if (D_003EA4E0 == 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_008EE750);
        do {
            if (((M2C_FIELD(var_s0, u8 *, 0x19) == 0xFF) || !((*(u16 *)D_008EE190) & 0x10) || (func_008BFC70(var_s1, var_s0 + 0x208), (((*(u16 *)D_008EE190) & 0x30) == 0x30))) && ((M2C_FIELD(var_s0, u8 *, 0x19) != 0xFF) || (!((*(u16 *)D_008EE190) & 0x80) && (((s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30) == 3)))) {
                func_008C0040(var_s1, var_s0 + 0x208);
            }
            var_s1 += 1;
            var_s0 += 0x3224;
        } while (var_s1 < 2);
        var_a1 = 0;
        var_a3 = ((void *)D_00591A90);
        var_a2 = ((void *)D_008EE730);
loop_11:
        if (M2C_FIELD(var_a2, u8 *, 0) == M2C_FIELD(var_a3, u8 *, 7)) {
            if (M2C_FIELD(var_a2, u8 *, 0xB) == M2C_FIELD(var_a3, u8 *, 0x92)) {
                var_a1 += 1;
                var_a3 += 1;
                var_a2 += 1;
                if (var_a1 < 0xB) {
                    goto loop_11;
                }
            } else {
                (*(s8 *)D_00591EFC) = 1;
            }
        } else {
            (*(s8 *)D_00591EFC) = 1;
        }
        if (D_003EA4F0 != (*(u8 *)D_00591A96)) {
            (*(s8 *)D_00591EFC) = 1;
        }
        if (D_003EA4F1 != (*(u8 *)D_00591B21)) {
            (*(s8 *)D_00591EFC) = 1;
        }
        temp_a1 = (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30;
        if ((temp_a1 != 5) && (temp_a1 != 3)) {
            func_0099D5E0(5, temp_a1, var_a2, var_a3);
        }
    }
}
