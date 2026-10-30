/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B6860(void);
u8 *func_002F7F80(s32);                             /* extern */
s32 func_00BA3A00();                                /* extern */
s32 func_00BAF100();                                /* extern */

void func_00BAEFF0(void *arg0) {
    s32 temp_v0;
    s32 var_s1;
    s8 var_v1;
    u8 *temp_v0_2;

    temp_v0 = func_00BAF100();
    switch (temp_v0) {                              /* irregular */
    case 2:
        var_v1 = 9;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
block_20:
        M2C_FIELD(arg0, s8 *, 4) = var_v1;
        return;
    case 0:
        var_s1 = 0;
loop_9:
        temp_v0_2 = func_002F7F80(var_s1);
        if ((temp_v0_2 != NULL) && (*temp_v0_2 != 0)) {
            var_s1 += 1;
            if (var_s1 < 0x50) {
                goto loop_9;
            }
        }
        M2C_FIELD(arg0, s32 *, 0) = var_s1;
        var_v1 = 4;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        goto block_20;
    case 1:
        if (func_00BA3A00() == 0) {
            var_v1 = 3;
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        } else {
            var_v1 = 5;
            M2C_FIELD(arg0, s32 *, 0) = 0x1BA;
            M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        }
        goto block_20;
    case 3:
        func_001B6860();
        var_v1 = 0xC;
        M2C_FIELD(arg0, s8 *, 5) = (s8) M2C_FIELD(arg0, s8 *, 4);
        goto block_20;
    }
}
