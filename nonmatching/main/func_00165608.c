/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00161930(void *, s32);
M2C_UNK ADXAMP_Start(s32);                         /* extern */
M2C_UNK ADXSJD_Start(void *);                      /* extern */
extern char D_0037ACA0[];

void func_00165608(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s2;
    void ***var_s1;
    void **var_a0;

    var_s2 = 0;
    if (M2C_FIELD(arg0, s8 *, 3) > 0) {
        var_s1 = arg0 + 0x18;
        var_a0 = M2C_FIELD(arg0, void ***, 0x18);
loop_2:
        var_s1 += 4;
        var_s2 += 1;
        M2C_FIELD(*var_a0, M2C_UNK (**)(void **), 0x14)(var_a0);
        if (var_s2 < M2C_FIELD(arg0, s8 *, 3)) {
            var_a0 = *var_s1;
            goto loop_2;
        }
    }
    func_00161930(M2C_FIELD(arg0, void **, 4), arg1);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    ADXSJD_Start(M2C_FIELD(arg0, void **, 4));
    M2C_FIELD(arg0, s8 *, 1) = 1;
    M2C_FIELD(arg0, s32 *, 0x90) = -1;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0x7FFFFFFF;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s8 *, 0x71) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (*(s32 *)D_0037ACA0);
    if (temp_a0 != 0) {
        ADXAMP_Start(temp_a0);
    }
}
