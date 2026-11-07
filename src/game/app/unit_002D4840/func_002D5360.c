/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00226710();                                /* extern */
s32 func_00229A70();                                /* extern */
M2C_UNK func_002D5290(u8, s32, s32);                /* extern */
extern char D_00591C09[];

void func_002D5360(void) {
    s32 temp_s0;

    temp_s0 = func_00229A70() & 0xFF;
    func_002D5290((*(u8 *)D_00591C09), func_00226710() & 0xFF, temp_s0);
}
