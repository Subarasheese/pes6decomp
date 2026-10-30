/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern void * func_0022C1E0(void);
extern u8 func_0022BC60(s32);
extern s32 func_0022BAC0(s32);
s8 func_00225940(u8);                               /* extern */
void *func_0022BFF0(u8, s32, s32 *);                /* extern */
M2C_UNK func_00B13B50(void *, s32, M2C_UNK, s32);   /* extern */
extern void *D_003EAD70;

void func_00B137D0(void) {
    s32 *var_a1;
    s32 *var_a2;
    s32 temp_a3;
    s32 temp_v0_2;
    s32 var_a0;
    u8 temp_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = func_0022C1E0();
    temp_s0 = D_003EAD70;
    if (temp_s0 != NULL) {
        temp_s1 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v0_2 = func_0022C140((s32) temp_s1);
        var_a0 = 0x2F;
        temp_v1 = (M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0;
        var_a2 = temp_v1 - 0xB8;
        var_a1 = temp_v1 + 4;
        do {
            var_a0 -= 1;
            *var_a1 = *var_a2;
            var_a2 += 4;
            var_a1 += 4;
        } while (var_a0 > 0);
        temp_v0_3 = func_0022BFF0(temp_s1, (M2C_FIELD(temp_v0_2, u8 *, 9) - 1) & 0xFF, var_a2);
        temp_a0 = (M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0;
        M2C_FIELD(temp_a0, u8 *, -8) = (u8) M2C_FIELD(temp_a0, u8 *, 0xB4);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), u8 *, -0x68) = (u8) M2C_FIELD(temp_v0_3, u8 *, 5);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), u8 *, -0x67) = (u8) M2C_FIELD(temp_v0_3, u8 *, 6);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0x38) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 5)));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0x37) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 6)));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s16 *, -0x58) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 5));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s16 *, -0x56) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 6));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0xB8) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0xE) + (M2C_FIELD(temp_v0_3, u8 *, 0xD) + (M2C_FIELD(temp_v0_3, u8 *, 0xB) + M2C_FIELD(temp_v0_3, u8 *, 0xC))));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0xB7) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0xD) + M2C_FIELD(temp_v0_3, u8 *, 0xE));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), u8 *, -0xB6) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0xF);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0x88) = 0;
        temp_v1_2 = (M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0;
        M2C_FIELD(temp_v1_2, u8 *, -0x78) = (u8) M2C_FIELD(temp_v1_2, u8 *, -0xB8);
        temp_a3 = M2C_FIELD(temp_v0_3, u8 *, 0x10) + M2C_FIELD(temp_v0_3, u8 *, 0x11);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0xB5) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0x13) + (M2C_FIELD(temp_v0_3, u8 *, 0x12) + temp_a3));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0xB4) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0x12) + M2C_FIELD(temp_v0_3, u8 *, 0x13));
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), u8 *, -0xB3) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x14);
        M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0), s8 *, -0x87) = 0;
        temp_v1_3 = (M2C_FIELD(temp_s0, u8 *, 0x75D) * 0xBC) + temp_s0;
        M2C_FIELD(temp_v1_3, u8 *, -0x77) = (u8) M2C_FIELD(temp_v1_3, u8 *, -0xB5);
        func_00B13B50(temp_v0_3, (M2C_FIELD(temp_s0, u8 *, 0x75D) - 1) & 0xFF, 0, temp_a3);
        M2C_FIELD(temp_s0, u8 *, 0x75D) = (u8) (M2C_FIELD(temp_s0, u8 *, 0x75D) + 1);
    }
}
