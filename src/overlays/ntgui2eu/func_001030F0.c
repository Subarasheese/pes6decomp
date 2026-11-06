/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00106F08(s32);
extern s32 D_006020A0;
extern s32 D_006020A4;

void func_001030F0(void) {
    if ((D_006020A4 + 4) < D_006020A0) {
        func_00106F08(0x8C008005);
        D_006020A4 = D_006020A0;
    }
}
