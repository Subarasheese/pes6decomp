/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00157EC8(void *);
M2C_UNK func_00158020(void *);                      /* extern */
s32 ADXPD_Create();                                /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK, s16 *); /* extern */
extern char D_00377028[];
extern M2C_UNK func_00157E78;
extern M2C_UNK func_00157EA8;

void *func_00157F00(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 *var_v1;
    s32 temp_v0;
    s32 var_a1;
    void *temp_s0;
    void *var_v0;

    var_v1 = ((void *)D_00377028);
    var_a1 = 0;
    if ((*(s16 *)D_00377028) != 0) {
        var_a1 = 1;
loop_2:
        var_v1 += 0x104;
        if (var_a1 < 0x10) {
            if (*var_v1 != 0) {
                var_a1 += 1;
                goto loop_2;
            }
        }
    }
    var_v0 = NULL;
    if (var_a1 != 0x10) {
        temp_s0 = (var_a1 * 0x104) + (((void *)D_00377028) + 0x7028);
        func_001C48E8(temp_s0, 0, 0x104, ((void *)D_00377028));
        M2C_FIELD(temp_s0, s16 *, 0) = 1;
        temp_v0 = ADXPD_Create();
        M2C_FIELD(temp_s0, s32 *, 8) = temp_v0;
        if (temp_v0 == 0) {
            func_00158020(temp_s0);
            return NULL;
        }
        M2C_FIELD(temp_s0, M2C_UNK **, 0x78) = &func_00157E78;
        M2C_FIELD(temp_s0, s32 *, 0x38) = arg0;
        M2C_FIELD(temp_s0, s32 *, 0x3C) = arg1;
        M2C_FIELD(temp_s0, s32 *, 0x40) = arg2;
        M2C_FIELD(temp_s0, s32 *, 0x44) = arg3;
        M2C_FIELD(temp_s0, M2C_UNK **, 0x80) = &func_00157EA8;
        M2C_FIELD(temp_s0, void **, 0x7C) = temp_s0;
        M2C_FIELD(temp_s0, void **, 0x84) = temp_s0;
        func_00157EC8(temp_s0);
        var_v0 = temp_s0;
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
