/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0014AD10(int, int, int, void *);
M2C_UNK func_00151080(s32, s32);                    /* extern */
M2C_UNK func_001C4730(s32, s32, s64);               /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */

void func_001D9E40(void *arg0) {
    s64 sp78;
    s32 temp_s2;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    u16 temp_s1;
    void *temp_s0;
    void *temp_v1;

    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    temp_s0 = *M2C_FIELD(arg0, void ***, 8);
    temp_s1 = M2C_FIELD(temp_v1, u16 *, 2);
    sp78 = (s64) M2C_FIELD(temp_s0, u32 *, 0);
    func_001C4730(0x70000000, M2C_FIELD(temp_v1, s32 *, 4), (s64) ((s64) temp_s1 << 0x20) >> 0x20);
    var_s3 = ((s64) (((temp_s1 + 0xF) & ~0xF) << 0x20) >> 0x20) + 0x70000000;
    func_0014AD10(0x70000000, var_s3, (s32) temp_s1, &sp78);
    temp_s2 = var_s3 + ((s64) (((sp78 + 0xF) & ~0xF) << 0x20) >> 0x20);
    var_s1 = temp_s2;
    func_001C48E8(temp_s2, 0, M2C_FIELD(temp_s0, u8 *, 6) * M2C_FIELD(temp_s0, u8 *, 7));
    var_s4 = 0;
    if ((s32) M2C_FIELD(temp_s0, u8 *, 5) > 0) {
        do {
            func_001C4730(var_s1, var_s3, (s64) M2C_FIELD(temp_s0, u8 *, 4));
            var_s4 += 1;
            var_s3 += M2C_FIELD(temp_s0, u8 *, 4);
            var_s1 += M2C_FIELD(temp_s0, u8 *, 6);
        } while (var_s4 < (s32) M2C_FIELD(temp_s0, u8 *, 5));
    }
    func_00151080(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 8), temp_s2);
}
