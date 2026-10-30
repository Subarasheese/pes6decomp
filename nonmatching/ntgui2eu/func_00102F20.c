/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00106F08(M2C_UNK);                     /* extern */
extern s32 D_006020A0;
extern s32 D_006020A4;

void func_00102F20(void) {
    if ((D_006020A4 + 4) < D_006020A0) {
        func_00106F08(0x8400F803);
        D_006020A4 = D_006020A0;
    }
}
