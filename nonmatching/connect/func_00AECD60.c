/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F39A0(void *);
extern u32 func_00AEECB0(void *);
extern char D_00B02B84[];

void func_00AECD60(void *arg0, s32 *arg1) {
    s32 var_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;

    if (arg0 != NULL) {
        temp_a0 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0 != NULL) {
            temp_v0 = func_00AEECB0(temp_a0);
            var_v1 = 1;
            if (temp_v0 != 0) {
                M2C_FIELD(temp_v0, s32 **, 4) = arg1;
                var_v1 = 0;
            }
            if (arg1 != NULL) {
                *arg1 = var_v1;
            }
        }
        temp_a0_2 = M2C_FIELD(arg0, void **, 0xC);
        if (temp_a0_2 != NULL) {
            temp_v0_2 = func_00AEECB0(temp_a0_2);
            if (temp_v0_2 != 0) {
                M2C_FIELD(temp_v0_2, u8 *, 8) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 8) & ~1) | 1);
            }
        }
        func_002F39A0(M2C_FIELD(arg0, void **, 0));
        if (!((*(f32 *)D_00B02B84) <= 0.0f)) {
            (*(f32 *)D_00B02B84) -= 1.0f;
        }
    }
}
