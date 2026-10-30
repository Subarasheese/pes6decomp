/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002DF640(void *, f32, f32);
extern void func_002DF6E0(void *, f32);
M2C_UNK func_002DF0A0(void *, void *);              /* extern */

void func_009720E0(void *arg0, s64 arg1) {
    s32 temp_s3;
    s64 temp_s0;
    void *temp_v0;

    if (arg0 != NULL) {
        temp_s0 = (s64) (arg1 << 0x30) >> 0x30;
        temp_s3 = temp_s0 * 0x10;
        func_002DF0A0(M2C_FIELD(arg0, void **, 0), arg0 + temp_s3 + 8);
        temp_v0 = temp_s3 + arg0;
        func_002DF640(M2C_FIELD(arg0, void **, 0), M2C_FIELD(temp_v0, f32 *, 8), M2C_FIELD(temp_v0, f32 *, 0xC));
        func_002DF6E0(M2C_FIELD(arg0, void **, 0), M2C_FIELD(((temp_s0 * 4) + arg0), f32 *, 0x78));
        M2C_FIELD(arg0, s16 *, 6) = (s16) arg1;
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) M2C_FIELD(temp_v0, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(temp_v0, f32 *, 0xC);
    }
}
