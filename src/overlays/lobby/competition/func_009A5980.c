/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0095C340(void);
M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_0098CAD0();                            /* extern */

s32 func_009A5980(void *arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    temp_v0 = func_0095C340();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 4:
        M2C_FIELD(arg0, s8 *, 0x378) = (s8) M2C_FIELD(arg0, s32 *, 0x39C);
        if (M2C_FIELD(arg0, s32 *, 0x39C) != 0xD) {
            func_0098CAD0();
        }
        break;
    case 1:
    case 3:
        func_0098CAD0();
        SD_call(0x8C008005);
        M2C_FIELD(arg0, s32 *, 0x394) = 0x01FB003E;
        M2C_FIELD(arg0, s32 *, 0x398) = 3;
        M2C_FIELD(arg0, s8 *, 0x378) = 0x20;
        break;
    case 2:
        func_0098CAD0();
        var_s0 = 3;
        break;
    }
    return var_s0;
}
