/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003B2470[];
void func_00C94A40(s32, s32, void (*)(void));
void func_002D5100(void);

void func_002D50C0(u32 day) {
    func_00C94A40(0, D_003B2470[(s8)(day % 7)], func_002D5100);
}
