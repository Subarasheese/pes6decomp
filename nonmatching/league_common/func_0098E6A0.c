/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_0094CE70(void *, void *, void *, void *, void *); /* extern */
M2C_UNK func_0094CF50();                            /* extern */
M2C_UNK func_0094E500();                            /* extern */
M2C_UNK func_0094EBF0();                            /* extern */
M2C_UNK func_00976620();                            /* extern */
M2C_UNK func_0097EC20();                            /* extern */
M2C_UNK func_009857F0(void *);                      /* extern */
M2C_UNK func_0098F4C0();                            /* extern */
M2C_UNK func_0098F7E0();                            /* extern */
M2C_UNK func_0098FB20();                            /* extern */
M2C_UNK func_00AFC460();                            /* extern */
M2C_UNK func_00B54C80();                            /* extern */
extern void *D_003E77B0;

void func_0098E6A0(void) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1;

    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x4000);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x2000);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x100);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & 0xFFF7FFFF);
    M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & 0xFFEFFFFF);
    func_0094CE70(D_003E77B0, D_003E77B0, D_003E77B0, D_003E77B0, D_003E77B0);
    func_0094CF50();
    func_0094E500();
    func_0094EBF0();
    if (func_00230410() == 1) {
        if (func_00210DF0() == 2) {
            func_00AFC460();
            func_00976620();
            func_00B54C80();
            temp_a3 = 0 & 1;
            temp_a2 = temp_a3 << 5;
            temp_a0 = temp_a3 << 6;
            M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x25) & ~0x20) | temp_a2);
            M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x25) & ~0x40) | temp_a0);
            M2C_FIELD(D_003E77B0, u8 *, 0x26) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x26) & ~4) | (temp_a3 * 4));
            M2C_FIELD(D_003E77B0, u8 *, 0x26) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x26) & ~8) | (temp_a3 * 8));
            M2C_FIELD(D_003E77B0, u8 *, 0x26) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x26) & ~0x10) | (temp_a3 * 0x10));
            M2C_FIELD(D_003E77B0, u8 *, 0x26) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x26) & ~0x20) | temp_a2);
            M2C_FIELD(D_003E77B0, u8 *, 0x26) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x26) & ~0x40) | temp_a0);
        }
    } else {
        func_0097EC20();
        func_0098FB20();
        func_0098F7E0();
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x80);
        func_0098F4C0();
        M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & ~0x80);
        func_009857F0(D_003E77B0);
        func_00976620();
    }
    temp_v1 = 0 & 1;
    M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x24) & ~4) | (temp_v1 * 4));
    M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x24) & ~8) | (temp_v1 * 8));
}
