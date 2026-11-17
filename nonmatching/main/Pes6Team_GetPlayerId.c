/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00210DF0();                                /* extern */
u16 *func_002232E0(s32, s32);                       /* extern */
u16 *func_00223420(s32, s32);                       /* extern */
u16 func_00224150(s32, s32, s32);                   /* extern */
u16 func_00224A80(s32, s32);                        /* extern */
s32 func_00225720();                                /* extern */
s32 func_00237530(s32);                             /* extern */
u16 func_00AF6340(s32);                             /* extern */
u16 func_00AF70F0(s32, s32);                        /* extern */
extern char D_00591C09[];

u16 Pes6Team_GetPlayerId(s32 arg0, s32 arg1, s32 arg2) {
    s32 v;
    s32 i;
    s32 var_s1;
    u16 *p;

    var_s1 = arg2;
    if ((var_s1 != 0) && (var_s1 != 1) && (var_s1 != 2)) {
        var_s1 = 0;
    }
    if (func_00210DF0() == 2) {
        v = arg0 & 0xFFFF;
        if ((v >= 0xFE) && (v < 0x10E)) {
            return func_00224150(arg0, arg1, var_s1 & 0xFF);
        }
    } else if (func_00210DF0() == 1) {
        v = arg0 & 0xFFFF;
        if ((v >= 0xCC) && (v < 0xDD)) {
            return func_00AF70F0(arg0, arg1);
        }
        if (((*(u8 *)D_00591C09) == 0xE) && (v == (func_00225720() & 0xFFFF))) {
            return func_00AF6340(arg1);
        }
    }
    v = arg0 & 0xFFFF;
    i = arg1 & 0xFF;
    if ((((v >= 0x40) && (v < 0xCC)) || ((v >= 0x113) && (v < 0x118)) || (v == 0x126) || (v == 0x127) || (v == 0x112)) && (i >= 0x20)) {
        return 0;
    }
    if ((v < 0x40) && (i >= 0x17)) {
        return 0;
    }
    if (((v == 0x123) || (v == 0x124) || (v == 0x125)) && (i < 0x20)) {
        return (u16) (i + (((v - 0x123) << 5) + 0x7000));
    }
    if (((u32) (v - 0x126) < 2U) && (i < 0x20)) {
        return M2C_FIELD((i * 2) + func_00237530(arg0), u16 *, 0x1134);
    }
    if ((v >= 0x40) && (v < 0xCC) && (i < 0x20)) {
        if (var_s1 == 0) {
            if ((*(u8 *)D_00591C09) != 4) {
                p = func_00223420(arg0, arg1);
                return p != NULL ? *p : 0;
            }
            if (v != 0x127) {
                return func_00224A80(arg0, arg1);
            }
            return i + 0x7080;
        }
        if (var_s1 == 1) {
            p = func_00223420(arg0, arg1);
            return p != NULL ? *p : 0;
        }
        p = func_002232E0(arg0, arg1);
        return p != NULL ? *p : 0;
    }
    if ((v == 0x112) && (i < 0x20)) {
        p = func_00223420(arg0, arg1);
        return p != NULL ? *p : 0;
    }
    if ((v >= 0x113) && (v < 0x118) && (i < 0x20)) {
        p = func_00223420(arg0, arg1);
        return p != NULL ? *p : 0;
    }
    if ((u32) (v - 0x110) < 2U) {
        p = func_00223420(arg0, arg1);
        return p != NULL ? *p : 0;
    }
    if (var_s1 != 0) {
        p = func_002232E0(arg0, arg1);
        return p != NULL ? *p : 0;
    }
    p = func_00223420(arg0, arg1);
    return p != NULL ? *p : 0;
}
