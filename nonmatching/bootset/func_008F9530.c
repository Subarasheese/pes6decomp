/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008FAF40[];
extern char D_008FB030[];

void func_008F9530(s32 arg0, s32 arg1) {
    void *temp_a1;

    if ((arg1 >= 0) && (arg1 < 0xA)) {
        temp_a1 = (arg1 * 0xC) + ((void *)D_008FAF40);
        M2C_FIELD(((arg1 * 4) + ((void *)D_008FB030)), s32 *, 0x28) = 0;
        M2C_FIELD(temp_a1, s32 *, 0x6C) = 2;
        M2C_FIELD(temp_a1, s32 *, 0x70) = 0;
        M2C_FIELD(((void *)D_008FB030), s8 *, 0x9D) = 1;
        M2C_FIELD(temp_a1, s32 *, 0x74) = arg0;
    }
}
