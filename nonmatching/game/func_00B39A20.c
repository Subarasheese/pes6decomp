/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
void **func_00B2A420(u8);                           /* extern */
u32 func_00B35B30(void **, void *);                 /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCD80[];
extern char D_00CBCD81[];
extern char D_00CBCD8D[];

s32 func_00B39A20(void *arg0) {
    s32 var_v0;
    u32 var_s1;
    void **temp_s0;
    void **temp_v0;
    void **temp_v0_2;
    void *temp_a1;
    void *temp_v1;

    temp_s0 = func_00B2A420(func_00BF6270());
    if (((*(u8 *)D_00CBCD81) != 0xFF) && ((s32) (*(u8 *)D_00CBCD8D) < (s32) (*(u8 *)D_00CBCD80)) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) == 0)) {
        temp_v0 = func_00B2A420(func_00BF6270());
        if (((*(u8 *)D_00CBCAD1) != 0) && ((*(u8 *)D_00CBCAD1) != 1) && ((*(u8 *)D_00CBCAD1) != 2)) {
            goto block_6;
        }
        if (func_00B35B30(temp_v0, arg0) >= 0x10U) {
            var_v0 = 1;
        } else {
block_6:
            var_v0 = 0;
        }
        if (var_v0 == 0) {
            temp_v1 = M2C_FIELD(arg0, void **, 4);
            if ((u32) M2C_FIELD(temp_v1, u32 *, 0x38) < 0xC00U) {
                if (M2C_FIELD(temp_v1, u8 *, 0xC) != 1) {
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) < 0xA66) {
                        goto block_14;
                    }
                    goto block_15;
                }
block_14:
                return 0;
            }
block_15:
            var_s1 = 0;
loop_16:
            temp_v0_2 = func_00B2A420(M2C_FIELD((*temp_s0 + (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x13) * 0xB) + var_s1), u8 *, 0x1B4));
            temp_a1 = M2C_FIELD(temp_v0_2, void **, 0);
            if (M2C_FIELD(temp_a1, u16 *, 0x18) == 0xC) {
                if (M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 4), u8 *, 0x51) == 0) {
                    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0) == M2C_FIELD(temp_a1, u8 *, 0)) {
                        if (arg0 == temp_v0_2) {
                            goto block_24;
                        }
                        goto block_23;
                    }
                    goto block_25;
                }
                goto block_23;
            }
            if (arg0 == temp_v0_2) {
                goto block_25;
            }
block_23:
            var_s1 += 1;
            if (var_s1 >= 0xBU) {
block_24:
                return 1;
            }
            goto loop_16;
        }
        goto block_25;
    }
block_25:
    return 0;
}
