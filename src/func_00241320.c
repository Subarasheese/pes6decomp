/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001FA5A0();                            /* extern */
M2C_UNK func_001FAF40(M2C_UNK, u16);                /* extern */
M2C_UNK func_0023D8A0(u16, u16);                    /* extern */
M2C_UNK func_0023EA80();                            /* extern */
M2C_UNK func_00244E30();                            /* extern */
M2C_UNK func_00256330();                            /* extern */
M2C_UNK func_00291A50();                            /* extern */
M2C_UNK func_00361A10();                            /* extern */
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591C09[];

void func_00241320(void) {
    func_00291A50();
    if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 1) && ((*(u8 *)D_00591C09) != 2)) {
        func_0023D8A0((*(u16 *)D_00591BB0), (*(u16 *)D_00591BB2));
        func_00256330();
        func_001FA5A0();
        func_001FAF40(0, (*(u16 *)D_00591BB0));
        func_001FAF40(1, (*(u16 *)D_00591BB2));
    }
    func_00361A10();
    func_00244E30();
    func_0023EA80();
}
