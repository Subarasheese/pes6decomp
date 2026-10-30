/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002332F0(void);
extern s32 func_002293F0(void);
extern u8 func_00229A70(void);
s32 func_00236680(s8);                              /* extern */
extern void *D_003EAE20;

void func_00B22AA0(void) {
    s32 temp_s1;
    s32 temp_v1;
    s8 var_a0;
    void *temp_a0;
    void *temp_s0;
    void *temp_v1_2;

    temp_s0 = D_003EAE20;
    temp_s1 = func_002293F0();
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x50) = 0;
        func_002332F0();
        temp_v1 = func_00229A70() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 3:
            var_a0 = 3 & 0xFF;
            break;
        case 2:
            var_a0 = 2 & 0xFF;
            break;
        case 1:
            var_a0 = 1 & 0xFF;
            break;
        default:
        case 0:
            var_a0 = 0;
            break;
        }
        M2C_FIELD(temp_s0, s8 *, 0x58) = var_a0;
        M2C_FIELD(temp_s0, s8 *, 0x59) = 4;
        temp_v1_2 = (func_00236680(var_a0) & 0xFF) + temp_s1;
        M2C_FIELD(temp_s0, u8 *, 0x54) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x7F);
        M2C_FIELD(temp_s0, u8 *, 0x55) = (u8) M2C_FIELD(temp_v1_2, u8 *, 0x80);
        temp_a0 = (func_00236680(4) & 0xFF) + temp_s1;
        M2C_FIELD(temp_s0, u8 *, 0x56) = (u8) M2C_FIELD(temp_a0, u8 *, 0x71);
        M2C_FIELD(temp_s0, u8 *, 0x57) = (u8) M2C_FIELD(temp_a0, u8 *, 0x72);
    }
}
