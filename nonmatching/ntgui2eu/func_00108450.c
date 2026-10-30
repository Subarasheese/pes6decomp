/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00107958(s32);                         /* extern */
M2C_UNK func_001104DC(s32);                         /* extern */
M2C_UNK func_001108B0(M2C_UNK);                     /* extern */
M2C_UNK func_001150F4(void *);                      /* extern */
s32 func_00115720(void *);                          /* extern */
s32 func_00115754(void *, void *);                  /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *, s8);               /* extern */
extern char D_002BA0C0[];
extern char D_002CA1C0[];
extern char D_005F7730[];

void func_00108450(s8 arg0) {
    M2C_UNK (*temp_v0)(M2C_UNK, M2C_UNK);
    s32 temp_s1;
    s32 temp_s1_2;
    void *temp_s0;
    void *temp_s0_2;

    func_0019DBD0(((void *)D_005F7730), arg0);
    (*(s8 *)D_002CA1C0) = 1;
    func_001108B0(2);
    if (arg0 != 0) {
        temp_s0 = (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5BD0) * 0xE90) + (((void *)D_002BA0C0) + 0x470);
        temp_s1 = func_00115720(temp_s0);
        func_001150F4(temp_s0);
        func_00107958(temp_s1);
        M2C_FIELD(temp_s0, s32 *, 0x48) = func_00115754(temp_s0, temp_s0);
    }
    temp_s0_2 = ((void *)D_002BA0C0) - 0x5F40;
    temp_s1_2 = M2C_FIELD(((M2C_FIELD(temp_s0_2, s32 *, 0x5BD0) * 4) + temp_s0_2), s32 *, 0x5BD4);
    func_001104DC(temp_s1_2);
    temp_v0 = M2C_FIELD(temp_s0_2, M2C_UNK (**)(M2C_UNK, M2C_UNK), 0x5C68);
    if (temp_v0 != NULL) {
        if (temp_s1_2 != 5) {
            temp_v0(5, 0);
        } else {
            temp_v0(6, 0);
        }
    }
    M2C_FIELD((((void *)D_002BA0C0) - 0x5F40), s32 *, 0x404) = 0;
}
