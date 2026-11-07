/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FC4A8(void *, s32, s32, s32);       /* extern */
M2C_UNK func_008FC768(void *, s32, s32, s32);       /* extern */
M2C_UNK func_00900500(void *, M2C_UNK *, s32);      /* extern */
extern char D_009021B8[];

s32 func_008FCB88(void *arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    var_a0 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 4) != 0) {
        if (M2C_FIELD(temp_s0, s32 *, 8) != 0) {
            temp_a2 = M2C_FIELD(temp_s0, s32 *, 0x128);
            if (M2C_FIELD(temp_s0, s32 *, 0x130) != 0) {
                func_00900500(temp_s0, ((void *)D_009021B8), temp_a2);
            } else {
                temp_a3 = temp_a2 - 1;
                if (M2C_FIELD(temp_s0, s32 *, 0x184) == 3) {
                    func_008FC4A8(temp_s0, M2C_FIELD(temp_s0, s32 *, 0x1CC), temp_a2 - 1, temp_a3);
                } else {
                    func_008FC768(temp_s0, M2C_FIELD(temp_s0, s32 *, 0x1DC), M2C_FIELD(temp_s0, s32 *, 0x1EC), temp_a3);
                }
            }
            var_a0 = 1;
            M2C_FIELD(temp_s0, s32 *, 0x130) = 0;
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x128) - M2C_FIELD(temp_s0, s32 *, 0xC0));
            M2C_FIELD(temp_s0, s32 *, 4) = 0;
        }
    }
    return var_a0;
}
