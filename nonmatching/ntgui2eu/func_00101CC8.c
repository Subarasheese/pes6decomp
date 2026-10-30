/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00101DA8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00101F28();                                /* extern */
M2C_UNK func_00101F90(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001020B8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00102390();                            /* extern */
M2C_UNK func_00193008(s32, s32);                    /* extern */
M2C_UNK func_00194160(s32, M2C_UNK, M2C_UNK, s16);  /* extern */
M2C_UNK func_0019B160(s32);                         /* extern */
extern s32 D_0060207C;
extern s32 D_00602080;
extern s32 D_0060208C;

void func_00101CC8(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a0;

loop_3:
    func_0019B160(D_00602080);
    temp_s1 = M2C_FIELD((void *)0x011AAEA0, s32 *, 4) & 1;
    M2C_FIELD((void *)0x011AAEA0, s32 *, 0) = (s32) (func_00101F28() == 0);
    if (temp_s1 != 0) {
        var_a0 = D_0060208C + 0x150;
    } else {
        var_a0 = D_0060208C + 0x60;
    }
    func_00194160(var_a0, 0x800, 0x800, (s16) M2C_FIELD((void *)0x011AAEA0, s32 *, 0));
    func_00193008(D_0060208C, temp_s1);
    temp_v0 = M2C_FIELD((void *)0x011AAEA0, s32 *, 4) + 1;
    M2C_FIELD((void *)0x011AAEA0, s32 *, 4) = temp_v0;
    if (D_0060207C == 0) {
        func_001020B8(0x32, 0x24E, 0x19, 0xE0, 0xFF300000);
        func_00102390();
        func_00101DA8(0, 0);
        goto loop_3;
    }
    func_00101F90(temp_v0 & 1, 0x24E, 0x19, 0xE0, 0xFF300000);
}
