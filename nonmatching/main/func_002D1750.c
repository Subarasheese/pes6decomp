/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_001AAF20(void *, int);
extern void func_001AAF30(int, int, int);
extern void func_0017BFF0(void *, s32, s8);
M2C_UNK func_0017C080(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
M2C_UNK func_001AB490();                            /* extern */
extern char D_00397C20[];
extern char D_003B11B0[];
extern void *D_003E9D68;
extern M2C_UNK func_00186A30;

void func_002D1750(void *arg0) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x10);
    func_001AB490();
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 4);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s32 *, 0x18) = (s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x14), s32 *, 0x14);
    func_0017C080(temp_s0, 0, *M2C_FIELD(D_003E9D68, s32 **, 4));
    func_0017BFF0(temp_s0, 0, 0x10);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x1C), s32 *, 0) = 1;
    func_0017C080(temp_s0, 1, M2C_FIELD(M2C_FIELD(D_003E9D68, s32 **, 4), s32 *, 4));
    func_0017BFF0(temp_s0, 1, 0x10);
    M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x1C), s32 *, 0x14) = 1;
    func_001AAF30((s32) arg0, (s32) ((void *)D_00397C20), 5);
    func_001AAF20(arg0, (s32) ((void *)D_003B11B0));
    func_001AAF40(arg0, 1);
    func_001AAF50(arg0, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x1C8) = &func_00186A30;
}
