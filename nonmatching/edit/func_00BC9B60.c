/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, M2C_UNK *, M2C_UNK);  /* extern */
extern char D_00CB7250[];
extern char D_00CB74D0[];
extern char D_00CB74E0[];
extern char D_00CB74F0[];
extern char D_00CB7500[];
extern char D_00CE4F40[];
extern char D_00CE5180[];

void func_00BC9B60(s32 arg0, s32 arg1) {
    u16 temp_a0_2;
    void *temp_a0;
    void *temp_s1;
    void *var_s1;

    temp_a0 = ((void *)D_00CE4F40) + (arg0 * 0xC0);
    if (arg1 != M2C_FIELD(temp_a0, s32 *, 0x28)) {
        M2C_FIELD(temp_a0, s32 *, 0x28) = arg1;
        switch (arg1) {                             /* irregular */
        case 4:
            var_s1 = temp_a0 + 0x28;
            func_001C4730(var_s1 + 8, ((void *)D_00CB74F0), 0x10);
block_12:
            M2C_FIELD(var_s1, s32 *, 4) = 1;
            break;
        case 5:
            var_s1 = temp_a0 + 0x28;
            func_001C4730(var_s1 + 8, ((void *)D_00CB74E0), 0x10);
            goto block_12;
        default:
            temp_s1 = temp_a0 + 0x28;
            func_001C4730(temp_s1 + 8, ((void *)D_00CB74D0), 0x10);
            M2C_FIELD(temp_s1, s32 *, 4) = 0;
            break;
        case 12:
            var_s1 = temp_a0 + 0x28;
            func_001C4730(var_s1 + 8, ((void *)D_00CB7500), 0x10);
            goto block_12;
        }
        temp_a0_2 = M2C_FIELD((((void *)D_00CB7250) + (arg1 * 0x1C)), u16 *, 0x18);
        if (((*(s32 *)D_00CE5180) != temp_a0_2) && (arg1 != 4) && (arg1 != 5)) {
            (*(s32 *)D_00CE5180) = (s32) temp_a0_2;
        }
    }
}
