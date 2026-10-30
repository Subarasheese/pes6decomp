/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s32 func_00B64040(void **, u8);                     /* extern */
extern char D_00591F24[];

void func_00B64FD0(void **arg0) {
    s32 temp_s1;
    s32 temp_v1_2;
    s32 var_v0;
    void *temp_v1;

    temp_s1 = M2C_FIELD(*arg0, s32 *, 0x1C);
    func_00B2ACF0();
    temp_v1 = *arg0;
    var_v0 = temp_s1 + 0x200;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x1C);
    if (var_v0 >= temp_v1_2) {
        var_v0 = temp_s1 - 0x200;
        if (temp_v1_2 < var_v0) {
            goto block_2;
        }
    } else {
block_2:
        M2C_FIELD(temp_v1, s32 *, 0x1C) = var_v0;
    }
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) == 0) {

    } else {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        if (((*(u8 *)D_00591F24) != 5) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6) && ((*(u8 *)D_00591F24) != 2)) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 0xFD;
            M2C_FIELD(*arg0, s16 *, 0x18) = 0;
        } else if (func_00B64040(arg0, (*(u8 *)D_00591F24)) == 0) {
            M2C_FIELD(*arg0, s8 *, 0x16) = 0xFD;
            M2C_FIELD(*arg0, s16 *, 0x18) = 5;
        }
    }
}
