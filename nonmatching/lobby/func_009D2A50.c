/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7BE0(void *, void *);
extern void func_001D7CE0(void *, void *);
extern void func_002DF640(void *, f32, f32);
extern void *D_00A7DE00;

s32 func_009D2A50(s32 arg0, s8 arg1) {
    f32 sp90;
    f32 sp94;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s1;
    s32 var_s3;
    void *temp_a0;
    void *temp_s2;
    void *temp_v0;

    if (D_00A7DE00 == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 4) {
        return 0;
    }
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 < 2) {
        temp_s1 = arg1 * 8;
        var_s3 = 0;
        do {
            temp_a0 = (arg0 * 0x10) + temp_s1 + D_00A7DE00;
            temp_s2 = M2C_FIELD(((arg0 * 8) + D_00A7DE00 + (var_s3 * 4)), void **, 0x74);
            temp_f20 = M2C_FIELD(temp_a0, f32 *, 0x28);
            temp_f21 = M2C_FIELD(temp_a0, f32 *, 0x24);
            func_001D7BE0(temp_s2, &sp90);
            sp90 = temp_f21;
            sp94 = temp_f20;
            func_001D7CE0(temp_s2, &sp90);
            var_s3 += 1;
        } while (var_s3 < 2);
        if (arg0 == M2C_FIELD(D_00A7DE00, u8 *, 0)) {
            M2C_FIELD(D_00A7DE00, s8 *, 4) = arg1;
            temp_v0 = temp_s1 + D_00A7DE00;
            func_002DF640(M2C_FIELD(D_00A7DE00, void **, 0xC0), M2C_FIELD(temp_v0, f32 *, 0x14), M2C_FIELD(temp_v0, f32 *, 0x18));
            var_s1 = 0;
            do {
                temp_s0 = var_s1 * 4;
                func_001D7D60(M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xAC), 0);
                func_001D7D60(M2C_FIELD((D_00A7DE00 + temp_s0), void **, 0xB4), 0);
                var_s1 += 1;
            } while (var_s1 < 2);
            if ((M2C_FIELD(D_00A7DE00, u8 *, 0x65) == 0) && (M2C_FIELD(D_00A7DE00, u8 *, 1) != 0)) {
                temp_s0_2 = arg1 * 4;
                func_001D7D60(M2C_FIELD((temp_s0_2 + D_00A7DE00), void **, 0xAC), (s8) M2C_FIELD(D_00A7DE00, u8 *, 2));
                func_001D7D60(M2C_FIELD((temp_s0_2 + D_00A7DE00), void **, 0xB4), (s8) M2C_FIELD(D_00A7DE00, u8 *, 3));
            }
        }
        return 1;
    }
    return 0;
}
