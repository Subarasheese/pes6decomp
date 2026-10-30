/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A1580(s32, M2C_UNK *, u8);          /* extern */
extern char D_00592A55[];
extern char D_00592A56[];

void func_00B94C80(void *arg0, s32 arg1) {
    u8 *temp_v1;
    u8 *temp_v1_2;
    u8 temp_a2;
    u8 temp_a2_2;

    switch (arg1) {                                 /* irregular */
    case 3:
        temp_a2 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_v1 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)D_00592A55) + (temp_a2 * 0x6900));
        *temp_v1 += 1;
        func_009A1580(temp_a2 * 0x69, ((void *)D_00592A55), temp_a2);
        return;
    case 4:
        temp_a2_2 = M2C_FIELD(arg0, u8 *, 0x12);
        temp_v1_2 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)D_00592A56) + (temp_a2_2 * 0x6900));
        *temp_v1_2 += 1;
        func_009A1580(temp_a2_2 * 0x69, ((void *)D_00592A56), temp_a2_2);
        /* fallthrough */
    case 2:
    case 1:
        return;
    }
}
