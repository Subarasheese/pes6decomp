/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCCD90;
extern void *D_00CCCD94;

void func_00C85D60(void *arg0) {
    void *var_a4;

    M2C_FIELD(arg0, void **, 0x80) = NULL;
    M2C_FIELD(arg0, void **, 0x84) = NULL;
    if (D_00CCCD90 != NULL) {
        var_a4 = D_00CCCD90;
loop_5:
        if (M2C_FIELD(M2C_FIELD(var_a4, void **, 0x7C), s32 *, 4) >= M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 4)) {
            if (var_a4 != D_00CCCD90) {
                M2C_FIELD(M2C_FIELD(var_a4, void **, 0x80), void **, 0x84) = arg0;
                M2C_FIELD(arg0, void **, 0x80) = (void *) M2C_FIELD(var_a4, void **, 0x80);
                M2C_FIELD(arg0, void **, 0x84) = var_a4;
                M2C_FIELD(var_a4, void **, 0x80) = arg0;
                return;
            }
            M2C_FIELD(var_a4, void **, 0x80) = arg0;
            M2C_FIELD(arg0, void **, 0x84) = var_a4;
            D_00CCCD90 = arg0;
            return;
        }
        if (var_a4 != D_00CCCD94) {
            var_a4 = M2C_FIELD(var_a4, void **, 0x84);
            if (var_a4 == NULL) {
                return;
            }
            goto loop_5;
        }
        M2C_FIELD(var_a4, void **, 0x84) = arg0;
        M2C_FIELD(arg0, void **, 0x80) = var_a4;
        D_00CCCD94 = arg0;
        return;
    }
    D_00CCCD90 = arg0;
    D_00CCCD94 = arg0;
}
