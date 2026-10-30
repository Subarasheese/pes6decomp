/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00B76F10(void **, void *);             /* extern */
M2C_UNK func_00B77210(void **);                     /* extern */
extern char D_00CBBE04[];

void func_00B77510(void **arg0) {
    s16 var_v1;
    s32 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;

    temp_a0 = func_009E1C90(2) & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 8:
        func_00B77210(arg0);
        temp_a1 = *arg0;
        if (M2C_FIELD(temp_a1, u8 *, 0) == (*(u8 *)D_00CBBE04)) {
            temp_a0_2 = M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 0x30);
            if ((temp_a0_2 != 0x40B) && (temp_a0_2 != 0x40A)) {
                var_v1 = 3;
            } else {
                var_v1 = 5;
            }
block_22:
            M2C_FIELD(*arg0, s16 *, 0x18) = var_v1;
            return;
        }
        return;
    case 9:
        temp_a1_2 = *arg0;
        if (M2C_FIELD(temp_a1_2, u8 *, 0) == (*(u8 *)D_00CBBE04)) {
            temp_a0_3 = M2C_FIELD(M2C_FIELD(temp_a1_2, void **, 4), u16 *, 0x30);
            if ((temp_a0_3 != 0x40B) && (temp_a0_3 != 0x40A)) {
                var_v1 = 3;
            } else {
                var_v1 = 5;
            }
            goto block_22;
        }
        break;
    case 10:
        temp_a1_3 = *arg0;
        if (M2C_FIELD(temp_a1_3, u8 *, 0) == (*(u8 *)D_00CBBE04)) {
            temp_a0_4 = M2C_FIELD(M2C_FIELD(temp_a1_3, void **, 4), u16 *, 0x30);
            if ((temp_a0_4 != 0x40B) && (temp_a0_4 != 0x40A)) {
                var_v1 = 3;
            } else {
                var_v1 = 5;
            }
            goto block_22;
        }
        func_00B76F10(arg0, temp_a1_3);
        break;
    }
}
