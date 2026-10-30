/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D76B0(void *, u32);
extern u32 func_00B3D3D0(void);
s32 func_001D7640(void *);                          /* extern */
extern s8 D_003E7D08;

void func_00B38F70(void) {
    s32 temp_a0_2;
    s32 var_a1;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B3D3D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, void **, 0xC);
        if (temp_a0 != NULL) {
            temp_a0_2 = func_001D7640(temp_a0) & 0xFF;
            if ((temp_a0_2 == 0xFF) || (temp_a0_2 < 0x80)) {
                D_003E7D08 = -D_003E7D08;
            }
            if (D_003E7D08 != 1) {
                var_a1 = (temp_a0_2 - 5) & 0xFF;
                if (var_a1 < 0x7F) {
                    var_a1 = 0x7F;
                }
            } else if ((0xFF - temp_a0_2) >= 6) {
                var_a1 = (temp_a0_2 + 5) & 0xFF;
            } else {
                var_a1 = 0xFF & 0xFF;
            }
            func_001D76B0(M2C_FIELD(temp_v0, void **, 0xC), (u32) var_a1);
        }
    }
}
