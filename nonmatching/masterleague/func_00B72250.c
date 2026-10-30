/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001EDAE0(void *, s8);
extern u32 func_00B77020(void);
M2C_UNK func_00972D60(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00972E90(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
extern char D_00B86360[];

void func_00B72250(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        temp_v1 = arg0 & 0xFF;
        temp_v0_2 = temp_v1 + temp_v0;
        if ((u32) (M2C_FIELD(temp_v0_2, u8 *, 0x3D3) - 0xC) >= 2U) {
            temp_s0 = temp_v1 * 4;
            func_001EDAE0(M2C_FIELD(M2C_FIELD((temp_s0 + temp_v0), void **, 0x408), void **, 4), 1);
            func_001EDAE0(M2C_FIELD(M2C_FIELD((temp_s0 + temp_v0), void **, 0x488), void **, 4), 1);
            func_009737C0(M2C_FIELD((temp_s0 + temp_v0), s32 *, 0x528), 1);
            func_00972D60(M2C_FIELD((temp_s0 + temp_v0), s32 *, 0x634), 0, 0);
            func_001D7D80(M2C_FIELD((temp_s0 + temp_v0), void **, 4), 0);
        } else {
            temp_s0_2 = temp_v1 * 4;
            func_001EDAE0(M2C_FIELD(M2C_FIELD((temp_s0_2 + temp_v0), void **, 0x408), void **, 4), 0);
            func_001EDAE0(M2C_FIELD(M2C_FIELD((temp_s0_2 + temp_v0), void **, 0x488), void **, 4), 0);
            func_009737C0(M2C_FIELD((temp_s0_2 + temp_v0), s32 *, 0x528), 0);
            temp_v0_3 = temp_s0_2 + temp_v0;
            func_00972D60(M2C_FIELD(temp_v0_3, s32 *, 0x634), 0, 1);
            func_00972E90(M2C_FIELD(temp_v0_3, s32 *, 0x634), 0, ((void *)D_00B86360) + (M2C_FIELD(temp_v0_2, u8 *, 0x3D3) * 0x10));
            func_00972E90(M2C_FIELD((temp_s0_2 + temp_v0), s32 *, 0x5A8), 0, ((void *)D_00B86360));
            func_001D7D80(M2C_FIELD((temp_s0_2 + temp_v0), void **, 4), 1);
        }
    }
}
