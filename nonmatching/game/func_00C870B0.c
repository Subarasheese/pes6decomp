/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00C890E0(M2C_UNK);                         /* extern */
M2C_UNK func_00C891A0(M2C_UNK, M2C_UNK, s16, f32, f32); /* extern */
extern char D_003F7794[];
extern char D_00CCCDC4[];
extern char D_00CCCDD0[];
extern char D_00CCCDD4[];

void func_00C870B0(void) {
    f32 temp_f0;
    f32 temp_f13;

    if ((*(u8 *)D_00CCCDD4) == 0) {
        if ((*(u8 *)D_00CCCDD0) & 1) {
            temp_f0 = func_00C890E0(2);
            if (!(temp_f0 <= 0.0f)) {
                temp_f13 = (*(f32 *)D_00CCCDC4) + 35.0f;
                (*(f32 *)D_00CCCDC4) = temp_f13;
                func_00C891A0(2, 0x40000000, (*(s16 *)D_003F7794), (((f32) (*(s16 *)D_003F7794) - temp_f0) / 2.0f) - 256.0f, temp_f13);
            }
        }
        (*(u8 *)D_00CCCDD4) = 1;
    }
}
