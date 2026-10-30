/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154490(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_001B7A90();                            /* extern */
M2C_UNK func_001B7ED0(f32 *, M2C_UNK);              /* extern */
s32 func_001F87E0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0(s32);                         /* extern */
M2C_UNK func_008048F0();                            /* extern */
s32 func_00804900();                                /* extern */
M2C_UNK func_00C82290();                            /* extern */
M2C_UNK func_00C86B10(M2C_UNK);                     /* extern */
M2C_UNK func_00C8A470();                            /* extern */
M2C_UNK func_00C8AA10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
M2C_UNK func_00CF4AC0();                            /* extern */
M2C_UNK func_00CF4BC0();                            /* extern */
M2C_UNK func_00CF4CB0();                            /* extern */
extern char D_00814400[];
extern char D_00814404[];

s32 func_00809290(s32 *arg0) {
    f32 sp38;
    f32 sp3C;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_s1;

    var_s1 = 0;
    temp_s0 = *arg0;
    func_002648F0(temp_s0);
    temp_v1 = func_002646D0(temp_s0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_00C8AA10(0, 1);
        func_002646E0(temp_s0);
        break;
    case 1:
        sp38 = (*(f32 *)D_00814400);
        sp3C = (*(f32 *)D_00814404);
        func_001B7ED0(&sp38, 1);
        func_008048F0();
        func_00CF4CB0();
        func_002646E0(temp_s0);
        /* fallthrough */
    case 2:
        func_00C82290();
        if (func_001F87E0(0, 0x20) != 0) {
            func_002646E0(temp_s0);
        }
        break;
    case 3:
        func_00CF4BC0();
        if ((func_00804900() == 0) && (func_00154490(0, 0x4000) != 0)) {
            func_00CD7A00(3);
            func_002646E0(temp_s0);
        }
        break;
    case 4:
        func_001B7A90();
        func_00CF4AC0();
        func_00C8A470();
        func_00C86B10(0);
        var_s1 = 1;
        break;
    }
    func_002648E0(temp_s0);
    func_00C82290();
    return var_s1;
}
