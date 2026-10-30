/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00378190[];
extern char D_00378198[];
extern char D_003785D8[];
extern char D_003789D8[];
extern char D_003789E0[];
extern char D_00378AE0[];
extern char D_00378B00[];
extern char D_00378B04[];
extern char D_00378B08[];
extern char D_00378B0C[];
extern char D_00378B10[];
extern char D_003C7D08[];
extern M2C_UNK *D_0050E300;

void func_0015B6F0(void) {
    s32 temp_a0;

    temp_a0 = (*(s32 *)D_00378190);
    D_0050E300 = ((void *)D_003C7D08);
    if (temp_a0 == 0) {
        func_001C48E8(((void *)D_00378198), 0, 0x440);
        func_001C48E8(((void *)D_003785D8), 0, 0x400);
        func_001C48E8(((void *)D_003789E0), 0xFF, 0x100);
        func_001C48E8(((void *)D_00378AE0), 0, 0x20);
        (*(s32 *)D_00378B0C) = -1;
        (*(s32 *)D_00378B10) = 1;
        (*(s32 *)D_00378B00) = 0;
        (*(s32 *)D_003789D8) = 0;
        (*(s32 *)D_00378B04) = 0;
        (*(s32 *)D_00378B08) = 0;
    }
    (*(s32 *)D_00378190) = temp_a0 + 1;
}
