/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009F4DC0(s32, f32);                        /* extern */
extern s32 D_003E74CC;

s32 func_00A9DFF0(void *arg0, s32 arg1) {
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    return (s32) ((arg1 & 0xFFFF) * 0xB6) / func_009F4DC0(M2C_FIELD(((M2C_FIELD(temp_a0, u16 *, 0x30) * 4) + D_003E74CC), s32 *, 0x2FD8), M2C_FIELD(temp_a0, f32 *, 0x28));
}
