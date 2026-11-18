/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_003395B0(void *);
extern s32 func_00340C80(f32);
extern s32 Pes6Job_SetField4(void *, void (*)(void), void *);
extern void func_00355090(void);
extern char D_003E6448[];

s32 func_00355010(void *arg0) {
    s32 temp_s0;

    temp_s0 = func_003395B0(M2C_FIELD(arg0, void **, 0x3C)) - M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_s0 < func_00340C80(20.0f)) {
        return 0;
    }
    Pes6Job_SetField4(arg0, func_00355090, D_003E6448);
    return 1;
}
