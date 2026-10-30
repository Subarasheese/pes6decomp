/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364A0(void);
extern u8 func_00BF6270(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK, u8 *, u8, u8); /* extern */
void *func_00B2A420(u8);                            /* extern */
s32 func_00B397F0(void *);                          /* extern */
s32 func_00B39A20(void *);                          /* extern */
s32 func_00B39C00(void *);                          /* extern */
M2C_UNK func_00B39ED0(void *);                      /* extern */
s32 func_00B8AA90(void *);                          /* extern */
M2C_UNK func_00BD3BE0(void *, M2C_UNK);             /* extern */
extern char D_00CBCD83[];
extern char D_00CBCD8D[];

void func_00B39560(void *arg0) {
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_s0_2;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 temp_a4;
    u8 temp_a4_2;
    u8 temp_a5;
    u8 temp_a5_2;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_v1;
    void *temp_v1_2;

    temp_s0 = func_00B2A420(func_00BF6270());
    temp_s2 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x54);
    temp_s0_2 = func_00B39C00(arg0) & 0xFFFF;
    if (temp_s2 == 0) {
        goto block_1;
    }
    if (func_00B8AA90(arg0) != 0) {
        temp_a0 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_a0, u16 *, 0x18) = (u16) M2C_FIELD(temp_a0, u16 *, 0x1A);
    } else {
block_1:
        if (temp_s2 != 0) {
            goto block_2;
        }
        if (((func_00B364A0() & 0xFF) == 6) && (func_00B397F0(arg0) != 0)) {
            temp_a4 = (*(u8 *)D_00CBCD8D);
            temp_a5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
            temp_a3 = ((void *)D_00CBCD83) + temp_a4;
            *temp_a3 = temp_a5;
            (*(u8 *)D_00CBCD8D) += 1;
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) = (u8) (*(u8 *)D_00CBCD8D);
            temp_v1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_v1, u16 *, 0x18) = (u16) M2C_FIELD(temp_v1, u16 *, 0x1A);
            func_001C48E8(M2C_FIELD(arg0, void **, 4) + 0x44, 0, 8, temp_a3, temp_a4, temp_a5);
        } else {
block_2:
            temp_a0_2 = M2C_FIELD(arg0, void **, 0);
            temp_a0_3 = M2C_FIELD(temp_a0_2, u16 *, 0x18);
            if (temp_a0_3 != 0xC) {
                if (temp_a0_3 != (temp_s0_2 & 0xFFFF)) {
                    M2C_FIELD(temp_a0_2, u16 *, 0x18) = temp_s0_2;
                    temp_a0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18);
                    switch (temp_a0_4) {            /* irregular */
                    case 7:
                        func_00BD3BE0(arg0, 4);
                        break;
                    case 8:
                        func_00BD3BE0(arg0, 3);
                        break;
                    case 9:
                        func_00BD3BE0(arg0, 2);
                        break;
                    case 10:
                        func_00BD3BE0(arg0, 1);
                        break;
                    }
                }
            } else {
                if (((func_00B364A0() & 0xFF) != 6) && (func_00B39A20(arg0) != 0)) {
                    temp_a4_2 = (*(u8 *)D_00CBCD8D);
                    temp_a5_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
                    temp_a3_2 = ((void *)D_00CBCD83) + temp_a4_2;
                    *temp_a3_2 = temp_a5_2;
                    (*(u8 *)D_00CBCD8D) += 1;
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) = (u8) (*(u8 *)D_00CBCD8D);
                    temp_v1_2 = M2C_FIELD(arg0, void **, 0);
                    M2C_FIELD(temp_v1_2, u16 *, 0x18) = (u16) M2C_FIELD(temp_v1_2, u16 *, 0x1A);
                    func_001C48E8(M2C_FIELD(arg0, void **, 4) + 0x44, 0, 8, temp_a3_2, temp_a4_2, temp_a5_2);
                    return;
                }
                func_00B39ED0(arg0);
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0xC) == 1) {
                    func_00BD3BE0(arg0, 2);
                }
            }
        }
    }
}
