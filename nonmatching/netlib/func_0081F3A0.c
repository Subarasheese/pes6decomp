/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4260[];
extern char D_008A4270[];
extern char D_008A4278[];
extern char D_008A4280[];
extern char D_008A4288[];
extern char D_008A4290[];
extern char D_008A4298[];
extern char D_008A42A0[];
extern char D_008A42A8[];
extern char D_008A42B0[];
extern char D_008A42F0[];

s32 func_0081F3A0(void) {
    s32 temp_v0;
    s32 var_a3;
    void *temp_a1;
    void *temp_v1;

    var_a3 = 0;
    do {
        temp_v0 = var_a3 * 4;
        temp_a1 = ((void *)D_008A42B0) + temp_v0;
        temp_v1 = ((void *)D_008A42F0) + temp_v0;
        M2C_FIELD(temp_a1, s8 *, 0) = 0;
        var_a3 += 1;
        M2C_FIELD(temp_v1, s8 *, 0) = 0;
        M2C_FIELD(temp_a1, s8 *, 1) = 0;
        M2C_FIELD(temp_v1, s8 *, 1) = 0;
        M2C_FIELD(temp_a1, s8 *, 2) = 0;
        M2C_FIELD(temp_v1, s8 *, 2) = 0;
        M2C_FIELD(temp_a1, s8 *, 3) = 0;
        M2C_FIELD(temp_v1, s8 *, 3) = 0;
    } while (var_a3 < 0xE);
    (*(s8 *)D_008A4260) = 0;
    (*(s32 *)D_008A4270) = 0;
    (*(s32 *)D_008A4278) = 0;
    (*(s32 *)D_008A4280) = 0;
    (*(s32 *)D_008A4288) = 0;
    (*(s32 *)D_008A4290) = 0;
    (*(s32 *)D_008A4298) = 0;
    (*(s32 *)D_008A42A0) = 0;
    (*(s32 *)D_008A42A8) = 0;
    return 1;
}
