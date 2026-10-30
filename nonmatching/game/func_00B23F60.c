/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF20[];
extern char D_00CBBF21[];

void func_00B23F60(s32 arg0) {
    s32 temp_a0;
    s32 temp_a3;

    temp_a3 = 1 << arg0;
    temp_a0 = (*(u8 *)D_00CBBF20) & 0xF;
    if (temp_a0 & temp_a3) {
        (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF) | (temp_a0 & (~temp_a3 & 0xFF) & 0xF);
        (*(u8 *)D_00CBBF21) = ((*(u8 *)D_00CBBF21) & ~1) | (1 & 1);
        (*(u8 *)D_00CBBF20) = ((*(u8 *)D_00CBBF20) & ~0xF0) | (((((u64) ((s64) (*(u8 *)D_00CBBF20) << 0x38) >> 0x3C) | (temp_a3 & 0xFF)) & 0xF) * 0x10);
    }
}
