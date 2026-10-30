/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6270(void);
M2C_UNK func_0027A600(void *, M2C_UNK);             /* extern */
s32 func_009B3070(s16, u16);                        /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00BBA080(void *, void *);              /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BBECD0();                            /* extern */
M2C_UNK func_00BD7880(void *);                      /* extern */
M2C_UNK func_00BD7C40(void *);                      /* extern */
M2C_UNK func_00BD7E70(void *);                      /* extern */
M2C_UNK func_00BD8C50(void *);                      /* extern */
s32 func_00BD94C0(void *);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00592370[];
extern char D_00CBCAD1[];

void func_00BD8AA0(void *arg0) {
    s32 temp_a0;
    u8 temp_s1;
    void *temp_a1;
    void *temp_s1_2;

    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0xFF;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x10) != 0) {
        if ((*(u8 *)D_00CBCAD1) == 0x15) {
            temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
            if (temp_s1 == func_00BF6270()) {
                func_00BD8C50(arg0);
                return;
            }
            goto block_4;
        }
block_4:
        if (((*(u8 *)D_00592370) != 0) && (func_00BBB8C0(0xA) >= 6)) {
            func_00BD8C50(arg0);
            return;
        }
        temp_s1_2 = M2C_FIELD(arg0, void **, 0);
        if (((func_009B3070(func_009B3480(temp_s1_2, M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C), M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C)), M2C_FIELD(temp_s1_2, u16 *, 0x26)) & 0xFFFF) >= 0x4000) && ((func_00BD94C0(arg0) & 0xFF) == 1)) {
            func_0027A600(M2C_FIELD(arg0, void **, 0), 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x1C) = 0;
            temp_a1 = M2C_FIELD(arg0, void **, 0);
            M2C_FIELD(temp_a1, s16 *, 0x2C) = func_009B3480(M2C_FIELD(arg0, void **, 0), M2C_FIELD(Pes6Ball_Current, f32 *, 0x47C), M2C_FIELD(Pes6Ball_Current, f32 *, 0xB7C));
            M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x4C) = 0x3A;
            func_00BBA080(arg0, temp_a1);
            return;
        }
        temp_a0 = func_00BD94C0(arg0) & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 2:
            func_00BD7C40(arg0);
            break;
        case 1:
            func_00BD7E70(arg0);
            break;
        case 0:
            func_00BD7880(arg0);
            break;
        }
        return;
    }
    func_00BBECD0();
}
