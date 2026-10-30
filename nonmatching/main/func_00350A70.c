/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030F1A0(void);
extern int func_0030E780(void);
extern s32 func_00332FA0(void);
extern int func_003387D0(void *, int);
extern u8 func_0030DBA0(void);
extern int func_0030F1B0(void);
extern s32 func_00338A60(void *, void *);
extern int Pes6Ball_CopyPosition(int);
extern s32 func_00338750(void *, s32);
extern s32 func_0030EA70(void);
extern int func_0030E830(void);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00C7B820();                                /* extern */
extern char D_003E6408[];
extern u8 D_003E9F7C;
extern u8 D_003E9F80;
extern u8 D_003E9F84;
extern char D_0059237B[];
extern M2C_UNK func_00350180;
extern M2C_UNK func_003502B0;
extern M2C_UNK func_003503F0;

s32 func_00350A70(void *arg0) {
    f32 sp30;
    s32 temp_hi;
    void *temp_v0;

    if (func_0030DBA0() == 0) {
        goto block_27;
    }
    if (func_0030F1B0() != 0) {
        goto block_27;
    }
    if (func_0030E830() >= 2) {
        goto block_27;
    }
    if (func_0030F1A0() != 0) {
        Pes6Ball_CopyPosition((s32) &sp30);
        if (!(fabsf(sp30) <= 3840.0f)) {
            goto block_27;
        }
        if (func_00332FA0() != 0) {
            goto block_27;
        }
        temp_hi = func_0030EA70() % 45;
        if ((temp_hi != 0x28) && (temp_hi != 0x1E) && (temp_hi != 0x1C) && (temp_hi != 0xF) && (func_0030E780() != 0)) {
            if (func_00C7B820() != 0) {
                if (D_003E9F84 == 0) {
                    D_003E9F84 = 1;
                    func_00338AD0(0x80000042, &func_003502B0, 0x11, ((void *)D_003E6408));
                    goto block_23;
                }
                return 0;
            }
            goto block_27;
        }
block_23:
        if (D_003E9F80 == 0) {
            if (D_003E9F7C == 0) {
                temp_v0 = func_00338AD0(0x8000005D, &func_003503F0, 0x11, ((void *)D_003E6408));
                func_003389F0(temp_v0, 0, (s32) (*(u8 *)D_0059237B));
                func_00338A60(temp_v0, arg0);
            }
        } else {
            func_003387D0(arg0, (s32) &func_00350180);
            func_00338750(arg0, 1);
        }
        goto block_27;
    }
block_27:
    return 0;
}
