/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EB2D4;
extern M2C_UNK func_00CE9990;
extern M2C_UNK func_00CE99C0;
extern M2C_UNK func_00CE9A00;
extern M2C_UNK func_00CE9A60;
extern M2C_UNK func_00CE9AC0;

void func_00CE9B20(void) {
    M2C_FIELD(D_003EB2D4, M2C_UNK **, 8) = &func_00CE9A60;
    M2C_FIELD(D_003EB2D4, M2C_UNK **, 0x14) = &func_00CE9AC0;
    M2C_FIELD(D_003EB2D4, s32 *, 0x20) = 0;
    M2C_FIELD(D_003EB2D4, s32 *, 0x2C) = 0;
    M2C_FIELD(D_003EB2D4, M2C_UNK **, 0x68) = &func_00CE9A00;
    M2C_FIELD(D_003EB2D4, M2C_UNK **, 0x74) = &func_00CE99C0;
    M2C_FIELD(D_003EB2D4, M2C_UNK **, 0xBC) = &func_00CE9990;
}
