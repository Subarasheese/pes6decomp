/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00107958(s32);                         /* extern */
M2C_UNK func_001150F4(void *);                      /* extern */
M2C_UNK func_00115154(void *, s32);                 /* extern */
s32 func_00115720(void *);                          /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s32, s32);         /* extern */
extern char D_002BA0C0[];
extern char D_005F7660[];

void func_00107CB0(s8 arg0) {
    M2C_UNK *var_s0;
    s32 temp_a1;
    s8 var_a0;
    s8 var_s1;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = ((void *)D_002BA0C0) + 0xC;
    var_s1 = arg0;
    if (M2C_FIELD(((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 4) + temp_s0), s32 *, 0x5BE0) != M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0)) {
        func_00115154((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + (((void *)D_002BA0C0) + 0x470), M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0));
        if (var_s1 == 0xF) {
            temp_a1 = M2C_FIELD(((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 4) + temp_s0), s32 *, 0x5BE0);
            M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) = temp_a1;
            func_0019DBD0(((void *)D_005F7660), temp_a1, M2C_FIELD(((temp_a1 * 4) + temp_s0), s32 *, 0x5BE0));
            var_s0 = ((void *)D_002BA0C0);
        } else {
            if (var_s1 < 0) {
                var_s1 += 5;
            }
            if (var_s1 > 0) {
                var_a0 = var_s1;
                do {
                    var_a0 -= 1;
                    M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) = (s32) M2C_FIELD(((M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 4) + temp_s0), s32 *, 0x5BE0);
                } while (var_a0 != 0);
            }
            var_s0 = ((void *)D_002BA0C0) - 0x5F40;
        }
        temp_s1 = var_s0 + 0x470;
        func_00107958(func_00115720((M2C_FIELD(var_s0, s32 *, 0x5BD0) * 0xE90) + temp_s1));
        func_001150F4((M2C_FIELD(var_s0, s32 *, 0x5BD0) * 0xE90) + temp_s1);
    }
}
