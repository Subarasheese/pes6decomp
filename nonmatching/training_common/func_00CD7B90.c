/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
M2C_UNK func_001FA5A0();                            /* extern */
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
M2C_UNK func_00244E30();                            /* extern */
M2C_UNK func_00256440();                            /* extern */
M2C_UNK func_00256D50(s32, s32, s32);               /* extern */
M2C_UNK func_00288350();                            /* extern */
M2C_UNK func_0028CD80(s8, s32, M2C_UNK *);          /* extern */
extern s8 D_003E9E88;
extern s8 D_003E9E89;
extern char D_00591A90[];
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00CD7B90(void) {
    M2C_UNK *var_a2_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_s1;
    s32 var_s2;
    s8 var_a0;
    u16 *var_s0;
    u16 temp_a0;
    void *temp_v1;

    var_s2 = 0;
    (*(u16 *)D_00591BB0) = 0x111;
    D_003E9E88 = 0;
    D_003E9E89 = 0;
    var_s0 = ((void *)D_00591BB0);
    (*(u16 *)D_00591BB2) = 0x110;
    do {
        var_s1 = 0;
loop_2:
        temp_a0 = *var_s0;
        if ((s32) temp_a0 < 0xA2) {
            var_a2 = 0;
        } else {
            var_a2 = 1;
        }
        func_00256D50(var_s2, var_s1, Pes6Team_GetPlayerId((s32) temp_a0, var_s1 & 0xFF, var_a2) & 0xFFFF);
        var_s1 += 1;
        if (var_s1 < 0x20) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s0 += 2;
    } while (var_s2 < 2);
    func_00256440();
    var_a1 = 0;
    var_a2_2 = ((void *)D_00591A90);
    do {
        var_a0 = 0;
loop_9:
        temp_v1 = var_a2_2 + var_a0;
        M2C_FIELD(temp_v1, s8 *, 7) = var_a0;
        M2C_FIELD(temp_v1, s8 *, 8) = (s8) (var_a0 + 1);
        M2C_FIELD(temp_v1, s8 *, 9) = (s8) (var_a0 + 2);
        M2C_FIELD(temp_v1, s8 *, 0xA) = (s8) (var_a0 + 3);
        M2C_FIELD(temp_v1, s8 *, 0xB) = (s8) (var_a0 + 4);
        M2C_FIELD(temp_v1, s8 *, 0xC) = (s8) (var_a0 + 5);
        M2C_FIELD(temp_v1, s8 *, 0xD) = (s8) (var_a0 + 6);
        M2C_FIELD(temp_v1, s8 *, 0xE) = (s8) (var_a0 + 7);
        var_a0 += 8;
        if (var_a0 < 0x20) {
            goto loop_9;
        }
        var_a1 += 1;
        var_a2_2 += 0x8B;
    } while (var_a1 < 2);
    func_0028CD80(var_a0, var_a1, var_a2_2);
    func_00288350();
    func_001FA5A0();
    func_001FAF40(0, (*(u16 *)D_00591BB0));
    func_001FAF40(1, (*(u16 *)D_00591BB2));
    func_00244E30();
}
