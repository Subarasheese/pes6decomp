/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern void func_001D7D60(void *, s8);
M2C_UNK func_002DB580(s32, s8);                     /* extern */
M2C_UNK func_008C5750(void *, s32);                 /* extern */
M2C_UNK func_008C5CF0();                            /* extern */

void func_008E1420(void *arg0, s8 arg1) {
    func_008C5CF0();
    if ((arg1 & 0xFF) != 1) {
        func_008C5750(arg0, 0);
    } else {
        func_008C5750(arg0, func_001F08B0(0x42001C));
    }
    func_001D7D60(M2C_FIELD(arg0, void **, 0x60), arg1);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x21) < (s32) M2C_FIELD(arg0, u8 *, 0x20)) {
        func_002DB580(M2C_FIELD(arg0, s32 *, 0x5C), arg1);
    }
}
