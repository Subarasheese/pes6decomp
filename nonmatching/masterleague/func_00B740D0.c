/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B77020(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00B721C0(u8);                          /* extern */

s32 func_00B740D0(void) {
    u32 temp_v0;
    void *temp_v1;

    temp_v0 = func_00B77020();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, u8 *, 0x3CC) == 0) {
            if (M2C_FIELD(temp_v0, u8 *, 0x3CD) == 0) {
                temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x3D2) + temp_v0;
                if ((s32) M2C_FIELD(temp_v1, u8 *, 0x3D3) < 0xC) {
                    M2C_FIELD(temp_v1, u8 *, 0x3D3) = 0U;
                    func_00B721C0(M2C_FIELD(temp_v0, u8 *, 0x3D2));
                    func_0026E840(0x84008401);
                } else {
                    func_0026E840(0x8C008005);
                }
            }
        }
    }
    return 0;
}
