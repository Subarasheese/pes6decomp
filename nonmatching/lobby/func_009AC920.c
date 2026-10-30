/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009CD9F0(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00962480(s32);                             /* extern */
M2C_UNK func_0098CAD0();                            /* extern */
extern char D_00A7DBD0[];
extern char D_00A7DBD4[];
extern char D_00A7DBE0[];

s32 func_009AC920(void) {
    s32 temp_v0;

    temp_v0 = func_00962480(func_009CD9F0() & 0xFFFF);
    if (temp_v0 != 0) {
        func_0098CAD0();
    }
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 3:
block_20:
        (*(s32 *)D_00A7DBD0) = 7;
        break;
    case 2:
        goto block_20;
    case 1:
        func_0026E840(0x8C008005);
        (*(s32 *)D_00A7DBD4) = 2;
        (*(s32 *)D_00A7DBD0) = 9;
        (*(s32 *)D_00A7DBE0) = 0x01FB003D;
        break;
    case 4:
        goto block_20;
    }
    return temp_v0;
}
