/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_008A43A0[];
extern char D_008A43A8[];
extern char D_008A43B0[];
extern char D_008A43C0[];
extern char D_008A43C8[];
extern char D_008A43D0[];
extern char D_008A4BC0[];
extern char D_008A5F70[];

s32 func_0082BE90(void) {
    s32 var_a0;
    void *temp_v0;

    if ((*(s32 *)D_008A43C8) == 0) {

    } else {
        (*(s8 *)D_008A43B0) = 0;
        (*(s32 *)D_008A43D0) = 0;
        (*(s32 *)D_008A43C0) = 0;
        (*(s32 *)D_008A43A8) = 0;
        (*(s32 *)D_008A43A0) = 0;
        func_001C48E8(((void *)D_008A4BC0), 0, 0x410);
        var_a0 = 0;
        (*(s32 *)D_008A4BC0) = 0;
        do {
            temp_v0 = ((void *)D_008A5F70) + (var_a0 * 4);
            var_a0 += 1;
            M2C_FIELD(temp_v0, s32 *, 0x3744) = 0;
        } while (var_a0 < 0x64);
    }
    return 4;
}
