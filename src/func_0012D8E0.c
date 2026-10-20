/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_0012AD50(s32);                         /* extern */
M2C_UNK func_0012ADE0(s32);                         /* extern */
M2C_UNK func_0012C710(s32, s32);                    /* extern */
M2C_UNK func_0012D4B0(s32, s32);                    /* extern */
s32 func_0012D6A0();                                /* extern */
extern s32 D_003E7410;

void func_0012D8E0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_0012D6A0();
    func_0012AD50(D_003E7410);
    func_0012C710(temp_s0, arg0);
    func_0012ADE0(D_003E7410);
    func_0012D4B0(temp_s0, arg0);
}
