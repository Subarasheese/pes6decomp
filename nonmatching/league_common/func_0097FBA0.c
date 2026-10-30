/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F2050(void *);
extern s32 func_001F3D10(s32, u8);
extern void func_001F3C80(void *, f32);
extern void * func_001F1F10(void);
M2C_UNK func_001F3D80(void *, s32 *, M2C_UNK);      /* extern */
extern void *D_003EA968;
extern void *D_003EA96C;

void func_0097FBA0(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    void *temp_v0;
    void *temp_v0_2;

    if (D_003EA968 == NULL) {
        if (D_003EA96C != NULL) {
            return;
        }
        sp10 = 0xC3800000;
        sp14 = 0xC3600000;
        sp18 = 0x44000000;
        sp1C = 0x43E00000;
        temp_v0 = func_001F1F10();
        D_003EA968 = temp_v0;
        func_001F3D10((s32) temp_v0, 1U);
        func_001F3C80(D_003EA968, 0.0f);
        sp10 = 0;
        sp14 = 0;
        temp_v0_2 = func_001F2050(D_003EA968);
        D_003EA96C = temp_v0_2;
        func_001F3C80(temp_v0_2, 12400.0f);
        func_001F3D10((s32) D_003EA96C, 1U);
        func_001F3D80(D_003EA96C, &sp10, 0);
    }
}
