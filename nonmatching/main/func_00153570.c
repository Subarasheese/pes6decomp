/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_001404F0();                                /* extern */
s64 func_00140500();                                /* extern */
void *func_00153FF0(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK func_00153610;

void *func_00153570(void) {
    s64 temp_s0;
    void *temp_v0;

    temp_v0 = func_00153FF0(0x80, 0x80);
    func_001C48E8(temp_v0, 0, 0x80);
    temp_s0 = ((s64) ((((s64) (func_00140500() << 0x30) >> 0x30) - 1) << 0x20) >> 0x20) << 0x10;
    M2C_FIELD(temp_v0, s64 *, 0x58) = (s64) (temp_s0 | (((s64) ((((s64) (func_001404F0() << 0x30) >> 0x30) - 1) << 0x20) >> 0x20) << 0x30));
    M2C_FIELD(temp_v0, M2C_UNK **, 0x50) = &func_00153610;
    return temp_v0;
}
