/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
extern void func_00C57220(s32, s32, void *);
extern void func_00C578F0(s32, void *, void *, s32, f32);

void func_00C57BC0(s32 arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 temp_a0;

    if ((arg0 != 0) && (arg1 != -1) && (arg2 != (void *)-1)) {
        temp_a0 = func_00C132C0(arg2) & 0xFF;
        if (temp_a0 == 5) {
            func_00C578F0(arg0, arg2, arg2, arg3, 1.0f);
        } else if (temp_a0 == 4) {
            func_00C578F0(arg0, arg2, arg2, arg3, 1.0f);
        } else if (temp_a0 == 3) {
            func_00C57220(arg0, arg1, arg2);
        }
    }
}
