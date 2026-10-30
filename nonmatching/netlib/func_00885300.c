/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
extern void func_001D7C20(void *, s32);
extern void func_001D7CE0(void *, void *);
extern void *D_008B2534;
extern char D_008B2550[];

s32 func_00885300(void) {
    s32 var_s1;
    void *var_s0;

    var_s0 = D_008B2534;
    var_s1 = 0;
loop_4:
    if ((*(u16 *)D_008B2550) != 0) {
        if (var_s1 < 0xE) {
            if (((s32) ((*(u16 *)D_008B2550) & 0xFFFF) >> var_s1) & 1) {
                func_001D7CE0(M2C_FIELD(var_s0, void **, 0), var_s0 + 0x40);
                func_001D7D80(M2C_FIELD(var_s0, void **, 0), 0);
                func_001D7C20(M2C_FIELD(var_s0, void **, 0), 0);
                func_001D7D60(M2C_FIELD(var_s0, void **, 0), 0);
                M2C_FIELD(var_s0, s8 *, 0x55) = 0;
                M2C_FIELD(var_s0, s8 *, 0x56) = 0;
                (*(u16 *)D_008B2550) &= ~(1 << M2C_FIELD(var_s0, s8 *, 0x54)) & 0xFFFF;
            }
            var_s1 += 1;
            var_s0 += 0x60;
            goto loop_4;
        }
    }
    return 0;
}
