/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002646D0(void *);                          /* extern */
M2C_UNK func_002646E0(void *);                      /* extern */
M2C_UNK func_00264790(void *, M2C_UNK);             /* extern */
M2C_UNK func_002648E0(void *);                      /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_00824110(s32);                         /* extern */
s32 func_00824160();                                /* extern */
s32 func_00825A80();                                /* extern */
M2C_UNK func_00B2A370(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00BA18D0(M2C_UNK *);                   /* extern */
M2C_UNK func_00C90690();                            /* extern */
s32 func_00CD0A60(void *, M2C_UNK);                 /* extern */
extern char Pes6MatchPlayers[];
extern char D_005E3934[];

void func_00CD1AF0(void *arg0) {
    s32 temp_v1;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s0 = 1;
        break;
    case 1:
        var_s2 = 0;
        if (M2C_FIELD(arg0, s32 *, 0xC0) == 3) {
            if (func_00CD0A60(arg0, 1) != 0) {
                var_s2 = 1;
            }
        } else {
            var_s2 = 1;
        }
        if (var_s2 != 0) {
            func_002646E0(arg0);
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x2B0) = 0;
        func_00824110(func_00824160());
        func_00B2A370(((void *)D_005E3934), 6);
        if (func_00825A80() > 0) {
            func_00C90690();
        }
        func_00BA18D0(((void *)Pes6MatchPlayers));
        func_002646E0(arg0);
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC0) != 3) {
            func_00264790(arg0, 0x2B);
        } else {
            func_00264790(arg0, 0x24);
        }
    }
}
