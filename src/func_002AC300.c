/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


M2C_UNK func_002ACB00(void *);                      /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */

void func_002AC300(s32 arg0, s32 *arg1, s32 *arg2, s32 *arg3, void *arg4) {
    f32 temp_f1;

    func_002ACB00(arg4);
    switch (arg0) {
    case 1:
        *arg1 = 0;
        *arg2 = 0;
        temp_f1 = M2C_FIELD(arg4, f32 *, 4);
        if (temp_f1 <= 2000.0f) {
            if (temp_f1 <= 1000.0f) {
                if (!(temp_f1 <= 800.0f)) {
                    *arg2 = 0x320;
                }
            } else {
                *arg2 = 0x3E8;
            }
            if (*arg2 != 0) {
                *arg1 = 1;
                *arg3 = func_00BBB8C0(0x14) + 0xA;
            }
        }
        break;
    case 2:
        *arg1 = 1;
        if (func_00BBB8C0(2) != 0) {
            *arg2 = (s32) ((4.0f * M2C_FIELD(arg4, f32 *, 4)) / 5.0f);
        } else {
            *arg2 = (s32) ((6.0f * M2C_FIELD(arg4, f32 *, 4)) / 5.0f);
        }
        *arg3 = 0x12C;
        break;
    }
}
