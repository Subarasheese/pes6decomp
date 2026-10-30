/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090BA30(void *);                      /* extern */
M2C_UNK func_0096B650(f32 *, void *, s32);          /* extern */
s8 func_0096BC00();                                 /* extern */
s32 func_00BBB8C0(u32, s32);                        /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591E4E[];
extern char D_005926E2[];
extern char D_00CBBE48[];
extern char D_00CBBE51[];
extern char D_00CBBE52[];
extern char D_00CBBE53[];

void func_0096BA80(void) {
    f32 sp50;
    f32 sp58;
    M2C_UNK *var_s0;
    M2C_UNK *var_s2;
    f32 temp_f0;
    s32 temp_a1;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_v1;
    s8 var_v0;
    u8 temp_a0;
    void *temp_s3;

    var_s1 = 0;
    (*(s8 *)D_00CBBE51) = 0xFF;
    (*(s8 *)D_00CBBE52) = 0xFF;
    (*(s8 *)D_00CBBE53) = 0xFF;
    var_s0 = ((void *)D_00CBBE48);
    do {
        var_s1 += 1;
        M2C_FIELD(var_s0, s8 *, 9) = func_0096BC00();
        var_s0 += 1;
    } while (var_s1 < 3);
    var_s1_2 = 0;
    (*(u8 *)D_00591E4E) = 0xFF;
    var_s2 = ((void *)D_00CBBE48);
    do {
        temp_a0 = M2C_FIELD(var_s2, u8 *, 9);
        if (temp_a0 != 0xFF) {
            if (temp_a0 == 0xFF) {
                var_v1 = 1;
            } else {
                var_v1 = (s32) temp_a0 % 23;
            }
            temp_a1 = var_v1 * 0x240;
            temp_s3 = ((void *)Pes6MatchPlayers) + temp_a1;
            if ((*(u8 *)D_00591E4E) == 0xFF) {
                (*(u8 *)D_00591E4E) = M2C_FIELD(temp_s3, u8 *, 0);
            }
            M2C_FIELD(temp_s3, s32 *, 0x1E0) = (s32) ((*(u8 *)D_005926E2) + func_00BBB8C0((u8) (*(u8 *)D_00591BE4) >> 1, temp_a1));
            func_0090BA30(temp_s3);
            if (var_s1_2 == 2) {
                var_v0 = 9;
                M2C_FIELD(temp_s3, s32 *, 0x1E8) = 3;
            } else {
                M2C_FIELD(temp_s3, s32 *, 0x1E8) = var_s1_2;
                var_v0 = 3;
            }
            M2C_FIELD(temp_s3, s8 *, 0x1DE) = var_v0;
            func_0096B650(&sp50, temp_s3, M2C_FIELD(temp_s3, s32 *, 0x1E8));
            temp_f0 = sp58;
            M2C_FIELD(temp_s3, f32 *, 0x74) = sp50;
            M2C_FIELD(temp_s3, f32 *, 0x6C) = sp50;
            M2C_FIELD(temp_s3, f32 *, 0x78) = temp_f0;
            M2C_FIELD(temp_s3, f32 *, 0x70) = temp_f0;
        }
        var_s1_2 += 1;
        var_s2 += 1;
    } while (var_s1_2 < 3);
}
