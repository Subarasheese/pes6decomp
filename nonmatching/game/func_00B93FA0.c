/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u16 func_009B3220(s32, u16, M2C_UNK);               /* extern */
s32 func_009B33F0(void *, s32);                     /* extern */
s32 *func_00B2A420(u8);                             /* extern */

void func_00B93FA0(void *arg0) {
    s32 *temp_v0;
    u16 temp_a1;
    void *temp_a0;
    void *temp_v1;

    temp_v0 = func_00B2A420(func_00BF6270());
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
    temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    if (((((func_009B33F0(M2C_FIELD(arg0, void **, 0), *temp_v0) & 0xFFFF) - temp_a1) + 0x10000) & 0xFFFF) >= 0x8001) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = func_009B3220((temp_a1 + 0x400) & 0xFFFF, temp_a1, 0x2000);
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_v1, u16 *, 0x28) = (u16) M2C_FIELD(temp_v1, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = 0;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26) = func_009B3220((temp_a1 - 0x400) & 0xFFFF, temp_a1, 0x2000);
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0, u16 *, 0x28) = (u16) M2C_FIELD(temp_a0, u16 *, 0x26);
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), s8 *, 0x2D) = 1;
    }
    func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x52B, 0);
    func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x7E;
}
