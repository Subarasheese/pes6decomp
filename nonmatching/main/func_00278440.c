/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001520C0(void);
M2C_UNK func_00B24180(M2C_UNK);                     /* extern */
M2C_UNK func_00B241B0(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00BF9E70(M2C_UNK);                     /* extern */
extern u8 D_003E9CA4;
extern char D_00591BE4[];
extern char D_00591DD2[];

void func_00278440(void) {
    f32 temp_f1;
    f32 var_f0;
    s32 var_v1;
    u8 temp_a1;

    switch ((*(u8 *)D_00591DD2)) {                           /* irregular */
    case 0:
        func_00B241B0(1, (*(u8 *)D_00591DD2));
        (*(u8 *)D_00591DD2) += 1;
        return;
    case 1:
        (*(u8 *)D_00591DD2) += 1;
        return;
    case 2:
        D_003E9CA4 = 0;
        (*(u8 *)D_00591DD2) += 1;
        return;
    case 3:
        if (func_001520C0() != 0) {
            if ((s32) (*(u8 *)D_00591BE4) < 0) {
                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
            } else {
                var_f0 = (f32) (*(u8 *)D_00591BE4);
            }
            temp_f1 = 1.5f * var_f0;
            if (temp_f1 >= 2.1474836e9f) {
                var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            } else {
                var_v1 = (s32) temp_f1;
            }
            func_00B24180(1);
            temp_a1 = D_003E9CA4;
            D_003E9CA4 = temp_a1 + 1;
            if ((var_v1 & 0xFF & 0xFF & 0xFF) < (s32) temp_a1) {
                func_00B241B0(0, temp_a1);
                func_00B24180(0);
                (*(u8 *)D_00591DD2) = 0;
                func_00BF9E70(0);
            }
        }
        return;
    }
}
