/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern int func_003387D0(void *, int);
extern int func_00333600(int);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E6228[];
extern M2C_UNK func_00349930;
extern M2C_UNK func_00349C70;

s32 func_00349BB0(void *arg0) {
    void *temp_s0;
    void *temp_v0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x40);
    if (func_00333600(5) == 0) {
        if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
            return 0;
        }
        func_003387D0(arg0, (s32) &func_00349C70);
        return 1;
    }
    temp_v0 = func_00338AD0(0x80000019, &func_00349930, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E6228));
    M2C_FIELD(temp_v0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_s0, u8 *, 0x78);
    M2C_FIELD(temp_v0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    func_00338A60(temp_v0, arg0);
    func_003387D0(arg0, (s32) &func_00349C70);
    return 0;
}
