/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00151CF0(M2C_UNK);                         /* extern */
void *func_00189180(s32, s32);                      /* extern */
extern char D_0051FF48[];
extern char D_0051FF49[];

s32 func_00188EC0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_f0;
    f32 temp_f6;
    u8 var_v0;
    void *temp_v0;

    if (arg2 == 0) {
        var_v0 = (*(u8 *)D_0051FF49);
    } else {
        var_v0 = (*(u8 *)D_0051FF48);
    }
    if (var_v0 != 0) {
        temp_v0 = func_00189180(arg2, arg3);
        if (temp_v0 == NULL) {
            return 0;
        }
        if (arg1 != NULL) {
            M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(temp_v0, f32 *, 0x30);
            M2C_FIELD(arg1, s32 *, 4) = 0;
            M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(temp_v0, f32 *, 0x34);
        }
        temp_f0 = func_00151CF0(0x3F800000);
        temp_f6 = M2C_FIELD(temp_v0, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0) = (f32) (((M2C_FIELD(temp_v0, f32 *, 0xC) - temp_f6) * temp_f0) + temp_f6);
        M2C_FIELD(arg0, f32 *, 4) = (f32) (((M2C_FIELD(temp_v0, f32 *, 0x10) - M2C_FIELD(temp_v0, f32 *, 4)) * temp_f0) + M2C_FIELD(temp_v0, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 8) = (f32) (((M2C_FIELD(temp_v0, f32 *, 0x14) - M2C_FIELD(temp_v0, f32 *, 8)) * temp_f0) + M2C_FIELD(temp_v0, f32 *, 8));
        return 1;
    }
    return 0;
}
