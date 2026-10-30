/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s32 func_00938F10(s32);                             /* extern */
void *func_00994C60(s32, s32);                      /* extern */
s32 func_00B19310(s32, s32, s32);                   /* extern */
s32 func_00B1A030(s32, s32);                        /* extern */

void func_00B1A7D0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;
    void *temp_v0;

    func_00225820();
    temp_s0 = arg0 & 0xFF;
    if (temp_s0 < 0x48) {
        temp_s1 = func_00B1A030(arg0, arg1) & 0xFF;
        if ((temp_s1 != 0xFF) && ((func_00938F10(arg1) & 0xFF) == 0xFF) && (func_00B19310(arg0, temp_s1 & 0xFF, arg1) != 0)) {
            temp_v0 = func_00994C60(temp_s0, temp_s1);
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0) & ~1) | (0 & 1));
                M2C_FIELD(temp_v0, u8 *, 0) = (u8) ((M2C_FIELD(temp_v0, u8 *, 0) & ~0x7E) | 6);
                M2C_FIELD(temp_v0, s16 *, 6) = 0;
            }
        }
    }
}
