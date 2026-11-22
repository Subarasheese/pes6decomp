/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00221500(s32);
extern s32 func_00B9FBB0(void);
s32 func_00BC3FB0(s32);
s32 func_00BF4420(s32);
extern s32 func_00BF73D0(void);
s32 func_00C1B460(s32);

void func_00BDDF60(s32 arg0) {
    s32 value;
    s32 value2;

    value = 3;
    if (arg0 == 0) {
        if (func_00BF73D0() != 0) {
            value = 0x40013;
        } else {
            value = 0x40003;
        }
    } else {
        value2 = func_00C1B460(0) & 0xFFFF;
        if ((func_00B9FBB0() != 0) && (func_00221500(func_00BF4420(0) & 0xFFFF) == 0)) {
            if ((value2 & 0xFFFF) == 0xFFFF) {
                value = 0x01000023;
            } else {
                value = 0x23;
            }
        }
    }
    func_00BC3FB0(value);
}
