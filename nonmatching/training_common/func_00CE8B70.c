/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002630F0(void);
extern u32 func_00CDCD70(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001DF7B0(s32);                         /* extern */
M2C_UNK func_00CED470(void *);                      /* extern */
extern void *D_003E7E28;

void func_00CE8B70(void) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_v1;
    s32 var_v1_2;
    u32 var_s1;
    void *temp_a0;
    void *temp_s2;

    var_s1 = 0;
    var_s0 = 0;
    temp_s2 = D_003E7E28 + 0x168;
    do {
        func_001DF7B0(M2C_FIELD((D_003E7E28 + var_s0), s32 *, 0x1A0));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 0xCU);
    func_00CED470(temp_s2);
    func_001C48E8(D_003E7E28 + 0x1A0, 0, 0x30);
    if ((func_002630F0() != 0) && (M2C_FIELD(func_00CDCD70(), s32 *, 0x1C) == 5)) {
        var_a2 = 0;
        var_a1 = M2C_FIELD(D_003E7E28, s32 *, 0x1D0);
        var_v1 = var_a1 >> 1;
        if (var_a1 < 0) {
            var_v1 = (s32) (var_a1 + 1) >> 1;
        }
        if (var_v1 > 0) {
            var_a3 = 0;
            do {
                temp_a0 = D_003E7E28 + var_a3;
                temp_a1 = M2C_FIELD(temp_a0, s32 *, 0xE8);
                var_a3 += 4;
                M2C_FIELD(temp_a0, s32 *, 0xE8) = (s32) M2C_FIELD((D_003E7E28 + ((var_a1 - var_a2) * 4)), s32 *, 0xE4);
                temp_v1 = (M2C_FIELD(D_003E7E28, s32 *, 0x1D0) - var_a2) * 4;
                var_a2 += 1;
                M2C_FIELD((D_003E7E28 + temp_v1), s32 *, 0xE4) = temp_a1;
                var_a1 = M2C_FIELD(D_003E7E28, s32 *, 0x1D0);
                var_v1_2 = var_a1 >> 1;
                if (var_a1 < 0) {
                    var_v1_2 = (s32) (var_a1 + 1) >> 1;
                }
            } while (var_a2 < var_v1_2);
        }
    }
}
