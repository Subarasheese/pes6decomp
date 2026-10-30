/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002D5870(void *);
extern s32 func_002F9370(void *);
extern void func_001D78B0(void *, u8);
s32 func_002D58A0(M2C_UNK *);                       /* extern */
extern s32 D_003EA878;
extern void *D_00CCC1D0;
extern char D_00CCC1D4[];
extern char D_00CCC1F0[];

void func_00C81BF0(void) {
    s32 temp_s0;

    if ((D_003EA878 != 0) && ((*(u8 *)D_00CCC1F0) & 1) && (func_002D5870(((void *)D_00CCC1D4)) == 1)) {
        temp_s0 = func_002D58A0(((void *)D_00CCC1D4));
        if ((*(u8 *)D_00CCC1F0) & 1) {
            func_001D78B0(func_002F9370(D_00CCC1D0), temp_s0 & 0xFF);
        }
    }
}
