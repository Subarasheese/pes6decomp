/* compiler: mwcc-3.0.1b151 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

void func_009275C0(u8 *, s32, s32, s32);
void func_00C6A440(u8 *);
extern char Pes6MatchContext_FrameCounter[];
extern char D_00591F24[];
extern char D_005926F2[];

void func_00C68AF0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 a2;
    s32 hi;

    a2 = (*(u8 *)D_005926F2) * 0x14;
    hi = (s32) *arg0 % a2;
    if (hi == ((*(u32 *)Pes6MatchContext_FrameCounter) % (u32) a2)) {
        func_009275C0(arg0, hi, a2, arg3);
    }
    if ((*(u8 *)D_00591F24) != 8) {
        func_00C6A440(arg0);
    }
}
