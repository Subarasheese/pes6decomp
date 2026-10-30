/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern s32 func_001F3D10(s32, u8);
extern void func_001D7D60(void *, s8);
M2C_UNK func_008C5750(s32, s32);                    /* extern */
M2C_UNK func_008C5CF0(s32);                         /* extern */

void func_008EAD60(void *arg0, u8 arg1) {
    func_008C5CF0(arg0 + 4);
    if ((arg1 & 0xFF) != 1) {
        func_008C5750(arg0 + 4, 0);
    } else {
        func_008C5750(arg0 + 4, func_001F08B0(0x42001C));
    }
    func_001F3D10(M2C_FIELD(arg0, s32 *, 0x24), arg1);
    func_001D7D60(M2C_FIELD(arg0, void **, 0x3C), (s8) arg1);
}
