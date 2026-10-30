/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0017F900();                                /* extern */
s32 func_001D5A10(M2C_UNK);                         /* extern */
s32 func_00819E60(s32);                             /* extern */
s32 func_0081A520(s32);                             /* extern */
s32 func_0081BFB0(s32, M2C_UNK *);                  /* extern */
s32 func_0081C780(s32);                             /* extern */
extern char D_008A3CE0[];
extern char D_008A3CE8[];
extern char D_008A3CF0[];
extern char D_008A3CF8[];
extern char D_008A3D08[];
extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];
extern char D_008A3D40[];

s32 func_0081CFD0(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;

    if (func_0017F900() != 1) {
        return 0;
    }
    temp_s0 = func_001D5A10(0x103D8);
    temp_s2 = func_001D5A10(0x103D1);
    temp_s1 = func_001D5A10(0x103C8);
    temp_v0 = func_00819E60(temp_s0);
    (*(s32 *)D_008A3CE0) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)D_008A3D08) = 0;
        return 1;
    }
    temp_v0_2 = func_0081BFB0(temp_s2, ((void *)D_008A3D40));
    (*(s32 *)D_008A3CF0) = temp_v0_2;
    if (temp_v0_2 == 0) {
        (*(s32 *)D_008A3D08) = 0;
        return 1;
    }
    temp_v0_3 = func_0081A520(temp_s0);
    (*(s32 *)D_008A3CE8) = temp_v0_3;
    if (temp_v0_3 == 0) {
        (*(s32 *)D_008A3D08) = 0;
        return 1;
    }
    temp_v0_4 = func_0081C780(temp_s1);
    (*(s32 *)D_008A3CF8) = temp_v0_4;
    if (temp_v0_4 == 0) {
        (*(s32 *)D_008A3D08) = 0;
        return 1;
    }
    (*(s32 *)D_008A3D18) = 1;
    (*(s32 *)D_008A3D08) = 1;
    (*(s8 *)D_008A3D20) = 0;
    (*(s32 *)D_008A3D28) = 0;
    (*(s32 *)D_008A3D30) = 0;
    return 1;
}
