/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6MemRegion_Release(s32);                         /* extern */
s32 Pes6Module_GetRegion(M2C_UNK);                         /* extern */
extern char D_005E5E10[];

void Pes6Title_Unload(void) {
    Pes6MemRegion_Release(Pes6Module_GetRegion(8));
    (*(s32 *)D_005E5E10) = 0;
}
