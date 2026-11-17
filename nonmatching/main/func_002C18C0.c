/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00C13080(s32, s32, s32);
extern void *func_00C13280(s32, s32);
extern s32 func_00C132C0(s32);
extern s32 func_00C136E0(s32, s32);
extern s32 func_00C13740(s32, s32);
extern s32 func_00C13840(void);
extern char D_003DA450[];
extern u8 D_003E9D51;
extern u8 D_003E9D52;
extern u8 D_003E9D53;

void func_002C18C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 s0;
    u8 v1;

    v1 = 0;
    D_003E9D51 = arg2;
    if (arg0 != -1) {
        if (arg3 == 0x16 || arg3 == 0x15) {
            s0 = arg0;
            if ((func_00C132C0(arg0) & 0xFF) != 1) {
                s0 = func_00C136E0(arg0, 1);
                if (s0 == -1) {
                    s0 = func_00C13840();
                    if ((func_00C132C0(s0) & 0xFF) == 1) {
                        s0 = -1;
                    } else {
                        s0 = func_00C13740(s0, 1);
                    }
                }
            }
            if (s0 == -1) {
                v1 = 0;
            } else {
                v1 = M2C_FIELD(func_00C13280(s0, 1), u8 *, 1);
            }
        }
    }
    D_003E9D52 = v1;
    D_003E9D53 = 0xFF;
    func_00C13080(arg0, arg1, *(s32 *)(D_003DA450 + arg3 * 4));
}
