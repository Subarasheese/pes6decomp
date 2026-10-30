/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern s32 func_0022C140(s32);
M2C_UNK func_001D5C40(s32);                         /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_009A3490();                            /* extern */
extern void *D_003E7B0C;
extern void *D_003EA994;

void func_009A0470(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    u32 temp_a0_3;
    void *temp_s0;

    temp_s0 = D_003EA994;
    if ((temp_s0 != NULL) && (func_0022C140((s32) M2C_FIELD(D_003E7B0C, u8 *, 0x28)) != 0)) {
        func_009A3490();
        func_001D5C40(0x1029E);
        temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x88);
        if (temp_a0 != -1) {
            func_001D5C40(temp_a0);
        }
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x8C);
        if (temp_a0_2 != -1) {
            func_001D5C40(temp_a0_2);
        }
        temp_a0_3 = M2C_FIELD(temp_s0, u32 *, 0x90);
        if (temp_a0_3 != 0x10B) {
            func_001E7140(func_0021E000(temp_a0_3));
        }
        if (D_003EA994 != NULL) {
            func_0096DA00(D_003EA994);
            D_003EA994 = NULL;
        }
    }
}
