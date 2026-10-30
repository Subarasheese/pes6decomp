/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225B20(s32);                             /* extern */
void *func_002260A0();                              /* extern */
s32 func_00226710();                                /* extern */
s32 func_0022F150();                                /* extern */
extern void *D_003E77B0;

void func_00985680(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s2;
    s8 var_s1;
    s8 var_s3;
    void *temp_s0;

    var_s2 = 0;
    var_s1 = -1;
    temp_s0 = func_002260A0();
    temp_v0 = func_0022F150();
    if ((temp_s0 != NULL) && (temp_v0 != 0)) {
        var_s3 = 0;
        M2C_FIELD(temp_s0, s8 *, 1) = -1;
        do {
            if (func_00225B20(var_s3 & 0xFF) == 1) {
                M2C_FIELD(temp_s0, s8 *, 1) = var_s3;
                var_s1 = var_s3 & 0xFF;
                var_s2 = (var_s2 + 1) & 0xFF;
            }
            var_s3 += 1;
        } while (var_s3 < 0x48);
        if ((var_s2 & 0xFF) < 2) {
            M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & 0xFFFBFFFF);
            M2C_FIELD(temp_s0, s8 *, 1) = var_s1;
        } else {
            temp_a0 = func_00226710() & 0xFF;
            switch (temp_a0) {                      /* irregular */
            case 13:
            case 11:
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) | 0x40000);
                return;
            default:
            case 26:
            case 24:
            case 22:
            case 20:
            case 18:
            case 15:
                M2C_FIELD(D_003E77B0, s32 *, 0x20) = (s32) (M2C_FIELD(D_003E77B0, s32 *, 0x20) & 0xFFFBFFFF);
                return;
            }
        }
    }
}
