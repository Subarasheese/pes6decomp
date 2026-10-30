/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002673B0(void *);                      /* extern */
M2C_UNK func_002676F0(s32, void *, void **, s32);   /* extern */
M2C_UNK func_00267A50(s32, void *, void **, s32);   /* extern */
M2C_UNK func_00267CC0(s32, void *, void **);        /* extern */
M2C_UNK func_00268060(u16);                         /* extern */

void func_002674F0(void **arg0, s32 arg1, void *arg2, s32 arg3) {
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s2;
    u8 temp_v1_2;
    u8 temp_v1_5;
    void **var_s1;
    void **var_s1_2;
    void **var_s2_2;
    void **var_s2_3;
    void *temp_v1;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_s0;
    void *var_s1_3;
    void *var_s6;

    func_002673B0(arg2);
    var_s2 = 0;
    var_s1 = arg0;
    var_s0 = arg2;
    do {
        if ((arg3 == 0) && (temp_v1 = *var_s1, (temp_v1 != NULL)) && (temp_v1_2 = M2C_FIELD(temp_v1, u8 *, 2), (temp_v1_2 == 0))) {
            if (temp_v1_2 == 0) {
                M2C_FIELD(var_s0, s32 *, 0x30) = 0;
                M2C_FIELD(var_s0, s32 *, 0) = 0;
                M2C_FIELD(var_s0, s32 *, 0xD4) = 0;
            }
        } else {
            func_00267CC0(var_s2, arg2, arg0);
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 2);
    var_s0_2 = 0;
    var_s2_2 = arg0;
    var_s1_2 = arg0;
    var_s6 = arg2;
    do {
        if ((arg3 == 0) && (temp_v1_3 = M2C_FIELD(var_s2_2, void **, 8), (temp_v1_3 != NULL)) && (M2C_FIELD(temp_v1_3, u8 *, 2) == 0)) {
            if (M2C_FIELD(M2C_FIELD(var_s1_2, void **, 8), u8 *, 2) == 0) {
                M2C_FIELD((arg2 + (var_s0_2 * 4)), s32 *, 0x30) = 0;
                M2C_FIELD(var_s6, s32 *, 8) = 0;
                M2C_FIELD((arg2 + ((var_s0_2 + 2) * 4)), s32 *, 0xD4) = 0;
            }
        } else {
            func_00267A50(var_s0_2, arg2, arg0, arg1);
        }
        var_s0_2 += 1;
        var_s2_2 += 4;
        var_s1_2 += 4;
        var_s6 += 4;
    } while (var_s0_2 < 4);
    var_s0_3 = 0;
    var_s2_3 = arg0;
    var_s1_3 = arg2;
    do {
        if ((arg3 == 0) && (temp_v1_4 = M2C_FIELD(var_s2_3, void **, 0x18), (temp_v1_4 != NULL)) && (temp_v1_5 = M2C_FIELD(temp_v1_4, u8 *, 2), (temp_v1_5 == 0))) {
            if (temp_v1_5 == 0) {
                M2C_FIELD(var_s1_3, s32 *, 0x50) = 0;
                M2C_FIELD(var_s1_3, s32 *, 0x18) = 0;
                M2C_FIELD(var_s1_3, s32 *, 0xEC) = 0;
            }
        } else {
            func_002676F0(var_s0_3, arg2, arg0, arg1);
        }
        var_s0_3 += 1;
        var_s2_3 += 4;
        var_s1_3 += 4;
    } while (var_s0_3 < 4);
    M2C_FIELD(arg2, s32 *, 0x1C4) = arg1;
    M2C_FIELD(arg2, s32 *, 0x1C8) = 1;
    if (arg0 != NULL) {
        func_00268060(M2C_FIELD(arg0, u16 *, 0x4C));
    }
}
