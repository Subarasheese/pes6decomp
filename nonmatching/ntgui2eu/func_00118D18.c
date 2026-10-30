/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0011DE28(void *);
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
M2C_UNK func_0011E0C0(void *, M2C_UNK *);           /* extern */
extern void *D_006024F0;
extern M2C_UNK func_001195E4;

s32 func_00118D18(void *arg0, s32 arg1) {
    M2C_FIELD(D_006024F0, void **, 4) = arg0;
    M2C_FIELD(D_006024F0, s32 *, 0) = arg1;
    func_0011E0C0(M2C_FIELD(D_006024F0, void **, 4), &func_001195E4);
    M2C_FIELD(D_006024F0, s32 *, 0x60) = 0;
    M2C_FIELD(D_006024F0, s32 *, 0x64) = 0;
    M2C_FIELD(D_006024F0, s32 *, 0x68) = 0;
    M2C_FIELD(D_006024F0, s32 *, 0x6C) = 0;
    M2C_FIELD(D_006024F0, s32 *, 0) = (s32) M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, void **, 4)), s16 *, 0x54);
    M2C_FIELD(D_006024F0, s32 *, 0) = (s32) M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, void **, 4)), s16 *, 0x50);
    M2C_FIELD(D_006024F0, s32 *, 0x14) = (s32) (M2C_FIELD(D_006024F0, s32 *, 0x10) - M2C_FIELD(func_0011DE28(M2C_FIELD(D_006024F0, void **, 4)), s16 *, 0x52));
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
