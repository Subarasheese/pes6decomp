/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3CA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */

void func_008D02E0(void *arg0) {
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x1DC));
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    func_001F3CA0(M2C_FIELD(arg0, void **, 0x50));
    func_001F3CA0(M2C_FIELD(arg0, void **, 0x4C));
    M2C_FIELD(arg0, s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, s32 *, 0x190) = 0;
    M2C_FIELD(arg0, s32 *, 0x1BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C8) = 0;
    M2C_FIELD(arg0, s8 *, 2) = 3;
}
