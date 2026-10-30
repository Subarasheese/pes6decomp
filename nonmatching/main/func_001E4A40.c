/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001DD520(s32);
extern s32 func_001DD3C0(s32);
extern void func_001DCCF0(void *);
u8 *func_001DCFE0(s32, s32);                        /* extern */
extern char D_0052ADF0[];
extern char D_0052ADF4[];
extern char D_0052ADF8[];
extern char D_0052ADFC[];
extern void *D_0052AE00;

u8 func_001E4A40(s32 arg0, void *arg1, u8 *arg2) {
    s32 temp_v0;
    u8 var_v0;

    if (func_001DD3C0(arg0) != 0) {
        temp_v0 = func_001DD520(arg0);
        if (temp_v0 != 0) {
            func_001DCCF0(arg1);
            if ((*(s32 *)D_0052ADF0) == 0) {
                switch ((*(s32 *)D_0052ADF4)) {               /* irregular */
                case 0:
                    *arg2 = 0;
                    var_v0 = 0;
                    break;
                case 8:
                    var_v0 = func_001E4A40(arg0, D_0052AE00, arg2) & 0xFF;
                    break;
                default:
                    var_v0 = *(u8 *)0x52ADFC;
                    *arg2 = 0;
                    break;
                }
            } else {
                *arg2 = *func_001DCFE0(temp_v0, (*(s32 *)D_0052ADF8));
                var_v0 = (*(u8 *)D_0052ADFC);
            }
            return var_v0;
        }
        *arg2 = 0;
        return 0U;
    }
    *arg2 = 0;
    return 0U;
}
