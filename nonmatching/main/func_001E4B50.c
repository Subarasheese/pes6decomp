/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DCCF0(void *);
extern s32 func_001DD3C0(s32);
extern s32 func_001DD520(s32);
u8 *func_001DCFE0(s32, s32);                        /* extern */
M2C_UNK func_001DF7B0(s32);                         /* extern */
s32 func_001DFA30(s32, M2C_UNK, s32);               /* extern */
M2C_UNK func_001E1FB0(s32);                         /* extern */
extern char D_0052ADF0[];
extern char D_0052ADF4[];
extern char D_0052ADF8[];
extern char D_0052ADFC[];
extern char D_0052AE00[];
extern char D_0052AE70[];

u8 func_001E4B50(s32 arg0, void *arg1, u8 *arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v1;
    u8 var_s0;

    temp_v0 = func_001DD520(arg0);
    if (temp_v0 != 0) {
        if (func_001DD3C0(arg0) != 0) {
            func_001DCCF0(arg1);
            if ((*(s32 *)D_0052ADF0) == 0) {
                switch ((*(s32 *)D_0052ADF4)) {               /* irregular */
                case 8:
                    var_s0 = (*(u8 *)D_0052ADFC);
                    temp_v0_2 = func_001DFA30(arg0, 0, (*(s32 *)D_0052AE00));
                    func_001E1FB0(temp_v0_2);
                    if ((*(f32 *)D_0052AE70) >= 2.1474836e9f) {
                        var_v1 = (s32) ((*(f32 *)D_0052AE70) - 2.1474836e9f) | 0x80000000;
                    } else {
                        var_v1 = (s32) (*(f32 *)D_0052AE70);
                    }
                    *arg2 = var_v1 & 0xFF;
                    func_001DF7B0(temp_v0_2);
                    break;
                case 0:
                    *arg2 = 0;
                    var_s0 = 0;
                    break;
                default:
                    var_s0 = *(u8 *)0x52ADFC;
                    *arg2 = 0;
                    break;
                }
            } else {
                *arg2 = *func_001DCFE0(temp_v0, (*(s32 *)D_0052ADF8));
                var_s0 = (*(u8 *)D_0052ADFC);
            }
            return var_s0;
        }
        *arg2 = 0;
        return 0U;
    }
    *arg2 = 0;
    return 0U;
}
