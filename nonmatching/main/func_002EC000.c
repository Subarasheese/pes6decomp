/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002EC000(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x4E) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x4F) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) M2C_FIELD(arg2, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 0x51) = (u8) M2C_FIELD(arg2, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 0x52) = (u8) M2C_FIELD(arg2, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 0x53) = (u8) M2C_FIELD(arg2, u8 *, 3);
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
}
