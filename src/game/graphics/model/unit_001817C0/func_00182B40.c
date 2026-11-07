/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001514D0(s32);                         /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
extern char D_0051FF68[];

void func_00182B40(void) {
    func_001514D0((*(s32 *)D_0051FF68));
    func_00153FA0((*(s32 *)D_0051FF68));
    (*(s32 *)D_0051FF68) = 0;
}
