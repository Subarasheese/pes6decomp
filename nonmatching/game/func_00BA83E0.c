/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */

s32 func_00BA83E0(void *arg0) {
    u16 temp_v1;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v1) {                              /* irregular */
    case 0x2A8:
    case 0x2A9:
    case 0x2A4:
    case 0x2A5:
    case 0x286:
        if (func_00207D10(temp_a0) != 0) {
            func_002075B0(M2C_FIELD(arg0, void **, 4), 0x1BF, 0, 8);
block_23:
            return 1;
        }
        if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
            func_0027A600(arg0, 0);
        }
    default:
        return 0;
    case 0x2A6:
    case 0x276:
    case 0x285:
    case 0x29A:
    case 0x299:
    case 0x298:
    case 0x2A2:
    case 0x2A3:
    case 0x29E:
        func_002075B0(temp_a0, 0x1BF, 0, 8);
        goto block_23;
    }
}
