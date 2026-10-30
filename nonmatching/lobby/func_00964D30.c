/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0094BBF0(s64, s32, s32);               /* extern */
s32 func_009508A0(s32, s32);                        /* extern */
s32 func_009509A0(s32, s32);                        /* extern */
s32 func_00950D30(s32);                             /* extern */
s64 func_00951400(s32);                             /* extern */
extern s32 D_003EAC90;

void func_00964D30(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s64 temp_s1;

    temp_v0 = func_00950D30(D_003EAC90);
    temp_s1 = (s64) (func_00951400(temp_v0) << 0x38) >> 0x38;
    temp_s0 = func_009509A0(temp_v0, arg0) & 0xFF;
    func_0094BBF0(temp_s1, func_009508A0(temp_v0, arg0) & 0xFF, temp_s0);
}
