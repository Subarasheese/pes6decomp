/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
extern s16 func_008440F0(void);
extern s16 func_00843F40(void);
s16 *func_008472D0();                               /* extern */
void *func_00858FD0(M2C_UNK *, s16);                /* extern */
extern char D_008B21C0[];

s32 func_0085A410(s32 *arg0) {
    s32 var_v0;
    s64 temp_s1_2;
    s64 temp_s1_3;
    u8 temp_v1;
    void *temp_s1;

    temp_s1 = func_00858FD0(((void *)D_008B21C0), *func_008472D0());
    temp_v1 = M2C_FIELD(func_008472D0(), u8 *, 2);
    if (temp_v1 != 1) {
        if (temp_v1 == 2) {
            M2C_FIELD(temp_s1, s8 *, 8) = 3;
            temp_s1_2 = (s64) (func_00843F40() << 0x30) >> 0x30;
            if (temp_s1_2 != *func_008472D0()) {
                var_v0 = 5;
            } else {
                var_v0 = 4;
            }
            goto block_6;
        }
    } else {
        if (func_002DCA40() != 0) {
            var_v0 = 2;
        } else {
            temp_s1_3 = (s64) (func_008440F0() << 0x30) >> 0x30;
            if (temp_s1_3 != *func_008472D0()) {
                var_v0 = 1;
            } else {
                var_v0 = 3;
            }
        }
block_6:
        *arg0 = var_v0;
    }
    return 0;
}
