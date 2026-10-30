/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B250C0(s32);
extern u16 func_00B20EE0(void);
M2C_UNK func_00B06130();                            /* extern */
s32 func_00B6DA70();                                /* extern */
extern void *D_003EAEF4;

s32 func_00B6DBE0(void) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_003EAEF4;
    if (temp_s0 == NULL) {
        return 0;
    }
    temp_v0 = func_00B6DA70();
    if ((temp_v0 == 1) && (func_00B250C0(func_00B20EE0() & 0xFFFF) == 0)) {
        func_00B06130();
        M2C_FIELD(temp_s0, s32 *, 0x64) = 0;
        return 0;
    }
    return temp_v0;
}
