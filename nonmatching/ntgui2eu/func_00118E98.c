/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001190E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00119120(M2C_UNK);                     /* extern */
M2C_UNK func_00119168(M2C_UNK);                     /* extern */
M2C_UNK func_00119174(M2C_UNK);                     /* extern */
M2C_UNK func_00119180(M2C_UNK);                     /* extern */
M2C_UNK func_001191C8(M2C_UNK);                     /* extern */
M2C_UNK func_001191E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0011923C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001192F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0011AAB4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0011AB90();                            /* extern */
M2C_UNK func_0011BD58(s32, s32, M2C_UNK, s32);      /* extern */
s32 func_0011DCF8(M2C_UNK);                         /* extern */
s32 func_0011DD08(u32, void *);                     /* extern */
s32 func_0011DDE8(s32, s32);                        /* extern */
void *func_0011DE28(s32);                           /* extern */
M2C_UNK func_0011E0C0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
extern char D_005F8E98[];
extern void *D_006024F0;
extern M2C_UNK func_001195E4;

s32 func_00118E98(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    u32 temp_s0_2;

    temp_s0 = func_0011DCF8(2);
    temp_s0_2 = temp_s0 - func_0011DCF8(1);
    M2C_FIELD(D_006024F0, s32 *, 4) = func_0011DD08((u32) (0x400 - (func_0011DCF8(1) - temp_s0_2)) / temp_s0_2, D_006024F0 + 0x160);
    func_0011BD58(M2C_FIELD(D_006024F0, s32 *, 4), arg1, 0x800, arg0);
    M2C_FIELD(D_006024F0, s32 *, 0) = arg2;
    if (func_0011DDE8(M2C_FIELD(D_006024F0, s32 *, 4), M2C_FIELD(D_006024F0, s32 *, 0)) == 0) {
        func_0011E0C0(M2C_FIELD(D_006024F0, s32 *, 4), &func_001195E4);
        M2C_FIELD(D_006024F0, s32 *, 0x60) = 0;
        M2C_FIELD(D_006024F0, s32 *, 0x64) = 0;
        M2C_FIELD(D_006024F0, s32 *, 0x68) = 0;
        M2C_FIELD(D_006024F0, s32 *, 0x6C) = 0;
        M2C_FIELD(D_006024F0, s32 *, 0xC) = (s32) M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, s32 *, 4)), s16 *, 0x54);
        M2C_FIELD(D_006024F0, s32 *, 0x10) = (s32) M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, s32 *, 4)), s16 *, 0x50);
        M2C_FIELD(D_006024F0, s32 *, 0x14) = (s32) (M2C_FIELD(D_006024F0, s32 *, 0x10) - M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, s32 *, 4)), s16 *, 0x52));
        M2C_FIELD(D_006024F0, s32 *, 0x18) = 1;
        func_0011AAB4(D_006024F0, 1);
        func_0011AB90();
        func_001190E8(0, 0);
        func_00119120(0);
        func_00119168(0);
        func_001191E0(0x80, 0x80, 0x80, 0x80);
        func_00119174(0);
        func_00119180(0x3F800000);
        func_001191C8(0x3F800000);
        func_001192F8(0xFF, 0, 0, 0x40);
        func_0011923C(0, 0, 0x40, 0x40);
        func_0011923C(0, 0, 0x40, 0x40);
        func_0011923C(0, 0, 0xFF, 0x40);
        func_0011923C(0, 0, 0xFF, 0x40);
        return 0;
    }
    func_0019DBD0(((void *)D_005F8E98));
    return 1;
}
