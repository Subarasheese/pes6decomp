/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00168580(void *);                      /* extern */
M2C_UNK func_0016A210(void *);                      /* extern */
M2C_UNK func_0016ABF8(void *);                      /* extern */

void func_00167F90(void *arg0) {
    void *temp_a0;

    M2C_FIELD(arg0, s32 *, 0x9C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x998) = 0;
    M2C_FIELD(arg0, s32 *, 0x99C) = 0;
    M2C_FIELD(arg0, s32 *, 0x9A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9A4) = 0;
    func_0016A210(arg0 + 0x9D0);
    func_0016ABF8(arg0);
    func_00168580(arg0);
    temp_a0 = arg0 + 0x9B4;
    M2C_FIELD(arg0, s32 *, 0x990) = 1;
    M2C_FIELD(arg0, s32 *, 0x994) = 2;
    M2C_FIELD(arg0, void **, 0x9B4) = temp_a0;
    M2C_FIELD(arg0, s32 *, 0x9BC) = 0;
    M2C_FIELD(arg0, void **, 0x9B8) = temp_a0;
}
