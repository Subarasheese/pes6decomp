/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D76B0(void *, u32);
extern s32 func_002F9370(void *);
extern u32 func_00C6F720(void);
extern void func_001DF420(void *, u8);
extern void * func_002F96F0(void *, u32);
extern s32 func_002F9320(s32, s32);
extern s32 D_003EA814;
extern char D_00CCBBF0[];
extern void *D_00CCBC00;

void func_00C6F180(s32 arg0) {
    s32 *var_s1;
    s32 temp_s4;
    s32 var_s2;
    void **var_s0;

    var_s2 = 0;
    var_s1 = ((void *)D_00CCBBF0);
    var_s0 = &D_00CCBC00;
    do {
        D_003EA814 = var_s2;
        if (*var_s1 != 0) {
            func_001D76B0(func_002F9370(*var_s0), arg0 & 0xFF);
            temp_s4 = func_002F9320(*(&D_00CCBC00 + (D_003EA814 << 6)), 1);
            func_001DF420(M2C_FIELD(func_002F96F0((void *) temp_s4, func_00C6F720()), void **, 0xC), arg0 & 0xFF);
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 0x40;
    } while (var_s2 < 2);
}
