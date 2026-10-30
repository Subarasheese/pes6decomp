/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364E0(void);
extern void func_00B364D0(u32);
extern u8 func_00BF6270(void);
s32 func_00B2A420(u8);                              /* extern */
M2C_UNK func_00B37240();                            /* extern */
M2C_UNK func_00B382F0(void *);                      /* extern */
M2C_UNK func_00B82670();                            /* extern */
M2C_UNK func_00B9E7C0();                            /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */
extern char D_00CBCAD1[];
extern char D_00CBCB22[];

void func_00B9D970(void *arg0) {
    M2C_UNK var_a1;
    s16 var_a0;
    void *temp_v0;

    if (arg0 != func_00B2A420(func_00BF6270())) {
        (*(u8 *)D_00CBCB22) = 0;
        if ((func_00BBB8C0(0x87) % 3) != 0) {
            (*(u8 *)D_00CBCB22) |= 1;
        }
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3C) < 0x3801) {
            var_a1 = 3;
        } else {
            var_a1 = 2;
        }
        func_00BD4040(arg0, var_a1);
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30) != 0x2C6) {
            if (func_00BBB8C0(2) != 0) {
                goto block_9;
            }
        } else {
block_9:
            func_00BD3BA0(arg0, 4, 1);
        }
        var_a0 = 0xC2;
    } else {
        if ((*(u8 *)D_00CBCAD1) != 0) {
            (*(u8 *)D_00CBCAD1) = 0;
        }
        func_00B37240();
        func_00B82670();
        func_00B364E0();
        func_00B364D0(3U);
        func_00B9E7C0();
        func_00B382F0(arg0);
        func_00BD4040(arg0, 2);
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30) == 0x2C6) {
            func_00BD3BA0(arg0, 4, 1);
        }
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
        var_a0 = 0xC1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = var_a0;
}
