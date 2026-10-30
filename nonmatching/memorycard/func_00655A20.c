/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065E890[];
extern char D_0065E894[];
extern char D_0065E898[];
extern char D_0065EB70[];
extern char D_0065EDC0[];

void func_00655A20(void) {
    M2C_UNK *var_a2;
    s32 var_a3;

    var_a3 = 0;
    var_a2 = ((void *)D_0065EB70);
    do {
        if ((var_a3 >= 0) && (var_a3 < 0xA)) {
            M2C_FIELD(var_a2, f32 *, 0x1C4) = (f32) (*(f32 *)D_0065E890);
            M2C_FIELD(((void *)D_0065EDC0), s8 *, 0xB8) = 1;
            M2C_FIELD(var_a2, f32 *, 0x1C8) = (f32) (*(f32 *)D_0065E894);
            M2C_FIELD(var_a2, f32 *, 0x1CC) = (f32) (*(f32 *)D_0065E898);
        }
        var_a3 += 1;
        var_a2 += 0xC;
    } while (var_a3 < 0xA);
}
