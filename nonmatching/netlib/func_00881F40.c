/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
s32 func_00849800(u32, s8, M2C_UNK);                /* extern */
s32 func_0084CD20(s64, M2C_UNK *);                  /* extern */
s64 func_00858C20(u32);                             /* extern */
s32 func_009B3F60();                                /* extern */
extern char D_008B144F[];
extern char D_008B14E4[];
extern char D_008B14E5[];
extern void *D_008B2484;
extern void *D_008B2488;
extern char D_008B24D1[];

void func_00881F40(void) {
    s32 var_v0;
    u32 var_s1;
    void *var_s0;

    if ((*(u8 *)D_008B24D1) != 0) {
        var_s1 = 0;
        do {
            if (func_00849800(var_s1, (*(s8 *)D_008B144F), 0) == 0) {
                var_s0 = D_008B2484;
            } else {
                var_s0 = D_008B2488;
            }
            if (func_00858C20(var_s1) == 0) {
                var_v0 = 0;
            } else if (func_009B3F60() == 0) {
                var_v0 = func_0084CD20((s64) (func_00858C20(var_s1) << 0x30) >> 0x30, ((void *)D_008B14E4));
            } else {
                var_v0 = func_0084CD20((s64) (func_00858C20(var_s1) << 0x30) >> 0x30, ((void *)D_008B14E5));
            }
            if (var_v0 == 0) {
                func_001D7D60(var_s0, 0);
            } else {
                func_001D7D60(var_s0, 1);
            }
            var_s1 += 1;
        } while (var_s1 < 2U);
    }
}
