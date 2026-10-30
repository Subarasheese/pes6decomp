/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001282A8(s32 *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, f32, void *); /* extern */
extern char D_005B3760[];
extern char D_005B3974[];
extern char D_005F95F0[];

void func_00128948(M2C_UNK arg0, s32 arg1) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    sp10 = 0xB4;
    sp18 = 0x118;
    sp1C = 0x1A;
    sp14 = 0xA;
    func_001282A8(&sp10, 1, 0, 1, 0, arg1, ((void *)D_005F95F0), (*(f32 *)D_005B3974), ((void *)D_005B3760) + 0x50);
}
