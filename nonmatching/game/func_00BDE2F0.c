/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BDC580(void);
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B347F0(void **, void **, M2C_UNK, M2C_UNK, void *, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */

void func_00BDE2F0(void) {
    void **temp_s0;
    void **temp_s1;
    void *temp_a4;
    void *temp_a5;

    temp_s0 = func_00B2A420(0U);
    temp_s1 = func_00B2A420(func_00BDC580());
    func_00209A00(M2C_FIELD(*temp_s0, void **, 4), func_00BB1310(0x79) & 0xFFFF, 0);
    temp_a5 = *temp_s1;
    temp_a4 = *temp_s0;
    M2C_FIELD(M2C_FIELD(temp_a4, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(M2C_FIELD(temp_a5, void **, 4), u8 *, 0x2D);
    func_00B347F0(temp_s0, temp_s1, 0x87, 0, temp_a4, temp_a5, 0xC05374BC, 0x41289375);
    M2C_FIELD(*temp_s0, s8 *, 0x16) = 0x4E;
    M2C_FIELD(*temp_s0, s16 *, 0x18) = 4;
}
