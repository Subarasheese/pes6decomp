/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008C9B00(s32, M2C_UNK);                /* extern */
M2C_UNK func_008C9CB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CB5D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_008CBFF0(s32);                         /* extern */
M2C_UNK func_008CC320(s32);                         /* extern */
M2C_UNK func_008D1EF0(s32, M2C_UNK);                /* extern */
s32 func_008E0650(s32);                             /* extern */
M2C_UNK func_008EAD60(s32, M2C_UNK);                /* extern */

void func_0036D200(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_008E0650(arg0 + 0x26DC);
    switch (temp_v0) {                              /* irregular */
    case 1:
        func_008C9CB0(arg0 + 0xB0C, 0);
        func_008CB5D0(arg0 + 0xB0C, 0);
        func_008C9B00(arg0 + 0xB0C, -1);
        func_008EAD60(arg0 + 0x24C4, 1);
        func_008CC320(arg0 + 0xB0C);
        return;
    case 2:
        func_008C9CB0(arg0 + 0xB0C, 0);
        func_008CB5D0(arg0 + 0xB0C, 0);
        func_008C9B00(arg0 + 0xB0C, -1);
        func_008EAD60(arg0 + 0x24C4, 0);
        func_008CC320(arg0 + 0xB0C);
        return;
    case 0:
        func_008C9CB0(arg0 + 0xB0C, 1);
        func_008CB5D0(arg0 + 0xB0C, 1);
        func_008C9B00(arg0 + 0xB0C, 0x42001C);
        func_008D1EF0(arg0 + 0xF8C, 1);
        func_008EAD60(arg0 + 0x24C4, 0);
        func_008CBFF0(arg0 + 0xB0C);
        return;
    }
}
