/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00105868(void);
extern s32 func_00106C68(void);
M2C_UNK func_001059F8(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_00106008(s32, s32, s32);                   /* extern */

s32 func_001060E8(void *arg0, s32 *arg1) {
    s32 temp_s0;

    func_001059F8(0x2200001E, 0, 0, 0);
    func_001059F8(0x2200001F, M2C_FIELD(arg0, s32 *, 0x1C), 0, 0);
    func_001059F8(0x22000026, func_00105868() + M2C_FIELD(arg0, s32 *, 0x18), 0, 0);
    temp_s0 = func_00106C68() + M2C_FIELD(arg0, s32 *, 0xC);
    *arg1 = func_00106008(temp_s0, func_00105868() + M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 8));
    return 1;
}
