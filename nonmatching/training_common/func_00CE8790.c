/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CE4D30(s32);                             /* extern */
M2C_UNK func_00CE4D70(s32);                         /* extern */
M2C_UNK func_00CE4EC0();                            /* extern */
s32 func_00CE59C0();                                /* extern */
M2C_UNK func_00CE70E0();                            /* extern */
M2C_UNK func_00CE7DA0();                            /* extern */
M2C_UNK func_00CE85A0();                            /* extern */
M2C_UNK func_00CE9490();                            /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_00CE8840;
extern M2C_UNK func_00CE8880;
extern M2C_UNK func_00CE88C0;
extern M2C_UNK func_00CE8920;

void func_00CE8790(void) {
    func_00CE9F00(1, 0, &func_00CE8920);
    func_00CE9F00(1, 1, &func_00CE88C0);
    func_00CE9F00(1, 0xC, &func_00CE8880);
    func_00CE9F00(1, 0xD, &func_00CE8840);
    func_00CE85A0();
    func_00CE9490();
    func_00CE70E0();
    func_00CE4EC0();
    func_00CE7DA0();
    func_00CE4D70(func_00CE4D30(func_00CE59C0()));
}
