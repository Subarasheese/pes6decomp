/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058D1E0[];
void func_001C48E8(void *, s32, s32);
s32 func_00154070(s32);
void func_0025E130(s32, void (*)(void));
void func_0025E470(void);

void func_0025E5E0(void) {
    func_001C48E8(D_0058D1E0, 0, 0x20);
    M2C_FIELD(D_0058D1E0, s32 *, 0) = func_00154070(0x400);
    func_0025E130(8, func_0025E470);
}
