/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001104DC(u32);
extern s32 func_00115720(void *);
M2C_UNK func_0019DBD0(M2C_UNK *, u32);              /* extern */
extern char D_002BA0C0[];
extern char D_005F7588[];

void func_00107678(void) {
    s32 temp_a2;
    s32 var_a0;
    s32 var_s1;

    var_s1 = func_00115720((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + (((void *)D_002BA0C0) + 0x470));
    temp_a2 = M2C_FIELD(((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 4) + ((void *)D_002BA0C0)), s32 *, 0x5BD4);
    switch (var_s1) {                               /* irregular */
    case 0x80:
        var_s1 = ((temp_a2 ^ 5) != 0) ? 0 : 6;
        break;
    case 0x1:
        var_s1 = ((temp_a2 ^ 5) == 0) ? 7 : var_s1;
        break;
    case 0x81:
        var_s1 = ((temp_a2 ^ 5) != 0) ? 2 : 8;
        break;
    case 0x2:
        var_a0 = 3;
block_15:
        var_s1 = ((temp_a2 ^ 5) != 0) ? var_a0 : 5;
        break;
    case 0x82:
        var_a0 = 4;
        goto block_15;
    }
    func_001104DC((u32) var_s1);
    func_0019DBD0(((void *)D_005F7588), (u32) var_s1);
}
