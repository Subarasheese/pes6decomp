/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00105370(s32);                         /* extern */
M2C_UNK DIntr();                            /* extern */
M2C_UNK EIntr(s32, s32, s32);               /* extern */

s32 func_00137610(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;

    DIntr();
    temp_a2 = *(s32 *)0x1000F520;
    temp_a1 = temp_a2 | 0x10000;
    *(s32 *)0x1000F590 = temp_a1;
    *(s32 *)0x1000B400 = 5;
    temp_a0 = *(s32 *)0x1000F520;
    *(s32 *)0x1000F590 = temp_a0 & 0xFFFEFFFF;
    EIntr(temp_a0, temp_a1, temp_a2);
    *(s32 *)0x1000B420 = 0;
    *(s32 *)0x1000B410 = 0;
    *(s32 *)0x1000B430 = 0;
    func_00105370(M2C_FIELD(arg0, s32 *, 0x40));
    return 1;
}
