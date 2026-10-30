/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCCDA8;
extern void *D_00CCCDAC;

void func_00C85CA0(void *arg0) {
    s32 var_v1;
    void *var_a4;

    M2C_FIELD(arg0, void **, 0x138) = NULL;
    M2C_FIELD(arg0, void **, 0x13C) = NULL;
    if (D_00CCCDA8 == NULL) {
        D_00CCCDA8 = arg0;
        D_00CCCDAC = arg0;
        return;
    }
    var_a4 = D_00CCCDA8;
loop_3:
    var_v1 = 1;
    if (!(M2C_FIELD(var_a4, f32 *, 0x7C) <= M2C_FIELD(arg0, f32 *, 0x7C))) {
        var_v1 = 0;
    }
    if ((var_v1 ^ 1) == 0) {
        if (var_a4 != D_00CCCDA8) {
            M2C_FIELD(M2C_FIELD(var_a4, void **, 0x138), void **, 0x13C) = arg0;
            M2C_FIELD(arg0, void **, 0x138) = (void *) M2C_FIELD(var_a4, void **, 0x138);
            M2C_FIELD(arg0, void **, 0x13C) = var_a4;
            M2C_FIELD(var_a4, void **, 0x138) = arg0;
            return;
        }
        M2C_FIELD(var_a4, void **, 0x138) = arg0;
        M2C_FIELD(arg0, void **, 0x13C) = var_a4;
        D_00CCCDA8 = arg0;
        return;
    }
    if (var_a4 != D_00CCCDAC) {
        var_a4 = M2C_FIELD(var_a4, void **, 0x13C);
        if (var_a4 == NULL) {
            return;
        }
        goto loop_3;
    }
    M2C_FIELD(var_a4, void **, 0x13C) = arg0;
    M2C_FIELD(arg0, void **, 0x138) = var_a4;
    D_00CCCDAC = arg0;
}
