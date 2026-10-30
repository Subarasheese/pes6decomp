/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
M2C_UNK func_008C5CF0(s32);                         /* extern */

void func_008E8EC0(void *arg0, s8 arg1) {
    func_008C5CF0(arg0 + 0x10);
    func_001D7D60(M2C_FIELD(arg0, void **, 0x38), arg1);
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0x30), (u8) arg1);
}
