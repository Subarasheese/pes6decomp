/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00CBCDE0[];
extern char D_00CBCDE1[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];
extern char D_00CBCDE4[];
extern char D_00CBCDEE[];

void func_00B94D70(s32 arg0, void *arg1) {
    s8 var_a2;

    switch (arg0) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
    case 0:                                         /* switch 1 */
        var_a2 = (((((*(u8 *)D_00591BE4) * 4) / 3) + ((u32) ((*(u8 *)D_00591BE4) * 4) >> 0x1F)) - M2C_FIELD(arg1, u8 *, 6)) - M2C_FIELD(arg1, s32 *, 0x34);
        if (var_a2 < 0) {
            var_a2 = 0;
        }
        (*(s8 *)D_00CBCDEE) = var_a2;
        break;
    case 2:                                         /* switch 1 */
        (*(s8 *)D_00CBCDEE) = 0;
        break;
    }
    switch (arg0) {                                 /* switch 2; irregular */
    case 1:                                         /* switch 2 */
    case 0:                                         /* switch 2 */
        (*(f32 *)D_00591E58) = M2C_FIELD(arg1, f32 *, 8);
        (*(f32 *)D_00591E5C) = M2C_FIELD(arg1, f32 *, 0xC);
        (*(f32 *)D_00591E60) = M2C_FIELD(arg1, f32 *, 0x10);
        /* fallthrough */
    case 2:                                         /* switch 2 */
        (*(u8 *)D_00CBCDE1) = M2C_FIELD(arg1, u8 *, 2);
        (*(u8 *)D_00CBCDE0) = M2C_FIELD(arg1, u8 *, 3);
        (*(u8 *)D_00CBCDE2) = M2C_FIELD(arg1, u8 *, 4);
        (*(u8 *)D_00CBCDE3) = M2C_FIELD(arg1, u8 *, 5);
        (*(u8 *)D_00CBCDE4) = M2C_FIELD(arg1, u8 *, 0x2F);
        return;
    }
}
