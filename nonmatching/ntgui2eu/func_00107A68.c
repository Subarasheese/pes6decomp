/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00107528(M2C_UNK);                         /* extern */
M2C_UNK func_00107958(s32);                         /* extern */
M2C_UNK func_001150F4(void *);                      /* extern */
M2C_UNK func_00115154(void *);                      /* extern */
s32 func_00115720(void *);                          /* extern */
extern char D_002BA0C0[];

void func_00107A68(void) {
    s32 temp_s0;
    void *temp_s2;

    temp_s2 = ((void *)D_002BA0C0) + 0x470;
    temp_s0 = M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0);
    if (func_00107528(3) != 0) {
        M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C54) = (s32) (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C54) ^ 1);
        func_00115154((temp_s0 * 0xE90) + temp_s2);
        func_00107958(func_00115720((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + temp_s2));
        func_001150F4((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + temp_s2);
    }
}
