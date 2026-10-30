/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001CDA00(s32 *, u32 *);                /* extern */
s32 func_001DF010(s32, u32);                        /* extern */
M2C_UNK func_001DF4F0(s32, s32);                    /* extern */
M2C_UNK func_00362A10(M2C_UNK);                     /* extern */
M2C_UNK func_00363470();                            /* extern */
extern s32 D_003EB36C;
extern char D_00D395A4[];
extern char D_00D395DC[];
extern char D_00D395E0[];

s32 func_00D14030(void) {
    u32 sp20;
    s32 sp24;
    u32 sp28;
    s32 sp2C;
    s32 temp_s0;
    u32 temp_a1;

    func_00362A10(1);
    func_00363470();
    temp_s0 = (*(s32 *)D_00D395DC);
    if (((u64) ((s64) (*(u8 *)D_00D395A4) << 0x3D) >> 0x3F) != 0) {
        func_001CDA00(&sp2C, &sp28);
        temp_a1 = (*(s32 *)D_00D395E0) + 0x1F4;
        if (temp_a1 < (u32) ((sp28 / 1000U) + (sp2C * 0x3E8))) {
            func_001DF4F0(temp_s0, (func_001DF010(temp_s0, temp_a1) == 0) & 0xFF);
            func_001CDA00(&sp24, &sp20);
            (*(s32 *)D_00D395E0) = (sp20 / 1000U) + (sp24 * 0x3E8);
        }
    }
    return D_003EB36C;
}
