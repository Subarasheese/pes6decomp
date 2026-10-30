/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */

void func_00188150(void *arg0) {
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x910), M2C_FIELD(arg0, s32 *, 0x5A0), M2C_FIELD(arg0, s32 *, 0x5A4));
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x914), M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x92C), M2C_FIELD(arg0, s32 *, 0x5A4));
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x918), (M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x92C)) - ((s32) M2C_FIELD(arg0, s32 *, 0x930) >> 1), M2C_FIELD(arg0, s32 *, 0x5A4) - (((s32) M2C_FIELD(arg0, s32 *, 0x934) >> 1) - ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1)));
}
