/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154060(M2C_UNK, M2C_UNK);                /* extern */
s32 func_001B5350(f32 *, M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
f32 func_001E5410();                                /* extern */
M2C_UNK func_001EDA30(s32, M2C_UNK);                /* extern */
s32 func_001EE0D0();                                /* extern */
extern s32 D_003EA610;
extern char D_003F7794[];
extern char D_009025F0[];
extern char D_009025F4[];
extern char D_009025F8[];
extern char D_009025FC[];
extern char D_00902600[];

void func_00901440(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    D_003EA610 = func_00154060(1, 0x18);
    if ((*(s32 *)D_009025F0) == 0) {
        var_s1 = 0;
        temp_v0 = func_001EE0D0();
        func_001EDA30(temp_v0, 0);
        if (temp_v0 != 0) {
            sp30 = (f32) -(*(s16 *)D_003F7794) / 2.0f;
            sp34 = -func_001E5410() / 2.0f;
            sp38 = (f32) (*(s16 *)D_003F7794);
            sp3C = func_001E5410();
            temp_v0_2 = func_001B5350(&sp30, 0, temp_v0, 0, 0, 0);
            (*(s32 *)D_009025F8) = 0;
            var_s1 = temp_v0_2;
            (*(s32 *)D_009025FC) = 0;
            (*(s32 *)D_00902600) = 4;
        }
        (*(s32 *)D_009025F0) = temp_v0;
        (*(s32 *)D_009025F4) = var_s1;
    }
}
