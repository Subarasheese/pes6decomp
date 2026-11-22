/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00520080[];

void func_00188910(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if (M2C_FIELD(*(void **)D_00520080, u8 *, 7) != 0) {
        M2C_FIELD(arg0, s32 *, 0) = 0xC52C0000;
        M2C_FIELD(arg0, s32 *, 0xC) = 0x452C0000;
        M2C_FIELD(arg0, s32 *, 0x14) = 0x461F0000;
        M2C_FIELD(arg0, s32 *, 8) = 0x461F0000;
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0xC52C0000;
        M2C_FIELD(arg0, s32 *, 0xC) = 0x452C0000;
        M2C_FIELD(arg0, s32 *, 0x14) = 0x46160000;
        M2C_FIELD(arg0, s32 *, 8) = 0x46160000;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        return;
    }
}
