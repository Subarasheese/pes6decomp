/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 *func_00264580();                               /* extern */
M2C_UNK func_002727C0(M2C_UNK);                     /* extern */

void func_00264500(s32 arg0) {
    s32 *temp_v0;

    temp_v0 = func_00264580();
    if (*temp_v0 != arg0) {
        if (arg0 != 0) {
            func_002727C0(0x17);
        }
        *temp_v0 = arg0;
    }
}
