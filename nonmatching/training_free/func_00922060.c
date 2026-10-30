/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CB53C7[];
extern char D_00CB53C8[];
extern char D_00CB53C9[];
extern char D_00CB53CA[];
extern char D_00CB53CB[];
extern char D_00CB53CC[];
extern char D_00CB53CD[];
extern char D_00CB53CE[];
extern char D_00CB53CF[];
extern char D_00CB53D0[];
extern char D_00CB53D1[];
extern char D_00CB53D2[];

void func_00922060(void) {
    s32 temp_a0;
    s32 temp_a7;

    (*(s8 *)D_00CB53C8) = 0x1F;
    (*(s8 *)D_00CB53C7) = 0x1F;
    (*(s8 *)D_00CB53CA) = 0x1F;
    (*(s8 *)D_00CB53C9) = 0x1F;
    temp_a0 = 0 & 1;
    temp_a7 = (0 & 7) * 2;
    (*(u8 *)D_00CB53CB) = ((*(u8 *)D_00CB53CB) & ~1) | temp_a0;
    (*(s8 *)D_00CB53CC) = 0;
    (*(s8 *)D_00CB53CD) = 0x1F;
    (*(s8 *)D_00CB53CE) = 0x1F;
    (*(s8 *)D_00CB53CF) = 0x1F;
    (*(u8 *)D_00CB53D1) = ((*(u8 *)D_00CB53D1) & ~1) | temp_a0;
    (*(s8 *)D_00CB53D0) = 0x1F;
    (*(u8 *)D_00CB53CB) = ((*(u8 *)D_00CB53CB) & ~0xE) | temp_a7;
    (*(s8 *)D_00CB53D2) = 0;
    (*(u8 *)D_00CB53D1) = ((*(u8 *)D_00CB53D1) & ~0xE) | temp_a7;
}
