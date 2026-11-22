/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_008CC320(s32);
extern void func_008D1DD0(char *, s32);
extern s32 func_008D2130(char *, s32);

void func_008CACD0(char *arg0) {
    s32 (*temp_v0)(s32);

    if (arg0 != NULL) {
        func_008D1DD0(arg0 + 0x480, 0);
        temp_v0 = M2C_FIELD(arg0, s32 (**)(s32), 0x110);
        if (temp_v0 != NULL) {
            temp_v0(M2C_FIELD(arg0, s32 *, 0x114));
        }
        func_008CC320((s32) arg0);
        func_008D2130(arg0 + 0x480, 0);
    }
}
