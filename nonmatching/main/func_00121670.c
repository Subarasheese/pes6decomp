/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00102228(u8 *, s32, u8 *);             /* extern */
s32 func_001024C8(u8 *, M2C_UNK, M2C_UNK);          /* extern */
extern u8 *D_003E978C;

void func_00121670(s32 arg0, s32 arg1) {
    do {

    } while (func_001024C8(D_003E978C, 1, 4) != 0);
    *D_003E978C = (*D_003E978C & ~0x40) | ((arg1 & 1) << 6);
    func_00102228(D_003E978C, arg0, D_003E978C);
}
