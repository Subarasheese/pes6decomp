/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
M2C_UNK func_00182BD0();                            /* extern */
M2C_UNK func_001A2E30();                            /* extern */
extern char D_0051FF64[];
extern char D_0051FF80[];
extern char D_0051FF84[];
extern char D_0051FF88[];
extern char D_0051FF8C[];
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];
extern char D_0051FF9C[];
extern char D_0051FFA0[];
extern char D_0051FFA4[];
extern char D_00520358[];

void func_001A1EA0(void) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    func_00182BD0();
    var_s1 = 0;
    var_s0 = ((void *)D_00520358);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_00145590(temp_a0);
            func_00153FA0(*var_s0);
            *var_s0 = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    if ((*(s32 *)D_0051FF64) != 0) {
        func_00153FA0((*(s32 *)D_0051FF64));
        (*(s32 *)D_0051FF64) = 0;
    }
    func_001A2E30();
    if ((*(s32 *)D_0051FF9C) != 0) {
        func_00153FA0((*(s32 *)D_0051FF9C));
        (*(s32 *)D_0051FF9C) = 0;
    }
    if ((*(s32 *)D_0051FFA0) != 0) {
        func_00153FA0((*(s32 *)D_0051FFA0));
        (*(s32 *)D_0051FFA0) = 0;
    }
    if ((*(s32 *)D_0051FFA4) != 0) {
        func_00153FA0((*(s32 *)D_0051FFA4));
        (*(s32 *)D_0051FFA4) = 0;
    }
    if ((*(s32 *)D_0051FF80) != 0) {
        func_00153FA0((*(s32 *)D_0051FF80));
        (*(s32 *)D_0051FF80) = 0;
    }
    if ((*(s32 *)D_0051FF84) != 0) {
        func_00153FA0((*(s32 *)D_0051FF84));
        (*(s32 *)D_0051FF84) = 0;
    }
    if ((*(s32 *)D_0051FF88) != 0) {
        func_00153FA0((*(s32 *)D_0051FF88));
        (*(s32 *)D_0051FF88) = 0;
    }
    if ((*(s32 *)D_0051FF8C) != 0) {
        func_00153FA0((*(s32 *)D_0051FF8C));
        (*(s32 *)D_0051FF8C) = 0;
    }
    if ((*(s32 *)D_0051FF90) != 0) {
        func_00153FA0((*(s32 *)D_0051FF90));
        (*(s32 *)D_0051FF90) = 0;
    }
    if ((*(s32 *)D_0051FF94) != 0) {
        func_00153FA0((*(s32 *)D_0051FF94));
        (*(s32 *)D_0051FF94) = 0;
    }
    if ((*(s32 *)D_0051FF98) != 0) {
        func_00153FA0((*(s32 *)D_0051FF98));
        (*(s32 *)D_0051FF98) = 0;
    }
}
