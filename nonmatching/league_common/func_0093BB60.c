/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00210DF0();                                /* extern */
M2C_UNK func_00220240(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_009380C0();                            /* extern */
extern char D_009C9700[];
extern char D_00A60CE0[];
extern char D_00A61370[];
extern char D_00A62090[];

void func_0093BB60(void) {
    func_00220240(((void *)D_00A62090), 7);
    func_00220240(((void *)D_00A61370), 6);
    func_00220240(((void *)D_00A60CE0), 4);
    func_00220240(((void *)D_009C9700), 2);
    if (func_00210DF0() == 2) {
        func_009380C0();
    }
}
