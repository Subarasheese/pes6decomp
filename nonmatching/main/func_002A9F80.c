/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002A8B80(f32);
M2C_UNK func_002A8940(M2C_UNK, f32);                /* extern */
extern char D_005E1D20[];
extern char D_005E2520[];
extern char D_005E2674[];
extern char D_005E2680[];
extern char D_005E2684[];
extern char D_005E2688[];

void func_002A9F80(void) {
    f32 var_f12;
    s32 var_a0;

    (*(s32 *)D_005E2688) = 0x442F0000;
    (*(f32 *)D_005E2684) = 3000.0f;
    (*(s32 *)D_005E2680) = 0;
    if (((*(f32 *)D_005E1D20) <= 0.0f) && !((*(u8 *)D_005E2520) & 1)) {
        func_002A8940(0x442F0000, 3000.0f);
        func_002A8B80(0.2f);
        var_a0 = 2;
    } else {
        var_f12 = 30000.0f;
        if ((*(f32 *)D_005E2684) <= 30000.0f) {
            var_f12 = 200.0f;
            if (!((*(f32 *)D_005E2684) < 200.0f)) {
                var_f12 = (*(f32 *)D_005E2684);
            }
        }
        (*(s32 *)D_005E2674) = 1;
        func_002A8940(0x442F0000, var_f12);
        func_002A8B80(1.0f);
        var_a0 = 3;
    }
    (*(s32 *)D_005E2674) = var_a0;
}
