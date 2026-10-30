/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226710(void);
extern void func_00AE3AB0(void);
M2C_UNK func_0097D0E0(s32);                         /* extern */
M2C_UNK func_0098FE40();                            /* extern */
M2C_UNK func_00AE2BA0();                            /* extern */
M2C_UNK func_00AE3440();                            /* extern */
M2C_UNK func_00AE3790();                            /* extern */
M2C_UNK func_00AE3EF0();                            /* extern */
M2C_UNK func_00AE4280();                            /* extern */

void func_00AE4960(void) {
    s32 temp_v1;

    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0x29:
    case 0x28:
        func_00AE4280();
        break;
    case 0x2F:
        func_00AE3EF0();
        break;
    case 0x32:
        func_00AE3AB0();
        break;
    case 0x34:
        func_00AE3440();
        break;
    case 0x36:
        func_00AE3790();
        break;
    }
    func_00AE2BA0();
    func_0098FE40();
    func_0097D0E0(func_00226710());
}
