/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_0052AB70[];

void func_001D9CC0(void) {
    if ((*(s32 *)D_0052AB70) != 0) {
        func_00153FA0((*(s32 *)D_0052AB70));
        (*(s32 *)D_0052AB70) = 0;
    }
    func_001C48E8(((void *)D_0052AB70), 0, 0x14);
}
