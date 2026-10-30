/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B8F930(s32);                         /* extern */
M2C_UNK func_00B8FCD0(s32);                         /* extern */
M2C_UNK func_00B8FFA0(s32);                         /* extern */
M2C_UNK func_00B90260(s32);                         /* extern */
M2C_UNK func_00B90320(s32);                         /* extern */
M2C_UNK func_00B906B0(s32);                         /* extern */
M2C_UNK func_00BC7280(s32);                         /* extern */
M2C_UNK func_00BE8AB0(s32);                         /* extern */

void func_00B93260(void *arg0) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s0_5;
    s32 var_s0_6;
    s32 var_s0_7;
    s32 var_s0_8;
    s32 var_s0_9;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s2_7;
    s32 var_s2_8;
    s32 var_s2_9;

    var_s0 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x38) > 0) {
        var_s2 = 0;
        do {
            func_00BC7280(M2C_FIELD(arg0, s32 *, 0x24) + var_s2);
            var_s0 += 1;
            var_s2 += 4;
        } while (var_s0 < (s32) M2C_FIELD(arg0, u16 *, 0x38));
    }
    var_s0_2 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x36) > 0) {
        var_s2_2 = 0;
        do {
            func_00B906B0(M2C_FIELD(arg0, s32 *, 0x20) + var_s2_2);
            var_s0_2 += 1;
            var_s2_2 += 4;
        } while (var_s0_2 < (s32) M2C_FIELD(arg0, u16 *, 0x36));
    }
    var_s0_3 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x34) > 0) {
        var_s2_3 = 0;
        do {
            func_00BE8AB0(M2C_FIELD(arg0, s32 *, 0x1C) + var_s2_3);
            var_s0_3 += 1;
            var_s2_3 += 4;
        } while (var_s0_3 < (s32) M2C_FIELD(arg0, u16 *, 0x34));
    }
    var_s0_4 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x32) > 0) {
        var_s2_4 = 0;
        do {
            func_00B8FFA0(M2C_FIELD(arg0, s32 *, 0x18) + var_s2_4);
            var_s0_4 += 1;
            var_s2_4 += 4;
        } while (var_s0_4 < (s32) M2C_FIELD(arg0, u16 *, 0x32));
    }
    var_s0_5 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x30) > 0) {
        var_s2_5 = 0;
        do {
            func_00B90320(M2C_FIELD(arg0, s32 *, 0x14) + var_s2_5);
            var_s0_5 += 1;
            var_s2_5 += 4;
        } while (var_s0_5 < (s32) M2C_FIELD(arg0, u16 *, 0x30));
    }
    var_s0_6 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x2E) > 0) {
        var_s2_6 = 0;
        do {
            func_00B90260(M2C_FIELD(arg0, s32 *, 0x10) + var_s2_6);
            var_s0_6 += 1;
            var_s2_6 += 4;
        } while (var_s0_6 < (s32) M2C_FIELD(arg0, u16 *, 0x2E));
    }
    var_s0_7 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x2C) > 0) {
        var_s2_7 = 0;
        do {
            func_00B8F930(M2C_FIELD(arg0, s32 *, 0xC) + var_s2_7);
            var_s0_7 += 1;
            var_s2_7 += 4;
        } while (var_s0_7 < (s32) M2C_FIELD(arg0, u16 *, 0x2C));
    }
    var_s0_8 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x2A) > 0) {
        var_s2_8 = 0;
        do {
            func_00B8FCD0(M2C_FIELD(arg0, s32 *, 8) + var_s2_8);
            var_s0_8 += 1;
            var_s2_8 += 4;
        } while (var_s0_8 < (s32) M2C_FIELD(arg0, u16 *, 0x2A));
    }
    var_s0_9 = 0;
    if ((s32) M2C_FIELD(arg0, u16 *, 0x28) > 0) {
        var_s2_9 = 0;
        do {
            func_00B8FFA0(M2C_FIELD(arg0, s32 *, 4) + var_s2_9);
            var_s0_9 += 1;
            var_s2_9 += 4;
        } while (var_s0_9 < (s32) M2C_FIELD(arg0, u16 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
}
