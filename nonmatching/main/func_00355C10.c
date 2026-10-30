/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_003395B0(void *);
extern s32 func_00340C80(f32);
extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E6448[];
extern u8 D_003E9F98;
extern char D_005927B9[];
extern M2C_UNK func_00355850;
extern M2C_UNK func_00355BA0;

s32 func_00355C10(void *arg0) {
    s32 temp_s2;
    s32 var_v1;
    u8 temp_s0;
    void *temp_v0;

    var_v1 = 0;
    temp_s0 = (*(u8 *)D_005927B9);
    if ((temp_s0 != 0) && ((s32) temp_s0 < 0x17)) {
        var_v1 = 1;
    }
    if (var_v1 != 0) {
        if (D_003E9F98 != 0) {
            temp_s2 = func_003395B0(M2C_FIELD(arg0, void **, 0x3C)) - D_003E9F98;
            if (func_00340C80(20.0f) < temp_s2) {
                temp_v0 = func_00338AD0(0x41, &func_00355850, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E6448));
                func_00338A60(temp_v0, arg0);
                M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) temp_s0;
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x28);
                func_003387D0(arg0, (s32) &func_00355BA0);
            }
        }
        return 1;
    }
    return 0;
}
