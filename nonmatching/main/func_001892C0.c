/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00520090;
extern char D_005200B0[];
extern s32 *D_005200C0;
extern char D_005200C4[];
extern char D_005200C8[];
extern char D_005200CC[];

void func_001892C0(void) {
    s32 **var_a7;
    s32 *temp_a0;
    s32 *var_a3;
    s32 var_a1;
    s32 var_a5;
    s8 *var_a6;
    s8 var_a2;

    var_a7 = &D_005200C0;
    var_a6 = ((void *)D_005200B0);
    var_a5 = 0;
    (*(s32 *)D_005200C4) = M2C_FIELD(D_00520090, s32 *, 0);
    (*(s32 *)D_005200CC) = M2C_FIELD(D_00520090, s32 *, 4);
    (*(s32 *)D_005200C8) = M2C_FIELD(D_00520090, s32 *, 8);
    D_005200C0 = M2C_FIELD(D_00520090, s32 **, 0xC);
    do {
        temp_a0 = *var_a7;
        var_a2 = 0;
        var_a1 = 0;
        var_a3 = temp_a0 + 4;
        if (*temp_a0 > 0) {
            do {
                var_a1 += 1;
                M2C_FIELD(var_a3, s16 *, 0x3E) = 0;
                var_a2 = (var_a2 | M2C_FIELD(var_a3, u8 *, 0x3C)) & 0xFF;
                var_a3 += 0x40;
            } while (var_a1 < *temp_a0);
        }
        var_a5 += 1;
        *var_a6 = var_a2;
        var_a7 += 4;
        var_a6 += 1;
    } while (var_a5 < 4);
}
