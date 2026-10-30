/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001D5A10(s32);
extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009C08B0();                            /* extern */
s32 func_009C11E0(void *, void *);                  /* extern */
extern void *D_00A7DD40;

s32 func_009C0F40(s32 arg0) {
    s32 temp_a0_2;
    s32 var_s1;
    void *temp_a0;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;

    var_s1 = arg0;
    temp_v0 = func_001D5A10(0x103D9);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_0099C7E0(0x210);
        if (temp_v0_2 == NULL) {
            return 0;
        }
        if ((var_s1 < 0) || (var_s1 >= 2)) {
            var_s1 = 0;
        }
        func_001C48E8(temp_v0_2, 0, 0x210);
        M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x18) = 0;
        if (var_s1 == 1) {
            M2C_FIELD(temp_v0_2, s32 *, 0x84) = 1;
        } else {
            M2C_FIELD(temp_v0_2, s32 *, 0x84) = 0;
        }
        M2C_FIELD(temp_v0_2, s8 *, 0x9E) = 1;
        M2C_FIELD(temp_v0_2, s8 *, 0x9C) = 1;
        M2C_FIELD(temp_v0_2, s32 *, 0xA0) = var_s1;
        if (func_009C11E0(temp_v0_2, temp_v0) == 4) {
            temp_s0 = D_00A7DD40;
            if (temp_s0 == NULL) {
                return 0;
            }
            temp_a0 = M2C_FIELD(temp_s0, void **, 4);
            if (temp_a0 != NULL) {
                func_001D7F10(temp_a0);
                M2C_FIELD(temp_s0, s32 *, 4) = 0;
            }
            temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
            if (temp_a0_2 != 0) {
                func_002DF960(temp_a0_2);
                M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
            }
            func_0099C7C0(temp_s0);
            D_00A7DD40 = NULL;
            return 0;
        }
        if (temp_v0_2 != NULL) {
            if (M2C_FIELD(temp_v0_2, s32 *, 0) != 1) {
                M2C_FIELD(temp_v0_2, s8 *, 0x9E) = 1;
            }
            M2C_FIELD(temp_v0_2, s32 *, 0) = 1;
        }
        if ((D_00A7DD40 != NULL) && (M2C_FIELD(D_00A7DD40, s8 *, 0x9C) != 0)) {
            M2C_FIELD(D_00A7DD40, s8 *, 0x9C) = 0;
            M2C_FIELD(D_00A7DD40, s8 *, 0x9E) = 1;
            func_009C08B0();
        }
        if ((D_00A7DD40 != NULL) && (M2C_FIELD(D_00A7DD40, s8 *, 0x9D) != 0)) {
            M2C_FIELD(D_00A7DD40, s8 *, 0x9D) = 0;
            M2C_FIELD(D_00A7DD40, s8 *, 0x9E) = 1;
            func_009C08B0();
        }
        D_00A7DD40 = temp_v0_2;
        return 1;
    }
    return 0;
}
