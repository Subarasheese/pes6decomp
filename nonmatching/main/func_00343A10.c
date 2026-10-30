/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, int);
extern int func_00333600(int);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E61A8[];
extern M2C_UNK func_00343880;
extern M2C_UNK func_00343C90;

s32 func_00343A10(void *arg0) {
    s32 temp_s0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), u8 *, 8) != 0) {
        func_003387D0(arg0, (s32) &func_00343C90);
        return 0;
    }
    temp_s0 = func_00333600(4);
    if ((func_00333600(6) | temp_s0) != 0) {
        func_00338A60(func_00338AD0(0x8000001A, &func_00343880, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61A8)), arg0);
        func_003387D0(arg0, (s32) &func_00343C90);
        return 1;
    }
    return 0;
}
