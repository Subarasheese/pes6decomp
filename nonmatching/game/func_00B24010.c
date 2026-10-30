/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF20[];
extern char D_00CBBF21[];

void func_00B24010(s32 arg0) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a6;

    if ((arg0 == 1) || (arg0 == 3)) {
        (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF) | ((*(u8 *)D_00CBBF20) & 0xF & (~(1 << arg0) & 0xFF) & 0xF);
    }
    temp_a2 = 1 << arg0;
    temp_a0 = (*(u8 *)D_00CBBF20) & 0xF;
    if (!(temp_a0 & temp_a2)) {
        temp_a6 = temp_a2 & 0xFF;
        (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF) | ((temp_a0 | temp_a6) & 0xF);
        (*(u8 *)D_00CBBF21) = ((*(u8 *)D_00CBBF21) & ~1) | (1 & 1);
        (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF0) | (((((u64) ((s64) (*(u8 *)D_00CBBF20) << 0x38) >> 0x3C) | temp_a6) & 0xF) * 0x10);
    }
}
