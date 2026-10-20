/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001CDC50(s32, s32, s32, M2C_UNK *);    /* extern */
M2C_UNK func_001CDD70(M2C_UNK *);                   /* extern */
M2C_UNK func_001CDDB0();                            /* extern */
M2C_UNK func_00260BB0(M2C_UNK *);                   /* extern */
extern char D_0058D328[];
extern char D_0058D338[];
extern char D_0058D33C[];
extern char D_0058D354[];

void func_00261060(void) {
    M2C_UNK sp1C;

    func_001CDDB0();
    func_00260BB0(&sp1C);
    func_001CDD70(&sp1C);
    func_001CDC50((*(s32 *)D_0058D328), (*(s32 *)D_0058D338), (*(s32 *)D_0058D33C), ((void *)D_0058D354));
}
