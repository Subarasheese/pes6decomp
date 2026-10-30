/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0010BFF8(s32, s32);                    /* extern */
M2C_UNK func_0010C010(s32, M2C_UNK);                /* extern */
M2C_UNK func_0010C598(s32);                         /* extern */
M2C_UNK func_0010CFE8(s32, M2C_UNK *);              /* extern */
M2C_UNK func_0010FA54();                            /* extern */
s32 func_00114E2C();                                /* extern */
M2C_UNK func_00115198(s32, void *);                 /* extern */
M2C_UNK func_001160B4(s32, s32);                    /* extern */
extern char D_002BA0C0[];
extern char D_002BFD30[];

void func_0010A310(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_v1;

    if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x5C60) != 0) {
        if (M2C_FIELD(((void *)D_002BA0C0), s32 *, 0x404) == 0) {
            func_0010BFF8(arg1, arg2);
        } else {
            func_0010BFF8(0, 0);
            func_0010C010(arg0, 0);
            func_001160B4(-arg1, -arg2);
        }
        temp_v1 = ((void *)D_002BA0C0) - 0x5F40;
        if (func_00114E2C() == 0) {
            func_0010C598(arg0);
        } else {
            func_00115198(arg0, (M2C_FIELD(temp_v1, s32 *, 0x5BD0) * 0xE90) + (temp_v1 + 0x470));
        }
        if (M2C_FIELD((((void *)D_002BA0C0) - 0x5F40), s32 *, 0x404) == 0) {
            func_0010FA54();
            func_0010CFE8(arg0, ((void *)D_002BFD30));
        }
    }
}
