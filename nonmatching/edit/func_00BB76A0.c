/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00259C70(void);
M2C_UNK func_00259D10(s16 *);                       /* extern */
s32 func_00BB4780(void *);                          /* extern */
M2C_UNK func_00BBC080();                            /* extern */

void func_00BB76A0(void *arg0) {
    s16 sp2C;
    s16 sp2E;
    s32 temp_v1;
    s32 temp_v1_2;

    if (M2C_FIELD(arg0, s32 *, 0x60) >= 2) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x40);
        if ((temp_v1 == 0xD) || (temp_v1 == 0xC) || (temp_v1 == 9)) {
            M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
        }
        func_00259C70();
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x40);
        if ((temp_v1_2 != 0xC) && (temp_v1_2 != 0xD)) {
            sp2C = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x68);
            sp2E = (s16) (s32) M2C_FIELD(arg0, f32 *, 0x6C);
            func_00259D10(&sp2C);
        }
        func_00BBC080();
    }
}
