/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_0022C1E0(void);
void *func_0022C140(s32);                           /* extern */

u8 func_00239E40(s32 arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = func_0022C1E0();
    if (func_00231240() != 1) {
        temp_v0 = func_0022C140(arg0);
        if (temp_s0 == NULL) {
            return 0xFFU;
        }
        if (temp_v0 != NULL) {
            temp_v1 = (M2C_FIELD(temp_v0, u8 *, 8) + (arg1 & 0xFF)) & 0xFF;
            if (temp_v1 < 0x60) {
                return M2C_FIELD((temp_v1 + temp_s0), u8 *, 0xC4);
            }
            return 0xFFU;
        }
        return 0xFFU;
    }
    return 0xFFU;
}
