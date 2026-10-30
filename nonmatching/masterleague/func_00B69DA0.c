/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_0096DA00(s32);                         /* extern */
M2C_UNK func_00B6A260();                            /* extern */
M2C_UNK func_00B6CC70(u8, void *, u8, void *);      /* extern */
extern void *D_003E77B0;
extern s32 D_003EAEE8;

void func_00B69DA0(void) {
    s32 temp_v0;
    u8 temp_a0;
    u8 temp_a2;

    if (D_003EAEE8 != 0) {
        temp_v0 = 0 & 1;
        temp_a2 = M2C_FIELD(D_003E77B0, u8 *, 0x24);
        M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((temp_a2 & ~0x20) | (temp_v0 << 5));
        temp_a0 = M2C_FIELD(D_003E77B0, u8 *, 0x25);
        M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((temp_a0 & ~8) | (temp_v0 * 8));
        func_00B6CC70(temp_a0, D_003E77B0, temp_a2, D_003E77B0);
        func_00B6A260();
        if (D_003EAEE8 != 0) {
            func_0096DA00(D_003EAEE8);
            D_003EAEE8 = 0;
        }
        func_001D5C40(0x10323);
    }
}
