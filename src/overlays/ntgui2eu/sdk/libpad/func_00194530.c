/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00195838(s32);
s32 func_0019E0A8(s32);
s32 func_0019EE30(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);
extern char D_005CA9E0[];
extern char D_011FD4C0[];
extern char D_011FD700[];

s32 func_00194530(void) {
    s32 value;

    func_00195838(0);
    M2C_FIELD(((void *)D_011FD700), s32 *, 0) = 0xF;
    value = 0;
    if (!(func_0019EE30(((void *)D_011FD4C0), 1, 0, ((void *)D_011FD700), 0x80,
                        ((void *)D_011FD700), 0x80, 0, 0) >= 0)) {
        return value;
    }
    func_0019E0A8(0x80000019);
    value = M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
    if (M2C_FIELD(((void *)D_011FD700), s32 *, 0xC) == 1) {
        (*(s32 *)D_005CA9E0) = 0;
        value = M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
    }
    return value;
}
