/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern s32 func_00338530(s32);
extern int func_003387D0(void *, int);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E17B0[];
extern M2C_UNK func_0032D340;
extern M2C_UNK func_0032DE80;

s32 func_0032DDF0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x28) == 0) {
        return 0;
    }
    if (func_00338530(0x8000000B) == 0) {
        func_00338A60(func_00338AD0(0x8000000B, &func_0032D340, 5, ((void *)D_003E17B0)), arg0);
    }
    func_003387D0(arg0, (s32) &func_0032DE80);
    return 1;
}
