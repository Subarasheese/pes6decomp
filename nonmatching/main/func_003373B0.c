/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00333600(int);
extern void func_00338930(int);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E5F18[];
extern M2C_UNK func_00336490;

s32 func_003373B0(void *arg0) {
    s32 temp_s1;
    s32 temp_v1;
    void *temp_s2;
    void *temp_v0;

    temp_s2 = M2C_FIELD(arg0, void **, 0x40);
    temp_s1 = func_00333600(6);
    temp_v1 = temp_s1 | func_00333600(5);
    if ((M2C_FIELD(temp_s2, u8 *, 8) | temp_v1) == 0) {
        return 0;
    }
    if (temp_v1 != 0) {
        temp_v0 = func_00338AD0(0x80000024, &func_00336490, 3, ((void *)D_003E5F18));
        func_003389F0(temp_v0, 3, 1);
        func_00338A60(temp_v0, arg0);
    }
    func_00338930((s32) arg0);
    return 1;
}
