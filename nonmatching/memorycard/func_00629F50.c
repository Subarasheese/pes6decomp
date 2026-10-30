/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern void * func_001EDD00(void *);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
s32 func_0062A0B0();                                /* extern */

void func_00629F50(void *arg0) {
    s32 temp_s0;
    s32 var_s2_2;
    s32 var_s3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *var_s2;
    void *var_s3_2;

    temp_s0 = func_0062A0B0();
    if (M2C_FIELD(arg0, void **, 0x3C) == NULL) {
        temp_v0 = func_001EE0D0();
        M2C_FIELD(arg0, void **, 0x3C) = temp_v0;
        func_001EDA30(temp_v0, 1);
        temp_v0_2 = func_001EE0D0();
        M2C_FIELD(arg0, void **, 0x40) = temp_v0_2;
        func_001EDA30(temp_v0_2, 1);
    }
    if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
        if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
            var_s3 = 0;
            var_s2 = arg0;
            do {
                temp_v0_3 = func_001EDD00(M2C_FIELD(arg0, void **, 0x3C));
                M2C_FIELD(var_s2, void **, 0x44) = temp_v0_3;
                func_001EEAC0(temp_v0_3, temp_s0);
                var_s3 += 1;
                var_s2 += 4;
            } while (var_s3 < 0x1E);
        }
        if (M2C_FIELD(arg0, void **, 0x138) == NULL) {
            temp_v0_4 = func_001EDD00(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, void **, 0x138) = temp_v0_4;
            func_001EEAC0(temp_v0_4, temp_s0);
        }
        if (M2C_FIELD(arg0, void **, 0x134) == NULL) {
            temp_v0_5 = func_001EDD00(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, void **, 0x134) = temp_v0_5;
            func_001EEAC0(temp_v0_5, temp_s0);
        }
    }
    if ((M2C_FIELD(arg0, void **, 0x40) != NULL) && (M2C_FIELD(arg0, s32 *, 0xBC) == 0)) {
        var_s2_2 = 0x1E;
        var_s3_2 = arg0 + 0x78;
        do {
            temp_v0_6 = func_001EDD00(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(var_s3_2, void **, 0x44) = temp_v0_6;
            func_001EEAC0(temp_v0_6, temp_s0);
            var_s2_2 += 1;
            var_s3_2 += 4;
        } while (var_s2_2 < 0x3C);
    }
}
