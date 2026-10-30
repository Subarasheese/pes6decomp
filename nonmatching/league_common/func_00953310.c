/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A76BF0[];
extern char D_00A76BF1[];
extern char D_00A76BF2[];
extern char D_00A76BF3[];
extern char D_00A76BF4[];
extern char D_00A76BF5[];
extern char D_00A76BF6[];
extern char D_00A76BF7[];

s32 func_00953310(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    temp_t0 = ((*(u8 *)D_00A76BF0) + (*(u8 *)D_00A76BF1)) & 0xFF;
    temp_a5_2 = ((*(u8 *)D_00A76BF2) + (*(u8 *)D_00A76BF3)) & 0xFF;
    temp_a7 = ((*(u8 *)D_00A76BF4) + (*(u8 *)D_00A76BF5)) & 0xFF;
    temp_a6 = ((*(u8 *)D_00A76BF6) + (*(u8 *)D_00A76BF7)) & 0xFF;
    if (temp_v0 & 4) {
        if (!(temp_v0 & 8)) {
            return (((temp_t0 & 0xFF) + (temp_a5_2 & 0xFF)) & 0xFFFF) == (((temp_a7 & 0xFF) + (temp_a6 & 0xFF)) & 0xFFFF);
        }
        temp_a5 = (temp_t0 & 0xFF) + (temp_a5_2 & 0xFF);
        temp_a3 = arg2 & 0xFF & 0xFF;
        temp_a4 = arg1 & 0xFF & 0xFF;
        temp_a2 = (temp_a7 & 0xFF) + (temp_a6 & 0xFF);
        if (((temp_a4 + temp_a5) & 0xFFFF) == ((temp_a3 + temp_a2) & 0xFFFF)) {
            if (!(temp_v0 & 0x10)) {
                return 1;
            }
            return ((temp_a4 + (temp_a5 * 2)) & 0xFFFF & 0xFFFF) == ((temp_a2 + (temp_a3 * 2)) & 0xFFFF & 0xFFFF);
        }
        goto block_11;
    }
block_11:
    return 0;
}
