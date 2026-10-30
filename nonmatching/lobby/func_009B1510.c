/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
s32 func_0093C2B0();                                /* extern */
s32 func_0093CCC0();                                /* extern */
s32 func_0093D4B0();                                /* extern */
s32 func_00969B30();                                /* extern */
extern void *D_00A7DC00;

void func_009B1510(s32 arg0, s64 arg1) {
    void *temp_s0;

    temp_s0 = D_00A7DC00;
    func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 4), (s64) (arg1 << 0x38) >> 0x38);
    if (func_0093C2B0() != 0) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x168), (s64) (arg1 << 0x38) >> 0x38);
    }
    if (func_00969B30() != 0) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x174), (s64) (arg1 << 0x38) >> 0x38);
    } else if ((arg0 != func_0093CCC0()) && (func_0093D4B0() != 0)) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x174), (s64) (arg1 << 0x38) >> 0x38);
    } else {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x174), 0);
    }
    if ((func_0093D4B0() == 1) && (arg0 == func_0093CCC0())) {
        func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0x180), arg1 & 0xFF);
        return;
    }
    func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0x180), 0);
}
