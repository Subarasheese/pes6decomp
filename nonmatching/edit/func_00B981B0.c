/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F1EA0(void *);
extern void func_001F3C80(void *, f32);
extern s32 func_001F3D10(s32, u8);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00B97360(void *);                      /* extern */
M2C_UNK func_00B97F30(void *);                      /* extern */

void func_00B981B0(void *arg0) {
    s32 var_s1;
    void *temp_a1;

    if ((arg0 != NULL) && (temp_a1 = M2C_FIELD(arg0, void **, 0), (temp_a1 != NULL)) && (M2C_FIELD(arg0, s32 *, 4) != 0)) {
        var_s1 = M2C_FIELD(temp_a1, s32 *, 0);
        if (M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
            if (var_s1 == 0) {
                func_00B97F30(temp_a1);
                var_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0);
                if (var_s1 == 0) {
                    return;
                }
            }
            func_001F3D10(var_s1, M2C_FIELD(arg0, u8 *, 0x3D));
            func_001F3C80((void *) var_s1, M2C_FIELD(arg0, f32 *, 0x38));
            func_001F3C80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), M2C_FIELD(arg0, f32 *, 0x38));
            func_001F3C80(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8), M2C_FIELD(arg0, f32 *, 0x38));
            func_00B97360(arg0);
        } else if (var_s1 != 0) {
            func_001F1EA0((void *) var_s1);
            func_001C48E8(M2C_FIELD(arg0, void **, 0), 0, 0x22C);
        }
    }
}
