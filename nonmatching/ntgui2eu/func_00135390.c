/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011EDC0(s32);                         /* extern */
M2C_UNK func_00135098();                            /* extern */
M2C_UNK func_00156E10();                            /* extern */
M2C_UNK func_00158180();                            /* extern */
M2C_UNK func_00158700();                            /* extern */
M2C_UNK func_00158858();                            /* extern */
M2C_UNK func_00159608();                            /* extern */
extern char D_011D7468[];

void func_00135390(void) {
    func_00135098();
    func_0011EDC0((*(s32 *)D_011D7468));
    func_00158180();
    func_00158700();
    if ((*(s32 *)D_011D7468) & 1) {
        func_00156E10();
    }
    func_00158858();
    func_00159608();
}
