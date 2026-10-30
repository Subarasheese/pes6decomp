/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D7BC0(void *);
extern void func_001D78B0(void *, u8);
extern u32 func_00B3D3D0(void);
extern void func_001D7960(void *, s8);
extern s32 D_003EAE60;

void func_00B39030(void) {
    s32 temp_a0;
    s32 temp_hi;
    s32 var_s1;
    u32 temp_v0;

    temp_v0 = func_00B3D3D0();
    if ((temp_v0 != 0) && (((s64) (func_001D7BC0(M2C_FIELD(temp_v0, void **, 0x10)) << 0x30) >> 0x30) != 0)) {
        temp_hi = (s32) D_003EAE60 % 78;
        if (temp_hi >= 0x27) {
            temp_a0 = temp_hi - 0x27;
            var_s1 = 0xFF - (((temp_a0 * 0xFF) / 39) + ((u32) (temp_a0 * 0xFF) >> 0x1F));
        } else {
            var_s1 = ((temp_hi * 0xFF) / 39) + ((u32) (temp_hi * 0xFF) >> 0x1F);
        }
        D_003EAE60 += 1;
        func_001D7960(M2C_FIELD(temp_v0, void **, 0x10), 1);
        func_001D78B0(M2C_FIELD(temp_v0, void **, 0x10), var_s1 & 0xFF);
    }
}
