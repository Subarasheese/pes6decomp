/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
extern void func_00238140(s8);
extern void func_002386F0(s32, s8);
extern void func_002387A0(s32, s8);
extern void func_00238740(s32, s8);
extern void * func_00229460(void);
extern void * func_0022C1E0(void);
extern void func_002380F0(s8);
M2C_UNK func_00239210(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0097CFC0(M2C_UNK, M2C_UNK);            /* extern */

void func_00AE4280(void) {
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_a3_2;
    s8 var_a2;
    s8 var_a4;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_s2;

    temp_s1 = func_0022C1E0();
    temp_s2 = func_00229460();
    temp_s0 = func_002293F0();
    if ((temp_s1 != NULL) && (temp_s2 != NULL) && (temp_s0 != 0)) {
        func_00238140(0x28);
        func_002380F0(0x28);
        func_002387A0(0, 2);
        func_002387A0(1, 8);
        func_00238740(0, 4);
        func_00238740(1, 4);
        func_00238740(2, 4);
        func_00238740(3, 4);
        func_00238740(4, 4);
        func_00238740(5, 4);
        func_00238740(6, 4);
        func_00238740(7, 4);
        func_00238740(8, 4);
        func_00238740(9, 4);
        func_002386F0(0, 2);
        func_002386F0(1, 2);
        func_002386F0(2, 1);
        func_002386F0(3, 1);
        func_002386F0(4, 1);
        func_002386F0(5, 1);
        func_002386F0(6, 1);
        func_002386F0(7, 1);
        func_002386F0(8, 1);
        func_002386F0(9, 1);
        var_a3 = 0;
        var_a2 = 0;
        do {
            temp_v1 = var_a2 & 0xFF;
            temp_a1 = temp_s0 + ((var_a3 & 0xFF) * 4);
            M2C_FIELD(temp_a1, s8 *, 0) = var_a2;
            M2C_FIELD(temp_a1, s8 *, 1) = (s8) (temp_v1 + 1);
            M2C_FIELD(temp_a1, s8 *, 2) = (s8) (temp_v1 + 2);
            var_a2 = (var_a2 + 4) & 0xFF;
            var_a3 = (var_a3 + 1) & 0xFF;
            M2C_FIELD(temp_a1, s8 *, 3) = (s8) (temp_v1 + 3);
        } while (var_a3 < 2);
        var_a3_2 = 0;
        var_a4 = 0;
        do {
            temp_v1_2 = var_a4 & 0xFF;
            temp_a1_2 = temp_s0 + 8 + ((var_a3_2 & 0xFF) * 4);
            M2C_FIELD(temp_a1_2, s8 *, 0) = var_a4;
            M2C_FIELD(temp_a1_2, s8 *, 1) = (s8) (temp_v1_2 + 1);
            M2C_FIELD(temp_a1_2, s8 *, 2) = (s8) (temp_v1_2 + 2);
            var_a4 = (var_a4 + 4) & 0xFF;
            var_a3_2 = (var_a3_2 + 1) & 0xFF;
            M2C_FIELD(temp_a1_2, s8 *, 3) = (s8) (temp_v1_2 + 3);
        } while (var_a3_2 < 8);
        var_a0 = 0;
        var_a1 = 0;
        do {
            temp_v0 = var_a1 & 0xFF;
            M2C_FIELD((temp_s1 + temp_v0), s8 *, 0xC4) = 0xFF;
            var_a1 = (var_a1 + 8) & 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 1) & 0xFF)), s8 *, 0xC4) = 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 2) & 0xFF)), s8 *, 0xC4) = 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 3) & 0xFF)), s8 *, 0xC4) = 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 4) & 0xFF)), s8 *, 0xC4) = 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 5) & 0xFF)), s8 *, 0xC4) = 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 6) & 0xFF)), s8 *, 0xC4) = 0xFF;
            var_a0 = (var_a0 + 8) & 0xFF;
            M2C_FIELD((temp_s1 + ((temp_v0 + 7) & 0xFF)), s8 *, 0xC4) = 0xFF;
        } while (var_a0 < 0x10);
        temp_a2 = var_a1 & 0xFF;
        M2C_FIELD((temp_a2 + temp_s1), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((((temp_a2 + 1) & 0xFF) + temp_s1), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((((temp_a2 + 2) & 0xFF) + temp_s1), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((((temp_a2 + 3) & 0xFF) + temp_s1), s8 *, 0xC4) = 0xFF;
        func_00239210(0x10, 1, 0, 0, 1);
        func_00239210(2, 0, 1, 1, 1);
        func_00239210(2, 0, 1, 1, 1);
        func_0097CFC0(0, 0);
        func_0097CFC0(1, 1);
        func_0097CFC0(2, 0);
        func_0097CFC0(3, 0);
        func_0097CFC0(4, 0);
        func_0097CFC0(5, 0);
        func_0097CFC0(6, 0);
        func_0097CFC0(7, 1);
    }
}
