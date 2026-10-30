/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00120D90(int, int, int, int);
extern M2C_UNK func_00CCE080;

void func_00CCE360(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_00120D90((s32) &func_00CCE080, 0xD, arg2, arg3);
}
