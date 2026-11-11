/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BF6270(void);
extern void func_00B364D0(u32);
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00B363E0(M2C_UNK);                         /* extern */
M2C_UNK func_00B36400(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00B36450();                                /* extern */
M2C_UNK func_00B9E2B0(void *);                      /* extern */
M2C_UNK func_00BA90E0(void *, u16, f32);        /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BE0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00BDF940(void *arg0) {
    u8 temp_s1;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if (func_00B363E0(1) != 0 || (func_00B36450() == 0 && func_009B33A0(M2C_FIELD(arg0, void **, 0), (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C), (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x70)) < 0x190000U)) {
        u8 temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
        if (temp_s1 == func_00BF6270()) {
            func_00B36400(1, 1);
            func_00B9E2B0(arg0);
        } else {
            func_00BD3BE0(arg0, 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0xA;
        }
    } else {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x12) == 5) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), (*(f32 *)D_00CBCAD8), (*(f32 *)D_00CBCADC));
            func_00BA90E0(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x2C), 132.0f);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8) (func_00BBB8C0(3) + 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4F) = (s8) (func_00BBB8C0(3) + 1);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x50) = (s8) (func_00BBB8C0(3) + 1);
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4), 0x59E, 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x93;
            func_00B364D0(2U);
        }
    }
}
