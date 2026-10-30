/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009A6990(void *, u32);
extern u32 func_009A6D40(void);
extern char D_00591BE4[];
extern char D_00591C6C[];
extern char D_00591DD6[];

void func_00B293C0(s16 arg0) {
    s16 var_s0;
    s32 temp_a0;

    var_s0 = arg0;
    if (!(var_s0 & 0xFFFF)) {
        var_s0 = 0xA;
    }
    (*(s16 *)D_00591C6C) = var_s0;
    if ((*(u8 *)D_00591DD6) != 0) {
        temp_a0 = var_s0 & 0xFFFF;
        func_009A6990(func_009A6D40() + 8, ((temp_a0 * (*(u8 *)D_00591BE4)) / 10) + ((u32) (temp_a0 * (*(u8 *)D_00591BE4)) >> 0x1F));
    }
}
