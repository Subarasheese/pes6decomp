/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern float func_001E5410(void);
f32 func_00C890E0(M2C_UNK);                         /* extern */
M2C_UNK func_00C891A0(M2C_UNK, s16, M2C_UNK, f32, f32); /* extern */
extern char D_003F7794[];
extern char D_00CCCDC4[];
extern char D_00CCCDD0[];
extern char D_00CCCDD4[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14], gap at: 0x8. */
void func_00C86FE0(void) {
    f32 temp_f0;
    f32 temp_f13;

    if ((*(u8 *)D_00CCCDD4) == 1) {
        if ((*(u8 *)D_00CCCDD0) & 1) {
            temp_f0 = func_00C890E0(2);
            if (!(temp_f0 <= 0.0f)) {
                temp_f13 = 28.0f - (func_001E5410() / 2.0f);
                (*(f32 *)D_00CCCDC4) = temp_f13;
                func_00C891A0(2, (*(s16 *)D_003F7794), 0x41E00000, (((f32) (*(s16 *)D_003F7794) - temp_f0) / 2.0f) - 256.0f, temp_f13);
            }
        }
        (*(u8 *)D_00CCCDD4) = 0;
    }
}
