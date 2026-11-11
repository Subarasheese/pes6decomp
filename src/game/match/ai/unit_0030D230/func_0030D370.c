/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK SD_call(M2C_UNK);                     /* extern */
extern char Pes6Input_EventsDefault[];

s32 func_0030D370(void) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)Pes6Input_EventsDefault) & 0x1000;
    if (temp_s0 != 0) {
        SD_call(0x84008401);
    }
    return temp_s0;
}
