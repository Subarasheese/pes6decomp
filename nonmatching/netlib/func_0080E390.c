/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_003710E0(s64);                         /* extern */
M2C_UNK func_00802880(s32, s32);                    /* extern */
M2C_UNK func_008028A0(s32, s32);                    /* extern */
s32 func_00825610();                                /* extern */
s64 func_00842760();                                /* extern */
s64 func_008427D0();                                /* extern */
s64 func_008427E0();                                /* extern */
s8 func_008427F0();                                 /* extern */
s8 func_00842840();                                 /* extern */
s64 func_00842850();                                /* extern */
s64 func_00842880();                                /* extern */
s8 func_008428A0();                                 /* extern */
extern char D_00591BBB[];
extern char D_00591BBD[];
extern char D_00591BBE[];
extern char D_00591BBF[];
extern char D_00591BC0[];
extern char D_00591BC3[];

void func_0080E390(void) {
    s32 temp_v0;
    s32 var_s1;
    s64 temp_s0;
    s64 temp_v1;

    temp_v0 = func_00825610();
    if ((temp_v0 != 6) && (temp_v0 != 5) && (temp_v0 != 4)) {
        return;
    }
    if (((s64) (func_008427D0() << 0x38) >> 0x38) == 0) {
        (*(s8 *)D_00591BBE) = 1;
    } else {
        (*(s8 *)D_00591BBE) = 0;
    }
    (*(s8 *)D_00591BBD) = func_008427F0();
    temp_v1 = (s64) (func_008427E0() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 3:
        (*(s8 *)D_00591BBF) = 2;
        (*(s8 *)D_00591BBD) = 1;
        break;
    case 2:
        (*(s8 *)D_00591BBF) = 1;
        (*(s8 *)D_00591BBD) = 1;
        break;
    case 1:
        (*(s8 *)D_00591BBF) = 0;
        break;
    default:
        *(s8 *)0x591BBF = 0;
        (*(s8 *)D_00591BBD) = 0;
        break;
    }
    (*(s8 *)D_00591BC0) = func_008428A0();
    if (((s64) (func_00842850() << 0x38) >> 0x38) == 0) {
        (*(s8 *)D_00591BBB) = 1;
    } else {
        (*(s8 *)D_00591BBB) = 0;
    }
    (*(s8 *)D_00591BC3) = func_00842840();
    func_003710E0((s64) (func_00842760() << 0x38) >> 0x38);
    var_s1 = 0;
    temp_s0 = (s64) (func_00842880() << 0x38) >> 0x38;
    do {
        func_008028A0(var_s1 & 0xFF, temp_s0 & 0xFF);
        func_00802880(var_s1 & 0xFF, temp_s0 & 0xFF);
        var_s1 += 1;
    } while (var_s1 < 2);
}
