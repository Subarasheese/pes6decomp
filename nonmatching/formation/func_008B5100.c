/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_008B9AB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CB5D0(void *, M2C_UNK);             /* extern */
s32 func_008E2870(void *, u8);                      /* extern */
M2C_UNK func_008E2A40(void *);                      /* extern */
M2C_UNK func_008E2A50(void *, M2C_UNK, M2C_UNK, u8, s32 *); /* extern */
M2C_UNK func_008E5110(void *, M2C_UNK);             /* extern */

s32 func_008B5100(void *arg0, s32 arg1) {
    s32 sp28;
    s32 sp2C;

    switch (arg1) {                                 /* irregular */
    case 1:
        if (func_008E2870(arg0 + 0x2484, M2C_FIELD(arg0, u8 *, 0x19)) == 2) {
            func_008E2A40(arg0 + 0x2484);
            return 0x25;
        }
    case 2:
block_11:
    default:
        return 0;
    case 0:
        func_008E5110(arg0 + 0x129C, 0);
        func_008CB5D0(arg0 + 0xB0C, 0);
        func_008B9AB0(M2C_FIELD(arg0, s32 *, 0x1D5C), 0);
        sp28 = func_001F08B0(0x010C0006);
        sp2C = 0;
        func_008E2A50(arg0 + 0x2484, 3, 5, M2C_FIELD(arg0, u8 *, 0), &sp28);
        goto block_11;
    }
}
