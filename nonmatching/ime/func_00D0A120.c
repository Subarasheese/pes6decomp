/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00D09EE0(void *, void *, void *, M2C_UNK *); /* extern */
extern char D_00D20980[];

s32 func_00D0A120(s32 arg0) {
    s32 temp_a0;
    void *temp_a1;
    void *temp_a2;

    if (((void *)D_00D20980) == NULL) {
        goto block_10;
    }
    if (arg0 >= 0) {
        if (arg0 < 0x1D) {
            temp_a2 = (arg0 * 0x5C) + ((void *)D_00D20980);
            temp_a0 = M2C_FIELD(temp_a2, s32 *, 0x8C);
            temp_a1 = temp_a2 + 0x8C;
            if (temp_a0 >= 0) {
                M2C_FIELD(((M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) * 4) + ((void *)D_00D20980)), s32 *, 0x10) = temp_a0;
                M2C_FIELD(((void *)D_00D20980), s32 *, 4) = (s32) (M2C_FIELD(((void *)D_00D20980), s32 *, 4) - 1);
                M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) = (s32) ((s32) (M2C_FIELD(((void *)D_00D20980), s32 *, 0x88) + 1) % 29);
                if (temp_a1 != NULL) {
                    M2C_FIELD(temp_a2, s32 *, 0x8C) = -1;
                    func_00D09EE0(temp_a2 + 0x90, temp_a1, temp_a2, ((void *)D_00D20980));
                }
            }
            goto block_10;
        }
        return 1;
    }
block_10:
    return 1;
}
