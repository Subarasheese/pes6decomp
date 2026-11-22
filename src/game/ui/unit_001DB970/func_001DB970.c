/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001DB9C0(void *);
s32 func_001EC450(s32, f32);

void func_001DB970(void *arg0) {
    if (!(M2C_FIELD(arg0, u8 *, 0x2D) != 0)) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    func_001DB9C0(arg0);
    func_001EC450(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x18));
}
