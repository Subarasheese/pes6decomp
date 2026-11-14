/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void *);
extern s32 func_00207D10(void *);
extern void func_00207390(void *, s32);
extern void func_00209A00(void *, s32, s32);
extern void func_00B2ACF0(void **, s32);
extern s32 func_00BBB8C0(s32);
extern void func_00BD3BA0(void **, s32, s32);
extern void func_00BD4040(void **, u8);
extern s32 func_00C01090(s32);

void func_00B86710(void **arg0) {
    s32 s0;
    s32 v;
    void *p;

    func_00209820(M2C_FIELD(*arg0, void **, 4));
    p = M2C_FIELD(*arg0, void **, 4);
    if (M2C_FIELD(p, u16 *, 0x30) == 0x4B8) {
        s0 = 0;
        func_00B2ACF0(arg0, 0x4B8);
        if (func_00C01090(1) != 0) {
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                M2C_FIELD(*arg0, s16 *, 0x18) = 0x7F;
                s0 = 1;
            }
        } else {
            if (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0x34) != 0) {
                goto chk8;
            }
block5:
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                M2C_FIELD(*arg0, s16 *, 0x18) = 0xA;
                s0 = 1;
            }
        }
done:
        if (s0 != 0) {
            if (M2C_FIELD(*arg0, u16 *, 0x18) == 8) {
                v = 3;
            } else {
                v = 1;
            }
            func_00BD4040(arg0, v);
            func_00BD3BA0(arg0, 4, 1);
            func_00BD3BA0(arg0, 5, 1);
        }
    } else {
        func_00209A00(p, 0x4B8, 0);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
    }
    return;
chk8:
    if (func_00BBB8C0(3) != 0) {
        M2C_FIELD(*arg0, s16 *, 0x18) = 8;
        s0 = 1;
        goto done;
    }
    goto block5;
}
