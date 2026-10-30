/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_009CE9C0(void *, void *);
M2C_UNK func_0099D2A0(s32, s64);                    /* extern */
extern void *D_00A7DDF8;

void func_009CF0B0(s8 arg0) {
    s32 temp_s0;
    s32 var_s4;
    s32 var_v0;
    s8 var_s5;
    u8 temp_v1_2;
    void *temp_s2;
    void *temp_v1;

    var_s5 = arg0;
    M2C_FIELD(D_00A7DDF8, s8 *, 1) = var_s5;
    if (M2C_FIELD(D_00A7DDF8, u8 *, 5) == 0) {
        var_s5 = 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DDF8, void **, 0x7F0), var_s5);
    func_001D7D60(M2C_FIELD(D_00A7DDF8, void **, 0x7F8), var_s5);
    if (M2C_FIELD(D_00A7DDF8, u8 *, 2) != 0) {
        func_001D7D60(M2C_FIELD(D_00A7DDF8, void **, 0x7F4), var_s5);
    } else {
        func_001D7D60(M2C_FIELD(D_00A7DDF8, void **, 0x7F4), 0);
    }
    var_s4 = 0;
loop_25:
    if (var_s4 < (s32) M2C_FIELD(D_00A7DDF8, u8 *, 7)) {
        temp_s0 = var_s4 << 7;
        temp_v1 = D_00A7DDF8 + temp_s0;
        temp_s2 = M2C_FIELD(temp_v1, void **, 0x84);
        if (temp_s2 != NULL) {
            temp_v1_2 = M2C_FIELD(temp_s2, u8 *, 0x31);
            if ((temp_v1_2 != 2) && (temp_v1_2 != 0)) {
                var_v0 = 1;
            } else {
                var_v0 = 0;
            }
            if (var_v0 == 0) {
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0x14), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0), var_s5);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 4), var_s5);
                if (M2C_FIELD((D_00A7DDF8 + temp_s0), s32 *, 8) != 0) {
                    func_001D7D60(M2C_FIELD(temp_s2, void **, 0xC), var_s5);
                } else {
                    func_001D7D60(M2C_FIELD(temp_s2, void **, 0xC), 0);
                }
                func_001D7D60(M2C_FIELD(temp_s2, void **, 8), var_s5);
                func_0099D2A0(M2C_FIELD(temp_s2, s32 *, 0x10), (s64) ((s64) var_s5 << 0x38) >> 0x38);
                if (var_s5 & 0xFF) {
                    func_009CE9C0(temp_s2, temp_v1 + 8);
                }
            } else {
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0x14), var_s5);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 4), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 0xC), 0);
                func_001D7D60(M2C_FIELD(temp_s2, void **, 8), 0);
                func_0099D2A0(M2C_FIELD(temp_s2, s32 *, 0x10), 0);
            }
        }
        var_s4 += 1;
        goto loop_25;
    }
}
