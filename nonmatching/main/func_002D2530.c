/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A34B0(s32, s32);                    /* extern */
M2C_UNK func_001A34D0(u8, u8);                      /* extern */
M2C_UNK func_001A3500(u8, M2C_UNK, s32, s32);       /* extern */
s32 func_0021EB50(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00295290();                                /* extern */
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BC4[];
extern char D_00591BC5[];

void func_002D2530(void) {
    M2C_UNK var_s2;
    s32 temp_s0_2;
    s32 temp_s1;
    u8 temp_s0;

    temp_s0 = (*(u8 *)D_00591BB4);
    if ((*(u8 *)D_00591BB7) != 0) {
        var_s2 = 2;
        if ((*(u8 *)D_00591BB7) != 2) {
            var_s2 = 1;
        }
    } else {
        var_s2 = 0;
    }
    temp_s1 = (*(u8 *)D_00591BB6) != 0;
    func_001A3500(temp_s0, var_s2, temp_s1, func_00295290() != 0);
    func_001A34D0((*(u8 *)D_00591BC4), (*(u8 *)D_00591BC5));
    temp_s0_2 = func_0021EB50(0x126, 0) & 0xFF;
    func_001A34B0(temp_s0_2, func_0021EB50(0x127, 0) & 0xFF);
}
