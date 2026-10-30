/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0085F4E0(void *, s32);                     /* extern */
s32 func_00861F40(void *, s32, M2C_UNK);            /* extern */
s32 func_00862040(void *, s32);                     /* extern */

s32 func_00862800(void *arg0) {
    s32 temp_a1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_v0;
    void *temp_v1;

    var_v0 = 0;
    temp_v1 = M2C_FIELD(arg0, void **, 0x37E0);
    temp_a1 = temp_v1 + 0x1B00;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x1B00);
    var_s0 = 0;
    switch (temp_v1_2) {                            /* irregular */
    default:
        var_s0 = -0x46;
        var_v0 = -0x46;
        break;
    case 0x6:
    case 0x4401:
    case 0x5:
    case 0x4:
        var_v0 = func_00862040(arg0, temp_a1);
        break;
    case 0x3004:
    case 0x3002:
        var_v0 = func_00861F40(arg0, temp_a1, 6);
        break;
    case 0x9342:
    case 0x9341:
    case 0x9331:
    case 0x9323:
    case 0x9322:
    case 0x9321:
    case 0x9313:
    case 0x9311:
    case 0x9303:
    case 0x9302:
    case 0x9301:
    case 0x9105:
    case 0x9203:
    case 0x9202:
    case 0x9201:
    case 0x9103:
    case 0x9102:
    case 0x9101:
    case 0x8101:
        var_v0 = func_0085F4E0(arg0, temp_a1);
        break;
    case 0x4704:
        var_s0 = 0x4704;
        break;
    }
    if (var_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 0;
        var_s0 = var_v0;
    }
    return var_s0;
}
