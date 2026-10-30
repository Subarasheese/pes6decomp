/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B26E20(s32);
extern s32 func_001520C0(void);
extern void func_00B26E50(s32);
extern u16 D_003EA70C;
extern char D_00591BE4[];
extern char D_00591DD1[];
extern char D_00591EF8[];
extern char D_00591EF9[];
extern char D_00591EFA[];
extern char D_00591EFB[];

void func_009A0B90(void) {
    f32 temp_f1;
    f32 var_f0;
    s32 var_v1;

    switch ((*(u8 *)D_00591DD1)) {                           /* irregular */
    case 1:
        if (((*(u8 *)D_00591EF8) == (*(u8 *)D_00591EFA)) && ((*(u8 *)D_00591EF9) == (*(u8 *)D_00591EFB))) {
block_21:
            (*(u8 *)D_00591DD1) = 0;
        } else {
            func_00B26E50(1);
            (*(u8 *)D_00591DD1) += 1;
        }
        return;
    case 2:
        (*(u8 *)D_00591DD1) += 1;
        break;
    case 3:
        (*(u8 *)D_00591EFA) = (*(u8 *)D_00591EF8);
        (*(u8 *)D_00591EFB) = (*(u8 *)D_00591EF9);
        (*(u8 *)D_00591DD1) += 1;
        break;
    case 4:
        D_003EA70C = 0;
        (*(u8 *)D_00591DD1) += 1;
        break;
    case 5:
        if (func_001520C0() != 0) {
            if ((s32) (*(u8 *)D_00591BE4) >= 0) {
                var_f0 = (f32) (*(u8 *)D_00591BE4);
            } else {
                var_f0 = 2.0f * (f32) (((u8) (*(u8 *)D_00591BE4) >> 1) | ((*(u8 *)D_00591BE4) & 1));
            }
            temp_f1 = 1.5f * var_f0;
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_v1 = (s32) temp_f1;
            } else {
                var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            func_00B26E20(1);
            D_003EA70C += 1;
            if ((var_v1 & 0xFFFF & 0xFFFF & 0xFFFF) < (s32) D_003EA70C) {
                func_00B26E50(0);
                func_00B26E20(0);
                goto block_21;
            }
        } else {
            return;
        }
        break;
    }
}
