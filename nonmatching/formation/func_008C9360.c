/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008D2940(void *, u32);
M2C_UNK func_008D1E30(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_008D2130(void *, M2C_UNK);             /* extern */
M2C_UNK func_008D2500(void *);                      /* extern */

void func_008C9360(void *arg0, void *arg1) {
    s32 var_a0;
    s32 var_a2;
    u32 temp_hi;
    u8 temp_a4;
    u8 temp_a4_2;
    void *temp_a3;
    void *temp_a4_3;
    void *temp_a5;
    void *temp_a6;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *var_v0;
    void *var_v1;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_a3 = arg0 + 4;
        var_a0 = 0;
        var_v1 = arg1;
        var_v0 = temp_a3;
        M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 0x739);
        M2C_FIELD(arg0, u8 *, 0x25) = (u8) M2C_FIELD(arg1, u8 *, 4);
        M2C_FIELD(arg0, u8 *, 0x26) = (u8) M2C_FIELD(arg1, u8 *, 5);
        M2C_FIELD(arg0, u8 *, 0x33F) = (u8) M2C_FIELD(arg1, u8 *, 0x7D4);
        M2C_FIELD(arg0, u8 *, 0x34E) = (u8) M2C_FIELD(arg1, u8 *, 0x75C);
        M2C_FIELD(arg0, u8 *, 0x358) = (u8) M2C_FIELD(arg1, u8 *, 0x73A);
        M2C_FIELD(arg0, u8 *, 0x359) = (u8) M2C_FIELD(arg1, u8 *, 0x73B);
        M2C_FIELD(arg0, s32 *, 0x334) = (s32) M2C_FIELD(arg1, s32 *, 0x2F4);
        do {
            temp_a6 = arg1 + var_a0;
            temp_a5 = temp_a3 + var_a0;
            temp_a4 = M2C_FIELD(temp_a6, u8 *, 0x766);
            var_a0 += 1;
            M2C_FIELD(temp_a5, u8 *, 1) = temp_a4;
            M2C_FIELD(temp_a5, u8 *, 0x85) = (u8) M2C_FIELD(temp_a6, u8 *, 0x33);
            M2C_FIELD(temp_a5, u8 *, 0xA5) = (u8) M2C_FIELD(temp_a6, u8 *, 0x53);
            M2C_FIELD(temp_a5, u8 *, 0xD0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x73);
            M2C_FIELD(temp_a5, u8 *, 0x1D0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x173);
            M2C_FIELD(temp_a5, u8 *, 0x1F0) = (u8) M2C_FIELD(temp_a6, u8 *, 0x193);
            M2C_FIELD(var_v0, s32 *, 0x230) = (s32) M2C_FIELD(var_v1, s32 *, 0x1D4);
            M2C_FIELD(var_v0, s32 *, 0x2B0) = (s32) M2C_FIELD(var_v1, s32 *, 0x254);
            var_v1 += 4;
            var_v0 += 4;
        } while (var_a0 < 0x20);
        var_a2 = 0;
        do {
            temp_v1 = temp_a3 + var_a2;
            temp_v0 = arg1 + var_a2;
            M2C_FIELD(temp_v1, u8 *, 0x23) = (u8) M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + var_a2), u8 *, 0x7EA);
            M2C_FIELD(temp_v1, u8 *, 0xC5) = (u8) M2C_FIELD(temp_v0, u8 *, 0x73F);
            M2C_FIELD(temp_v1, u8 *, 0x5A) = (u8) M2C_FIELD(temp_v0, u8 *, 8);
            M2C_FIELD(temp_v1, u8 *, 0x24) = (u8) M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + var_a2), u8 *, 0x7EB);
            M2C_FIELD(temp_v1, u8 *, 0xC6) = (u8) M2C_FIELD(temp_v0, u8 *, 0x740);
            M2C_FIELD(temp_v1, u8 *, 0x5B) = (u8) M2C_FIELD(temp_v0, u8 *, 9);
            M2C_FIELD(temp_v1, u8 *, 0x25) = (u8) M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + var_a2), u8 *, 0x7EC);
            M2C_FIELD(temp_v1, u8 *, 0xC7) = (u8) M2C_FIELD(temp_v0, u8 *, 0x741);
            M2C_FIELD(temp_v1, u8 *, 0x5C) = (u8) M2C_FIELD(temp_v0, u8 *, 0xA);
            M2C_FIELD(temp_v1, u8 *, 0x26) = (u8) M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + var_a2), u8 *, 0x7ED);
            M2C_FIELD(temp_v1, u8 *, 0xC8) = (u8) M2C_FIELD(temp_v0, u8 *, 0x742);
            M2C_FIELD(temp_v1, u8 *, 0x5D) = (u8) M2C_FIELD(temp_v0, u8 *, 0xB);
            temp_a4_2 = M2C_FIELD((arg1 + (M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + var_a2), u8 *, 0x7EE);
            var_a2 += 5;
            M2C_FIELD(temp_v1, u8 *, 0x27) = temp_a4_2;
            M2C_FIELD(temp_v1, u8 *, 0xC9) = (u8) M2C_FIELD(temp_v0, u8 *, 0x743);
            M2C_FIELD(temp_v1, u8 *, 0x5E) = (u8) M2C_FIELD(temp_v0, u8 *, 0xC);
        } while (var_a2 < 6);
        temp_a4_3 = var_a2 + temp_a3;
        temp_v1_2 = var_a2 + arg1;
        M2C_FIELD(temp_a4_3, u8 *, 0x23) = (u8) M2C_FIELD((var_a2 + ((M2C_FIELD(arg1, u8 *, 0x73E) * 0x52) + arg1)), u8 *, 0x7EA);
        M2C_FIELD(temp_a4_3, u8 *, 0xC5) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x73F);
        M2C_FIELD(temp_a4_3, u8 *, 0x5A) = (u8) M2C_FIELD(temp_v1_2, u8 *, 8);
        func_008D2940(arg0 + 0x35C, (u32) temp_a3);
        func_008D2500(arg0 + 0x35C);
        temp_hi = (u8) M2C_FIELD(arg0, u8 *, 0) % 10U;
        M2C_FIELD(arg0, u8 *, 0) = (u8) temp_hi;
        func_008D1E30(arg0 + 0x35C, ((temp_hi & 0xFF) + 1) & 0xFF, 1);
        func_008D2130(arg0 + 0x35C, 0);
    }
}
