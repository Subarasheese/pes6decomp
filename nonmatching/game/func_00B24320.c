/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBF10[];

void func_00B24320(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a5;

    temp_a3 = arg0 != 0;
    temp_a2 = 1 << temp_a3;
    temp_a5 = ~temp_a2 & 0xFF;
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0x40) | 0x40;
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~3) | ((*(u8 *)D_00CBBF10) & 3 & temp_a5 & 3);
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0xC) | ((((u64) ((s64) (*(u8 *)D_00CBBF10) << 0x3C) >> 0x3E) & temp_a5 & 3) * 4);
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0x30) | ((((u64) ((s64) (*(u8 *)D_00CBBF10) << 0x3A) >> 0x3E) & temp_a5 & 3) * 0x10);
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~3) | ((((*(u8 *)D_00CBBF10) & 3) | (((arg1 != 0) << temp_a3) & 0xFF)) & 3);
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0xC) | (((((u64) ((s64) (*(u8 *)D_00CBBF10) << 0x3C) >> 0x3E) | (((arg2 != 0) << temp_a3) & 0xFF)) & 3) * 4);
    (*(u8 *)D_00CBBF10) = ((*(u8 *)D_00CBBF10) & ~0x30) | (((((u64) ((s64) (*(u8 *)D_00CBBF10) << 0x3A) >> 0x3E) | (temp_a2 & 0xFF)) & 3) * 0x10);
}
