/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D6D70(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
s32 func_008B9430();                                /* extern */
s32 func_008C1490(M2C_UNK, s8 *);                   /* extern */

void func_008D48E0(s32 arg0, s32 arg1) {
    s8 sp40;
    s32 temp_s0;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 0x10;
    var_v1 = &sp40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s0 = func_008C1490(0x36, &sp40);
    switch (arg1) {                                 /* irregular */
    case 9:
        func_001D7D80(temp_s0, 3);
        break;
    case 3:
        if (func_008B9430() == 0) {
            func_001D7D80(temp_s0, 4);
        } else {
        case 2:
            func_001D7D80(temp_s0, 2);
        }
        break;
    case 1:
    case 5:
        func_001D7D80(temp_s0, 1);
        break;
    }
    func_001D6D70(temp_s0, 0x89, arg0);
    func_001D7F10(temp_s0);
}
