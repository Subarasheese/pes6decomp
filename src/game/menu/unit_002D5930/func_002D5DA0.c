/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002D33C0(M2C_UNK);                         /* extern */
M2C_UNK func_002D33D0(M2C_UNK, s32);                /* extern */
extern char D_00591BE4[];
extern char Pes6Enter_ShotMask[];

void func_002D5DA0(void) {
    if (((*(s32 *)Pes6Enter_ShotMask) == 0) && (func_002D33C0(1) != 0)) {
        func_002D33D0(1, 0x2710 / (s32) (*(u8 *)D_00591BE4));
    }
}
