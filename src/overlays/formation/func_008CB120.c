/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_008CBFF0(s8 *);
extern void func_008D0340(s8 *);
extern void func_008D2930(u8 *, u32);

void func_008CB120(s8 *arg0, u32 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, u32 *, 0x478) = arg1;
        func_008D2930((u8 *) (arg0 + 0x480), arg1);
        if (M2C_FIELD(arg0, u8 *, 0x489) == 4) {
            func_008D0340(arg0 + 0x480);
        }
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            func_008CBFF0(arg0);
        }
    }
}
