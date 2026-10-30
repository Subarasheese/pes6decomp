/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
extern char D_008AB770[];

s32 func_00843AC0(void) {
    u32 sp18;
    s32 sp1C;
    s32 temp_a5;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_a0;
    u32 temp_v1_2;
    void *temp_a3;

    func_00110E58(func_001105C8(), &sp1C, &sp18);
    var_v0 = 0;
    temp_a5 = (sp18 / 1000U) + (sp1C * 0x3E8);
    do {
        temp_a3 = ((void *)D_008AB770) + (var_v0 * 0x14);
        if (M2C_FIELD(temp_a3, s8 *, 0xC) == 1) {
            temp_v1 = M2C_FIELD(temp_a3, s32 *, 0x10);
            switch (temp_v1) {                      /* irregular */
            case 2:
                var_v1 = temp_a5 - M2C_FIELD(temp_a3, s32 *, 0);
block_15:
                M2C_FIELD(temp_a3, s32 *, 8) = var_v1;
                break;
            case 1:
                temp_v1_2 = M2C_FIELD(temp_a3, u32 *, 4);
                temp_a0 = temp_a5 - M2C_FIELD(temp_a3, s32 *, 0);
                if (temp_v1_2 >= temp_a0) {
                    var_v1 = temp_v1_2 - temp_a0;
                    goto block_15;
                }
                M2C_FIELD(temp_a3, s8 *, 0xD) = 1;
                break;
            }
        }
        var_v0 += 1;
    } while (var_v0 < 6);
    return 1;
}
