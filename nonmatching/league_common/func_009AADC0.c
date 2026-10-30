/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009732F0(s32, s32);
extern void * func_001D5A10(s32);
extern u32 func_009AB630(void);
M2C_UNK func_009A9900(u8, u8);                      /* extern */
M2C_UNK func_009A9B50(s32, s16, s64);               /* extern */
M2C_UNK func_009A9EA0(u8, u8);                      /* extern */
M2C_UNK func_009AA320(u8);                          /* extern */
M2C_UNK func_009AA630();                            /* extern */

void func_009AADC0(void) {
    s16 temp_a1;
    u32 temp_v0;
    u8 temp_a0;
    u8 temp_s1;
    u8 temp_s2;
    void *temp_v0_2;

    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001D5A10(0x102AC);
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        if (temp_v0_2 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 4) = func_009732F0(0x20, 5);
            M2C_FIELD(temp_v0, s32 *, 8) = func_009732F0(0x17, 1);
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_009732F0(0x21, 1);
            func_009AA630();
            temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
            temp_s2 = M2C_FIELD((temp_s1 + temp_v0), u8 *, 0x7B5);
            func_009AA320(temp_s1);
            func_009A9EA0(temp_s1, temp_s2);
            temp_a1 = M2C_FIELD(temp_v0, s16 *, 0x846);
            func_009A9B50(-(s32) M2C_FIELD((M2C_FIELD(temp_v0, u8 *, 0x7B4) + temp_v0), u8 *, 0x7FD), temp_a1, (s64) ((s64) -temp_a1 << 0x30) >> 0x30);
            temp_a0 = M2C_FIELD(temp_v0, u8 *, 0x7B4);
            func_009A9900(temp_a0, M2C_FIELD((temp_a0 + temp_v0), u8 *, 0x7B5));
        }
    }
}
