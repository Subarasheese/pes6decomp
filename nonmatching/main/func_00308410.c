/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_001C47E0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00802920();                            /* extern */
M2C_UNK func_008442F0();                            /* extern */
M2C_UNK func_0085AB90();                            /* extern */
M2C_UNK func_00884CF0();                            /* extern */
extern char D_005EFDC0[];
extern char D_005EFDD0[];
extern char D_005EFDF1[];
extern char D_008B1558[];

void func_00308410(void) {
    func_001C47E0(((void *)D_005EFDD0), ((void *)D_005EFDC0), 0x10);
    if ((*(s8 *)D_005EFDF1) != 0) {
        func_00802920();
        if (func_002DCA30() != 0) {
            func_001C48E8(((void *)D_008B1558), 0, 5);
            func_00884CF0();
            func_008442F0();
        }
        func_0085AB90();
    }
    M2C_FIELD(((void *)D_005EFDC0), M2C_UNK (**)(), 0x24)();
    M2C_FIELD(((void *)D_005EFDC0), M2C_UNK (**)(M2C_UNK *), 0x20)(((void *)D_005EFDC0));
    M2C_FIELD(((void *)D_005EFDC0), M2C_UNK (**)(), 0x28)();
}
