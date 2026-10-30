/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00874D40(s32 *, s32);                  /* extern */
M2C_UNK func_00875110(s32 *, s32, s32);             /* extern */
M2C_UNK func_008751C0(s32 *, s32);                  /* extern */
M2C_UNK func_00875240(s32 *, s32, s32);             /* extern */
M2C_UNK func_00875380(s32 *, s32);                  /* extern */
M2C_UNK func_00875400(s32 *, s32);                  /* extern */
M2C_UNK func_008754F0(s32 *, s32, s32);             /* extern */
M2C_UNK func_00875610(s32 *, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_00875720(s32 *, s32);                  /* extern */
M2C_UNK func_00875800(s32 *, s32);                  /* extern */
M2C_UNK func_008758E0(s32 *, s32);                  /* extern */
M2C_UNK func_00875AF0(s32 *, s32);                  /* extern */
M2C_UNK func_00875BE0(s32 *, s32);                  /* extern */
M2C_UNK func_00875D60(s32 *, s32, s32);             /* extern */
s32 func_00875EC0(s32 *, s32);                      /* extern */

s32 func_0085F4E0(s32 arg0, s32 *arg1) {
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = *arg1;
    var_s0 = 0;
    switch (temp_a0) {                              /* irregular */
    case 0x9341:
        func_008751C0(arg1, arg0 + 0x4830);
        break;
    case 0x9331:
        func_00875240(arg1, arg0 + 0x4830, arg0 + 0x153C8);
        break;
    case 0x9323:
        var_s0 = 0x9323;
        break;
    case 0x9322:
        func_00875380(arg1, arg0 + 0x152AC);
        break;
    case 0x9321:
        func_00875400(arg1, arg0 + 0x4830);
        break;
    case 0x9313:
        func_00874D40(arg1, arg0 + 0x4830);
        break;
    case 0x9311:
        func_008754F0(arg1, arg0 + 0x4830, arg0 + 0x153C8);
        break;
    case 0x9303:
        var_s0 = 0x9303;
        break;
    case 0x9302:
        func_00875610(arg1, arg0 + 0x152AD, arg0 + 0x153AC, arg0 + 0x153B8, arg0 + 0x153BC, arg0 + 0x153C0, arg0 + 0x153C4);
        break;
    case 0x9301:
        func_00875720(arg1, arg0 + 0x4830);
        break;
    case 0x9105:
        func_00875800(arg1, arg0 + 0x4830);
        break;
    case 0x9203:
        var_s0 = 0x9203;
        break;
    case 0x9202:
        func_008758E0(arg1, arg0 + 0x14550);
        break;
    case 0x9201:
        func_00875AF0(arg1, arg0 + 0x4830);
        break;
    case 0x9103:
        var_s0 = 0x9103;
        break;
    case 0x9102:
        func_00875BE0(arg1, arg0 + 0x13DCC);
        break;
    case 0x9101:
        func_00875D60(arg1, arg0 + 0x13DCC, arg0 + 0x4830);
        break;
    case 0x8101:
        var_s0 = func_00875EC0(arg1, arg0 + 0x4830);
        break;
    default:
        var_s0 = -0x46;
        break;
    case 0x9342:
        func_00875110(arg1, arg0 + 0x152AE, arg0 + 0x153AA);
        break;
    }
    return var_s0;
}
