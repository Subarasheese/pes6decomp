/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00103E38(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_00142AF0(M2C_UNK *);                   /* extern */
M2C_UNK func_00142B60(M2C_UNK);                     /* extern */
M2C_UNK func_00142B70(M2C_UNK);                     /* extern */
M2C_UNK func_00143370();                            /* extern */
extern char D_00376410[];
extern char D_00376420[];
extern char D_00376430[];
extern char D_00376440[];
extern char D_00376450[];
extern char D_00376460[];
extern char D_004FDD60[];
extern char D_004FDD70[];
extern char D_004FDD80[];
extern char D_004FDD90[];
extern char D_004FDDA0[];
extern char D_004FDDB0[];
extern char D_004FDF00[];
extern char D_0050AD40[];

void func_001413B0(void) {
    func_00103E38(((void *)D_004FDD80), ((void *)D_00376410));
    func_00103E38(((void *)D_004FDD90), ((void *)D_00376420));
    func_00103E38(((void *)D_004FDD60), ((void *)D_00376430));
    func_00103E38(((void *)D_004FDD70), ((void *)D_00376440));
    func_00103E38(((void *)D_004FDDA0), ((void *)D_00376450));
    func_00103E38(((void *)D_004FDDB0), ((void *)D_00376460));
    (*(s32 *)D_004FDF00) = 0x70000000;
    func_00142B70(0);
    func_00142B60(0);
    func_00142AF0(((void *)D_0050AD40));
    func_00143370();
}
