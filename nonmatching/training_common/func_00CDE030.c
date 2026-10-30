/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002646D0(int);
M2C_UNK func_002646E0(s32);                         /* extern */
s32 func_00CCE370(s32, M2C_UNK);                    /* extern */
s32 func_00CE2880();                                /* extern */
s32 func_00CE28D0(s32);                             /* extern */
s32 func_00CE2A60(s32);                             /* extern */
M2C_UNK func_00CE42B0(s8 *, M2C_UNK);               /* extern */
M2C_UNK func_00CE44F0(s32);                         /* extern */
M2C_UNK func_00CE9B90();                            /* extern */
M2C_UNK func_00CE9E40();                            /* extern */

s32 func_00CDE030(s32 arg0) {
    s8 sp2C;
    s32 temp_v1;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp2C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 3:
        if (func_00CE28D0(arg0) != 0) {
            func_00CE9E40();
            func_00CE44F0(arg0);
        }
        break;
    case 1:
        if (func_00CCE370(arg0, 1) != 0) {
            func_00CE9B90();
            func_002646E0(arg0);
        }
        break;
    case 0:
        func_00CE42B0(&sp2C, 1);
        func_002646E0(arg0);
        break;
    case 2:
        if (func_00CE2A60(func_00CE2880()) != 0) {
            func_002646E0(arg0);
        }
        break;
    }
    return 0;
}
