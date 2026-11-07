/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001034E0(M2C_UNK *);                   /* extern */
M2C_UNK func_00103698(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00144CA0(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern char D_0052AB10[];
extern char D_0052AB30[];

void func_001CEC70(void) {
    func_00103698(((void *)D_0052AB10), 0);
    func_001034E0(((void *)D_0052AB10));
    func_00144CA0(1, 1, (*(s32 *)D_0052AB30), 1);
}
