/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
M2C_UNK func_001D5EE0(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_001E7370(s32, f32 *);                  /* extern */
M2C_UNK func_001F0590(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_008B2FF0(M2C_UNK);                     /* extern */
extern s8 D_003EAA64;
extern char D_0095DC60[];
extern char D_0095DC64[];
extern char D_0095DC68[];
extern char D_0095DC70[];
extern char D_0095DC74[];

s32 func_00935230(void) {
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 sp28;

    sp20 = (*(f32 *)D_0095DC60);
    sp24 = (*(f32 *)D_0095DC64);
    sp28 = (*(f32 *)D_0095DC68);
    sp18 = (*(f32 *)D_0095DC70);
    sp1C = (*(f32 *)D_0095DC74);
    switch (D_003EAA64) {                           /* irregular */
    case 1:
        func_001F0590(func_0021DF90(0x16));
        func_001E7370(func_0021E000(0x14C), &sp20);
        func_008B2FF0(7);
        D_003EAA64 += 1;
block_15:
    default:
        return 0;
    case 0:
        D_003EAA64 += 1;
        goto block_15;
    case 2:
        if (func_0017F900() == 1) {
            func_001D5EE0(0x10388, &sp18);
            D_003EAA64 += 1;
        }
        goto block_15;
    case 3:
        if (func_0017F900() == 1) {
            D_003EAA64 = 0;
            return 1;
        }
        goto block_15;
    }
}
