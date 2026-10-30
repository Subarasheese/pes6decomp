/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_00188A50();                                /* extern */
M2C_UNK func_001AA620(s32);                         /* extern */
M2C_UNK func_0020B600(u8);                          /* extern */
s32 func_002646D0(s32);                             /* extern */
M2C_UNK func_002646E0(s32);                         /* extern */
M2C_UNK func_00264790(s32, M2C_UNK);                /* extern */
M2C_UNK func_002648E0(s32);                         /* extern */
M2C_UNK func_002648F0();                            /* extern */
M2C_UNK func_00271EC0();                            /* extern */
M2C_UNK func_00271FB0();                            /* extern */
M2C_UNK func_00272170();                            /* extern */
s32 func_00351E90(u8);                              /* extern */
extern char D_00591BB4[];
extern char D_00591BB7[];
extern char D_00591BCA[];

s32 func_00CD4B80(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0();
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_00264790(arg0, 0);
        /* fallthrough */
    case 0:
        func_001AA620(func_00188A50());
        if (((*(u8 *)D_00591BB7) == 2) && (func_00351E90((*(u8 *)D_00591BB4)) == 1)) {
            (*(u8 *)D_00591BCA) = 1;
        }
        func_0020B600((*(u8 *)D_00591BCA));
        func_00272170();
        func_002646E0(arg0);
        /* fallthrough */
    case 1:
        if (func_0017F900() != 0) {
            func_002646E0(arg0);
        case 2:
            func_00271FB0();
            func_002646E0(arg0);
        case 3:
            func_00271EC0();
            func_002646E0(arg0);
        case 4:
            var_s0 = 1;
        }
        break;
    }
    func_002648E0(arg0);
    return var_s0;
}
