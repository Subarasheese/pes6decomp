/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00262340(void);
extern s32 func_002F3940(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00CD3D30(s32);                             /* extern */
M2C_UNK func_00CF4FA0(void *);                      /* extern */
M2C_UNK func_00CF51B0(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00CF52A0(void *);                      /* extern */
M2C_UNK func_00CF52E0(void *, M2C_UNK);             /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB2CC;

void func_00CDF630(void) {
    void *temp_s0;

    temp_s0 = D_003E7E1C + 0x190;
    func_001C48E8(temp_s0, 0, 0x134);
    D_003EB2CC = func_00CD3D30(func_00262340());
    func_00CF52E0(temp_s0, 0);
    func_00CF52A0(temp_s0);
    func_00CF4FA0(temp_s0);
    func_00CF51B0(temp_s0, D_003EB2CC, 2, 0);
    func_002F3940(M2C_FIELD(D_003E7E1C, void **, 0x190));
}
