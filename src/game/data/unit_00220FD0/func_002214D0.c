/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00221500(s32);                         /* extern */
s32 Pes6Team_GetPlayerId();                                /* extern */

void func_002214D0(void) {
    func_00221500(Pes6Team_GetPlayerId() & 0xFFFF);
}
