/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0059274E[];
extern u8 D_003E9A1C;
s32 func_002727B0(void);
void func_00272800(s32);
void func_90A390(void);

static inline s32 is_mode(void) {
    return (u8)func_002727B0() == 0x17;
}

void func_00237BE0(void) {
    if (is_mode() == 0) {
        func_00272800(0x17);
        D_0059274E[0] = 4;
    }
    func_90A390();
    D_003E9A1C = 1;
}
