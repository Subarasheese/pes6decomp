/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int EIntr(void);
extern void open(unsigned int, unsigned int);
s32 DIntr(s32);                             /* extern */
void *func_00111D48(s32, s32, M2C_UNK);             /* extern */
extern char D_003F3250[];

s32 func_00112020(s32 arg0, s32 arg1, s8 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_v0;
    void *temp_v0;

    temp_a0 = (arg1 * 0x1C) + (arg0 * 0x70);
    if (M2C_FIELD((((void *)D_003F3250) + temp_a0), s32 *, 0x10) == 0) {
        var_v0 = 0;
    } else {
        temp_s0 = DIntr(temp_a0);
        temp_v0 = func_00111D48(arg0, arg1, 0);
        M2C_FIELD(temp_v0, s8 *, 0x71) = arg2;
        open((u32) temp_v0, (u32) (temp_v0 + 0x7F));
        var_v0 = 1;
        if (temp_s0 == 1) {
            EIntr();
            var_v0 = 1;
        }
    }
    return var_v0;
}
