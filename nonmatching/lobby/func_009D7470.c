/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001DF820(void *, s32);
extern char D_00A03108[];

void func_009D7470(void *arg0, void *arg1) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s64 var_s2;
    s8 *var_a1;
    s8 *var_a1_2;
    void *temp_s5;
    void *temp_v1;
    void *temp_v1_2;

    if (arg1 == NULL) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0), 1);
        func_001D7D60(M2C_FIELD(arg0, void **, 4), 0);
        func_001D7D60(M2C_FIELD(arg0, void **, 8), 0);
        func_001D7D60(M2C_FIELD(arg0, void **, 0xC), 0);
        var_s0 = 0;
        do {
            func_001D7D60(M2C_FIELD((arg0 + (var_s0 * 4)), void **, 0x10), 0);
            var_s0 += 1;
        } while (var_s0 < 8);
        return;
    }
    func_001D7D60(M2C_FIELD(arg0, void **, 0), 0);
    func_001D7D60(M2C_FIELD(arg0, void **, 4), 1);
    func_001D7D60(M2C_FIELD(arg0, void **, 8), M2C_FIELD(arg1, u8 *, 0x10) != 0);
    func_001D7D60(M2C_FIELD(arg0, void **, 0xC), M2C_FIELD(arg1, u8 *, 0xF) != 0);
    var_s1 = 0;
    var_s0_2 = 0;
    var_s2 = 0;
    do {
        var_s0_2 += M2C_FIELD((arg1 + var_s2), u8 *, 8);
loop_8:
        if (var_s1 < var_s0_2) {
            if (var_s1 < 8) {
                temp_s5 = M2C_FIELD((arg0 + (var_s1 * 4)), void **, 0x10);
                func_001D7D60(temp_s5, 1);
                func_001D7D80(temp_s5, (s16) ((s64) (var_s2 << 0x30) >> 0x30));
                var_s1 += 1;
                goto loop_8;
            }
        }
        var_s2 += 1;
    } while (var_s2 < 7);
loop_14:
    if (var_s1 < 8) {
        func_001D7D60(M2C_FIELD((arg0 + (var_s1 * 4)), void **, 0x10), 0);
        var_s1 += 1;
        goto loop_14;
    }
    temp_v1 = M2C_FIELD(arg0, void **, 0x30);
    var_a1 = M2C_FIELD(arg1, s8 **, 0);
    if (temp_v1 != NULL) {
        if ((var_a1 == NULL) || (*var_a1 == 0)) {
            var_a1 = ((void *)D_00A03108);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
    }
    temp_v1_2 = M2C_FIELD(arg0, void **, 0x34);
    var_a1_2 = M2C_FIELD(arg1, s8 **, 4);
    if (temp_v1_2 != NULL) {
        if ((var_a1_2 == NULL) || (*var_a1_2 == 0)) {
            var_a1_2 = ((void *)D_00A03108);
        }
        func_001DF820(M2C_FIELD(temp_v1_2, void **, 0xC), (s32) var_a1_2);
    }
}
