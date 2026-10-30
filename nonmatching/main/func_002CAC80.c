/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CBD20(s8, s32, s32);
M2C_UNK func_002CB9B0(M2C_UNK);                     /* extern */
M2C_UNK func_002CBA60(M2C_UNK);                     /* extern */
extern s32 D_003E9AB0;
extern s8 D_003E9D58;
extern char D_00E07000[];

void func_002CAC80(void) {
    if (D_003E9AB0 != 0) {
        func_002CB9B0(9);
        func_002CB9B0(0xA);
        func_002CBA60(5);
        func_002CBD20(5, (s32) ((void *)D_00E07000), 0x1CE000);
        func_002CB9B0(5);
    } else {
        func_002CB9B0(0x17);
        func_002CB9B0(0xB);
        func_002CB9B0(9);
        func_002CB9B0(0xA);
        func_002CBA60(5);
        func_002CBD20(5, (s32) ((void *)D_00E07000), 0x1CE000);
        func_002CB9B0(5);
    }
    D_003E9D58 = 1;
}
