/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0020A4B0(s32, s32, s32);
extern s32 func_0020A400(s32, s32, s32);
extern s32 D_003EA3E4;
extern s32 D_003EA3E8;
extern char D_008DAC10[];

void func_008B2D10(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_s0;
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_v1;

    temp_a4 = arg1 & 0xFFFF;
    if (temp_a4 != 0xFFFF) {
        temp_a1 = arg0 & 0xFF;
        temp_s0 = (temp_a4 * 4) + (((void *)D_008DAC10) + (temp_a1 * 0x668));
        temp_v1 = *temp_s0;
        if (temp_v1 != 0) {
            *temp_s0 = temp_v1 + 1;
        } else if (arg2 != 0) {
            if (func_0020A4B0(D_003EA3E4, temp_a1, temp_a4) != 0) {
                *temp_s0 = 1;
                D_003EA3E8 += 1;
            }
        } else if (func_0020A400(D_003EA3E4, temp_a1, temp_a4) != 0) {
            *temp_s0 = 1;
            D_003EA3E8 += 1;
        }
    }
}
