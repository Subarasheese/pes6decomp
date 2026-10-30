/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225520(s32);                             /* extern */
s32 func_00225680(s32);                             /* extern */
s32 func_00235800(s32);                             /* extern */
s32 func_00235B60();                                /* extern */
s32 func_0095C4A0(s32);                             /* extern */
M2C_UNK func_00972040(s32, s32, s32);               /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */
void *func_00AE7320();                              /* extern */
extern char D_00591C09[];

void func_00AE50E0(s32 arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    void *temp_v0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != NULL) {
        temp_s0 = arg0 & 0xFF;
        temp_s1 = func_00235800(func_00235B60() & 0xFF) & 0xFF;
        func_00972040(M2C_FIELD(temp_v0, s32 *, 0x60), (temp_s0 % 10) & 0xFF, (((arg0 & 0xFF) / 10) + ((u32) temp_s0 >> 0x1F)) & 0xFF);
        temp_s0_2 = (temp_s1 & 0xFF) + temp_s0;
        temp_a0 = func_00225680(temp_s0_2 & 0xFF) & 0xFFFF;
        if ((u32) ((*(u8 *)D_00591C09) - 1) < 2U) {
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 8), 4, func_00225520(temp_s0_2 & 0xFF));
            return;
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 8), 4, func_0095C4A0(temp_a0));
    }
}
