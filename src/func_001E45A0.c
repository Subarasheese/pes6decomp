/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0052AF10[];
extern char D_0052AF14[];

void func_001E45A0(void) {
    if ((*(s32 *)D_0052AF14) != 0) {
        func_00153FA0((*(s32 *)D_0052AF14));
    }
    func_001C48E8(((void *)D_0052AF10), 0, 8);
}
