/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6SaveData_IsUnavailable();                                /* extern */
s8 *func_00232510(s32, s32, s32);                   /* extern */

void func_00233E80(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    if (Pes6SaveData_IsUnavailable() != 1) {
        *func_00232510(arg0, arg1, arg2) = arg3;
    }
}
