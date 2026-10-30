/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00CEAD10(void);
extern s32 func_002630F0(void);
extern u32 func_00CDCD70(void);
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
M2C_UNK func_009E1EC0();                            /* extern */
M2C_UNK func_00BE9ED0(M2C_UNK);                     /* extern */
s32 func_00CD01F0(M2C_UNK, s32, u8);                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591A90[];
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00CEA170(void) {
    M2C_UNK *var_a6;
    s32 *temp_v0;
    s32 temp_a1;
    s32 var_v1;
    s8 temp_a4;
    u32 temp_a5;
    u8 var_a7;

    (*(u16 *)D_00591BB0) = func_00CEAD10();
    (*(u16 *)D_00591BB2) = func_00CEAD10();
    func_001FAF40(0, (*(u16 *)D_00591BB0));
    func_001FAF40(1, (*(u16 *)D_00591BB2));
    if (func_002630F0() != 0) {
        temp_v0 = func_00CDCD70();
        temp_a1 = *temp_v0;
        if (temp_a1 == 5) {
            temp_a5 = func_00CD01F0(0, temp_a1, (u8) *temp_v0) & 0xFF;
            var_a7 = 0;
            if (temp_a5 != 0) {
                var_a6 = ((void *)D_00591A90);
                do {
                    M2C_FIELD(var_a6, u8 *, 7) = var_a7;
                    temp_a4 = var_a7 & 0xFF;
                    if ((var_a7 + 1) != 0xFF) {
                        var_v1 = (var_a7 % 23U) + 1;
                    } else {
                        var_v1 = 1;
                    }
                    var_a7 += 1;
                    var_a6 += 1;
                    M2C_FIELD((((void *)Pes6MatchPlayers) + (var_v1 * 0x240)), s8 *, 0x11) = temp_a4;
                } while (var_a7 < temp_a5);
            }
            func_001FAF40(0, (*(u16 *)D_00591BB0));
            func_001FAF40(1, (*(u16 *)D_00591BB2));
            func_00BE9ED0(0);
            func_009E1EC0();
        }
    }
}
