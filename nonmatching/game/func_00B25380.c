/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEB4[];
extern char D_00CBBEB8[];
extern char D_00CBBEBC[];
extern char D_00CBBEC0[];
extern char D_00CBBEC4[];

void func_00B25380(s32 arg0) {
    s32 temp_a6;

    temp_a6 = 0 & 1;
    (*(s32 *)D_00CBBEB4) = arg0;
    (*(u8 *)D_00CBBEB8) = ((*(u8 *)D_00CBBEB8) & ~1) | temp_a6;
    (*(u8 *)D_00CBBEBC) = ((*(u8 *)D_00CBBEBC) & ~1) | temp_a6;
    (*(u8 *)D_00CBBEB8) = ((*(u8 *)D_00CBBEB8) & ~2) | 2;
    (*(s32 *)D_00CBBEC4) = 0xFF;
    (*(u8 *)D_00CBBEBC) = ((*(u8 *)D_00CBBEBC) & ~2) | (temp_a6 * 2);
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~2) | 2;
    (*(u8 *)D_00CBBEBC) = ((*(u8 *)D_00CBBEBC) & ~4) | 4;
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~1) | 1;
    (*(u8 *)D_00CBBEC0) = ((*(u8 *)D_00CBBEC0) & ~4) | (temp_a6 * 4);
}
