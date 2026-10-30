/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, int);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E1510[];
extern M2C_UNK func_0031B000;
extern M2C_UNK func_0031B0E0;

s32 func_0031B1A0(void *arg0) {
    void *temp_a1;

    temp_a1 = M2C_FIELD(arg0, void **, 0x44);
    if (M2C_FIELD(temp_a1, u8 *, 8) == 0) {

    } else {
        if (*M2C_FIELD(arg0, u8 **, 0x3C) == M2C_FIELD(temp_a1, u8 *, 0x78)) {
            func_00338A60(func_00338AD0(0x80000005, &func_0031B000, 9, ((void *)D_003E1510)), arg0);
        }
        func_003387D0(arg0, (s32) &func_0031B0E0);
    }
    return 0;
}
