/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3BE0(void *, s32);                 /* extern */

void func_00BD4040(void *arg0, s32 arg1) {
    func_001C48E8(M2C_FIELD(arg0, void **, 4), 0, 0x34);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x3C) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xC) = 7;
    func_00BD3BE0(arg0, arg1);
}
