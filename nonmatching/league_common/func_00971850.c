/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DF6E0(void *, f32);
M2C_UNK func_002DF0A0(void *, void *);              /* extern */

void func_00971850(void *arg0, s64 arg1) {
    s64 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = (s64) (arg1 << 0x30) >> 0x30;
        func_002DF0A0(M2C_FIELD(arg0, void **, 0), arg0 + (temp_s0 * 0x10) + 8);
        func_002DF6E0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(((temp_s0 * 4) + arg0), f32 *, 0x28));
        M2C_FIELD(arg0, s16 *, 6) = (s16) arg1;
    }
}
