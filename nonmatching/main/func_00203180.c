/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0019FBA0(void);
s8 func_0019F4D0();                                 /* extern */
s8 func_0019F650();                                 /* extern */
M2C_UNK func_001A2330(s32);                         /* extern */
extern char D_00592740[];
extern char D_0059274E[];
extern char D_00592754[];

void func_00203180(void) {
    s32 temp_s0;
    s32 var_v1;

    if ((*(u8 *)D_0059274E) == 0) {
        var_v1 = 3;
    } else {
        var_v1 = (((*(u8 *)D_0059274E) & 0xFF) - 1) & 0xFF;
    }
    temp_s0 = var_v1 & 0xFF;
    switch ((*(u8 *)D_00592740)) {                           /* irregular */
    case 0:
        func_001A2330(temp_s0 & 0xFF);
        func_0019FBA0();
        (*(u8 *)D_00592740) += 1;
        /* fallthrough */
    case 1:
        if ((temp_s0 & 0xFF) != 3) {
            (*(s8 *)D_00592754) = func_0019F650();
            return;
        }
        (*(s8 *)D_00592754) = func_0019F4D0();
        return;
    default:
        *(s8 *)0x592740 = 0;
        return;
    }
}
