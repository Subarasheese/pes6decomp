/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001C48E8(f32 *, s32, s32);
s32 func_009ADD10(s32, s32);
void func_009AEC30(f32 *, s32, s32);
void func_009AEF80(f32 *, s32, s32);
void func_009AF560(f32 *, s32, s32);
void func_009AFB40(f32 *, s32, s32);

s32 func_009ADB60(f32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 v[3];
    s32 r = func_009ADD10(arg1, arg2) & 0xFF;
    func_001C48E8(arg0, 0, 0xC);
    if (r != 0) {
        if (r & 2) {
            func_009AFB40(v, arg1, arg3);
        } else if (r & 8) {
            func_009AF560(v, arg1, arg3);
        } else if (r & 0x10) {
            func_009AEF80(v, arg1, arg3);
        } else if (r & 4) {
            func_009AEC30(v, arg1, arg3);
        } else {
            return r;
        }
        arg0[0] = arg0[0] + v[0];
        arg0[1] = arg0[1] + v[1];
        arg0[2] = arg0[2] + v[2];
    }
    return r;
}
