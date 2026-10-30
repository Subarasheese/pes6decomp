/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_00960A30(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 *var_v0_5;
    u8 var_v0_4;
    u8 var_v0_6;
    void *var_v0;
    void *var_v0_3;

    temp_v0_2 = func_00936B90();
    if (temp_v0_2 != 0) {
        var_v1 = temp_v0_2 + 0x3F6C0;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_v0 = NULL;
    } else if (arg0 < 0) {
        var_v0 = NULL;
    } else if (arg0 < 0xA) {
        var_v0 = var_v1 + (arg0 * 0x44) + 0xC;
    } else {
        var_v0 = NULL;
    }
    if (var_v0 != NULL) {
        var_v0_2 = M2C_FIELD(var_v0, s32 *, 0xC);
    } else {
        var_v0_2 = 0;
    }
    if (var_v0_2 == 0) {
        return 3;
    }
    temp_v0_3 = func_00936B90();
    if (temp_v0_3 != 0) {
        var_v1_2 = temp_v0_3 + 0x3F6C0;
    } else {
        var_v1_2 = 0;
    }
    if (var_v1_2 == 0) {
        var_v0_3 = NULL;
    } else if (arg0 < 0) {
        var_v0_3 = NULL;
    } else if (arg0 < 0xA) {
        var_v0_3 = var_v1_2 + (arg0 * 0x44) + 0xC;
    } else {
        var_v0_3 = NULL;
    }
    if (var_v0_3 != NULL) {
        var_v0_4 = M2C_FIELD(var_v0_3, u8 *, 0x41);
    } else {
        var_v0_4 = 0;
    }
    temp_v0_4 = func_00936B90();
    if (temp_v0_4 != 0) {
        var_v1_3 = temp_v0_4 + 0x3F6C0;
    } else {
        var_v1_3 = 0;
    }
    if (var_v1_3 == 0) {
        var_v0_5 = NULL;
    } else if (arg0 < 0) {
        var_v0_5 = NULL;
    } else if (arg0 < 0xA) {
        var_v0_5 = var_v1_3 + (arg0 * 0x44) + 0xC;
    } else {
        var_v0_5 = NULL;
    }
    if (var_v0_5 != NULL) {
        var_v0_6 = *var_v0_5;
    } else {
        var_v0_6 = 0;
    }
    temp_v1 = var_v0_6 & 0xFF;
    temp_v0 = var_v0_4 & 0xFF & 0xFFFF;
    if (temp_v0 >= temp_v1) {
        return temp_v1 >= temp_v0;
    }
    return 2;
}
