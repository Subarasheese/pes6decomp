/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C92F60(M2C_UNK, s32, s32, f32);      /* extern */
extern char D_00D000B0[];
extern char D_00D000B4[];
extern char D_00D000BC[];

s32 func_00CF5CB0(void) {
    s32 temp_v1;

    if (((*(s32 *)D_00D000B4) > 0) && ((*(s32 *)D_00D000B0) < (*(s32 *)D_00D000B4)) && ((*(s32 *)D_00D000BC) != 0)) {
        func_00C92F60(0, (*(s32 *)D_00D000B0), (*(s32 *)D_00D000B4), (((f32) ((*(s32 *)D_00D000B4) - (*(s32 *)D_00D000B0)) / (f32) (*(s32 *)D_00D000B4)) * (f32) (*(s32 *)D_00D000BC)) / 168.0f);
    }
    if ((*(s32 *)D_00D000B0) <= 0) {
        return 0;
    }
    temp_v1 = (*(s32 *)D_00D000B0) - 1;
    (*(s32 *)D_00D000B0) = temp_v1;
    if (temp_v1 <= 0) {
        (*(s32 *)D_00D000B0) = 0;
    }
    return 1;
}
