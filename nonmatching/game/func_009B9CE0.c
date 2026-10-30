/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_009CD440(void *);                      /* extern */
s32 func_009DFF20(void *);                          /* extern */
M2C_UNK func_009E0200(void *);                      /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00C43870(void *);                          /* extern */
extern char Pes6MatchState_Current[];

s32 func_009B9CE0(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_v1_2;
    u8 temp_v1;
    void *temp_a0;

    if ((func_009E1C90(1) & 0xFF) != 5) {
        if ((func_009E1C90(1) & 0xFF) != 0xC) {
            goto block_5;
        }
        if (func_00BF6280() == 0) {
            goto block_30;
        }
block_5:
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)Pes6MatchState_Current)) {
            temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
            if ((temp_v1 != 0x11) && (temp_v1 != 0x83)) {
                if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) <= (f32) arg2) && (func_009DFF20(arg0) != 0)) {
                    func_009E0200(arg0);
                    func_009CD440(arg0);
                    return 1;
                }
                goto block_20;
            }
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            temp_v1_2 = M2C_FIELD(temp_a0, u16 *, 0x30);
            if ((temp_v1_2 != 0x1FC) && (temp_v1_2 != 0x277) && (temp_v1_2 != 0x278) && (temp_v1_2 != 0x276)) {
                goto block_20;
            }
            if (!(M2C_FIELD(temp_a0, f32 *, 0x38) <= (f32) arg2) && (func_009DFF20(arg0) != 0)) {
                func_009E0200(arg0);
                func_009CD440(arg0);
                return 1;
            }
block_20:
            if ((M2C_FIELD(arg0, u8 *, 0x4C) != 0) && !(M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38) <= (f32) arg1) && (func_00C43870(arg0) != 0)) {
                if (M2C_FIELD(arg0, u8 *, 0x16) != 0x9D) {
                    func_00209A00(M2C_FIELD(arg0, void **, 4), M2C_FIELD(arg0, u16 *, 0xA4), 0);
                    func_00207390(M2C_FIELD(arg0, void **, 4), 8);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
                }
                func_009CD440(arg0);
                return 1;
            }
            goto block_30;
        }
        goto block_30;
    }
block_30:
    return 0;
}
