/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBEE0[];
extern char D_00CBBEE2[];

void func_00B24CB0(void) {
    s32 temp_v1;

    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~4) | 4;
    (*(s16 *)D_00CBBEE2) = 0;
    temp_v1 = 0 & 1;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~8) | 8;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~1) | 1;
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x80) | (temp_v1 << 7);
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x40) | (temp_v1 << 6);
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x10) | (temp_v1 * 0x10);
    (*(u8 *)D_00CBBEE0) = ((*(u8 *)D_00CBBEE0) & ~0x40) | 0x40;
}
