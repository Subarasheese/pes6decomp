/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_009A0430(s32);
s32 func_0099F310(s32, s32);                        /* extern */
s32 func_009BD350(s32);                             /* extern */
s32 func_009BF250(s32);                             /* extern */

s32 func_009BE830(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    void *temp_v0_3;

    if (arg0 != NULL) {
        if (arg1 != 0) {
            temp_v0 = func_009BD350(arg1);
            M2C_FIELD(arg0, s32 *, 0xC) = temp_v0;
            if (temp_v0 == 0) {
                return 5;
            }
            temp_v0_2 = func_0099F310(arg1, arg2);
            M2C_FIELD(arg0, s32 *, 4) = temp_v0_2;
            if (temp_v0_2 == 0) {
                return 5;
            }
            temp_v0_3 = func_009A0430(arg1);
            M2C_FIELD(arg0, void **, 8) = temp_v0_3;
            if (temp_v0_3 == NULL) {
                return 5;
            }
            temp_v0_4 = func_009BF250(arg1);
            M2C_FIELD(arg0, s32 *, 0x10) = temp_v0_4;
            if (temp_v0_4 == 0) {
                return 5;
            }
            return 0;
        }
        goto block_4;
    }
block_4:
    return 5;
}
