/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_00BA1950(M2C_UNK *);                   /* extern */
M2C_UNK func_00BA19C0(M2C_UNK *);                   /* extern */
M2C_UNK func_00BA1B00(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];

void func_00804700(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00BA1B00(((void *)Pes6MatchPlayers));
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        func_00BA19C0(((void *)Pes6MatchPlayers));
        func_002646E0(arg0);
        /* fallthrough */
    case 2:
        if (func_0017F900() != 0) {
            func_002646E0(arg0);
        }
        break;
    case 3:
        func_00BA1950(((void *)Pes6MatchPlayers));
        func_002646E0(arg0);
        /* fallthrough */
    case 4:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790(arg0, 2);
    }
}
