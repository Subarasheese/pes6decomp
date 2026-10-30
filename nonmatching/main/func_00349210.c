/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030EA70(void);
extern int func_0030E830(void);
extern int func_0030ED20(void *, u8);
extern char D_00CBCDE1[];

s32 func_00349210(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp3C;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    void *temp_a1;
    void *temp_s0;
    void *temp_v1_2;

    var_a2 = arg2;
    var_a0 = 4;
    if (((*(u8 *)D_00CBCDE1) != 4) && (var_a0 = 3, ((*(u8 *)D_00CBCDE1) != 3)) && (var_a0 = 2, ((*(u8 *)D_00CBCDE1) != 2))) {
        if (((*(u8 *)D_00CBCDE1) != 1) && ((*(u8 *)D_00CBCDE1) != 0)) {

        } else {
            var_a0 = 1;
            goto block_7;
        }
    } else {
block_7:
        var_a2 = var_a0;
    }
    temp_a1 = arg0 + (M2C_FIELD(arg0, u8 *, 0x13) * 8);
    M2C_FIELD(temp_a1, s32 *, 0x1C) = (s32) M2C_FIELD(temp_a1, s32 *, 0x18);
    M2C_FIELD(temp_a1, s32 *, 0x18) = var_a2;
    M2C_FIELD(arg0, s8 *, 4) = (s8) ((var_a2 == 2) & (M2C_FIELD(temp_a1, s32 *, 0x1C) == var_a2));
    temp_v1 = M2C_FIELD(temp_a1, s32 *, 0x18);
    switch (temp_v1) {                              /* irregular */
    case 3:
        func_0030ED20(&sp3C, M2C_FIELD(arg0, u8 *, 0x15));
        if (sp3C == 1) {
        case 4:
            M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg0, u8 *, 0);
            M2C_FIELD(arg0, u8 *, 0) = func_0030EA70();
            M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg0, u8 *, 2);
            M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0x13);
            M2C_FIELD(arg0, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x11);
            M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(temp_a1, s32 *, 0x18);
            temp_s0 = (M2C_FIELD(arg0, u8 *, 0x13) * 4) + arg0;
            temp_v1_2 = func_0030E830() + temp_s0;
            M2C_FIELD(temp_v1_2, u8 *, 9) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 9) + 1);
        }
        break;
    }
    return 1;
}
