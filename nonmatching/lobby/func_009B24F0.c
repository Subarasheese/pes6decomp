/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_002DB2C0(void *, s16, s32, s32);
extern s32 func_002DB830(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
extern void *D_003EAD14;

void func_009B24F0(s32 arg0, s32 arg1) {
    s16 temp_v0;
    void *temp_s0;

    temp_s0 = D_003EAD14;
    temp_v0 = func_002DB830(M2C_FIELD(temp_s0, void **, 0xB0));
    if (temp_v0 != func_002DB2C0(M2C_FIELD(temp_s0, void **, 0xB0), temp_v0, arg0, arg1)) {
        func_0026E840(0x8400F802);
    }
}
