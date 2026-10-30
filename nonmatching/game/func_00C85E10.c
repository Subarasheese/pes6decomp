/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCCD98;
extern void *D_00CCCD9C;

void func_00C85E10(void *arg0) {
    s32 var_v1;
    void *var_a4;

    M2C_FIELD(arg0, void **, 0x70) = NULL;
    M2C_FIELD(arg0, void **, 0x74) = NULL;
    if (D_00CCCD98 == NULL) {
        D_00CCCD98 = arg0;
        D_00CCCD9C = arg0;
        return;
    }
    var_a4 = D_00CCCD98;
loop_3:
    var_v1 = 1;
    if (!(M2C_FIELD(var_a4, f32 *, 0x58) <= M2C_FIELD(arg0, f32 *, 0x58))) {
        var_v1 = 0;
    }
    if ((var_v1 ^ 1) == 0) {
        if (var_a4 != D_00CCCD98) {
            M2C_FIELD(M2C_FIELD(var_a4, void **, 0x70), void **, 0x74) = arg0;
            M2C_FIELD(arg0, void **, 0x70) = (void *) M2C_FIELD(var_a4, void **, 0x70);
            M2C_FIELD(arg0, void **, 0x74) = var_a4;
            M2C_FIELD(var_a4, void **, 0x70) = arg0;
            return;
        }
        M2C_FIELD(var_a4, void **, 0x70) = arg0;
        M2C_FIELD(arg0, void **, 0x74) = var_a4;
        D_00CCCD98 = arg0;
        return;
    }
    if (var_a4 != D_00CCCD9C) {
        var_a4 = M2C_FIELD(var_a4, void **, 0x74);
        if (var_a4 == NULL) {
            return;
        }
        goto loop_3;
    }
    M2C_FIELD(var_a4, void **, 0x74) = arg0;
    M2C_FIELD(arg0, void **, 0x70) = var_a4;
    D_00CCCD9C = arg0;
}
