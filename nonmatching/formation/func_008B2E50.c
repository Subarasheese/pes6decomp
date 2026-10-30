/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B9450(u8);                              /* extern */
s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008EAFC0(void *, s32, s32 *);          /* extern */
M2C_UNK func_008EB290(void *, u8);                  /* extern */
M2C_UNK func_008EB2D0(void *, u8);                  /* extern */
M2C_UNK func_008EB310(void *, u8);                  /* extern */
M2C_UNK func_008EB3B0(void *, M2C_UNK, u8);         /* extern */

void func_008B2E50(void *arg0, void *arg1) {
    s32 sp80;
    s32 sp84;
    s32 sp88;
    s32 sp8C;
    u8 var_s1;
    u8 var_s2;
    u8 var_s3;
    u8 var_s6;
    void *temp_s0;

    temp_s0 = arg1 + (M2C_FIELD(arg1, u8 *, 0) * 0x52) + 0x97;
    if (func_008B9450(M2C_FIELD(arg0, u8 *, 0)) == 0) {
        var_s3 = M2C_FIELD(arg0, u8 *, 0x9D3);
        var_s6 = M2C_FIELD(arg0, u8 *, 0x9D4);
        var_s2 = M2C_FIELD(arg1, u8 *, 0x8F);
        var_s1 = M2C_FIELD(arg1, u8 *, 0x90);
    } else {
        var_s2 = 1;
        var_s3 = 2;
        var_s6 = 4;
        var_s1 = 1;
    }
    if (func_008BC3B0() != 0) {
        var_s2 = 0;
        var_s1 = 0;
    }
    func_008EB3B0(arg0 + 0x24C4, 0, M2C_FIELD(temp_s0, u8 *, 0x4D));
    func_008EB3B0(arg0 + 0x24C4, 1, M2C_FIELD(temp_s0, u8 *, 0x4F));
    sp80 = (s32) M2C_FIELD(arg1, u8 *, 0x88);
    sp84 = (s32) M2C_FIELD(arg1, u8 *, 0x89);
    sp88 = (s32) M2C_FIELD(arg1, u8 *, 0x8A);
    sp8C = (s32) M2C_FIELD(arg1, u8 *, 0x8B);
    func_008EAFC0(arg0 + 0x24C4, var_s3 & 0xFF, &sp80);
    func_008EB310(arg0 + 0x24C4, var_s6);
    func_008EB2D0(arg0 + 0x24C4, var_s2);
    func_008EB290(arg0 + 0x24C4, var_s1);
}
