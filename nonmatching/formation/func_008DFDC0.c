/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_008C5D40(void *);                      /* extern */
M2C_UNK func_008C5D70(void *);                      /* extern */

void func_008DFDC0(void *arg0) {
    func_002DF960(M2C_FIELD(arg0, s32 *, 0x28));
    func_001F1EA0(M2C_FIELD(arg0, void **, 0x24));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x2C));
    func_001D7F10(M2C_FIELD(arg0, void **, 0x30));
    func_008C5D70(arg0 + 4);
    M2C_FIELD(arg0, s32 *, 0) = 0x010C0013;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, void **, 0x24) = NULL;
    M2C_FIELD(arg0, void **, 0x2C) = NULL;
    M2C_FIELD(arg0, void **, 0x30) = NULL;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    func_008C5D40(arg0 + 4);
}
