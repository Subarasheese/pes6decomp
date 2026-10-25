/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0053A890[];
s32 func_00309420(void);
void func_001C48E8(void *, s32, s32);

static inline s32 is_busy(void) {
    return func_00309420() != 0;
}

void func_0022F0A0(void) {
    if (is_busy() == 1) {
        return;
    }
    func_001C48E8(D_0053A890, 0, 0x252);
}
