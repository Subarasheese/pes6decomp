/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00340C80(f32);
extern int Pes6Job_SetField4(void *, char *, char *);
extern s8 D_003E9F98;
extern char func_00355C10[];
extern char D_003E6448[];

s32 func_00355BA0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s32 *, 0x30);
    if (func_00340C80(30.0f) < temp_s0) {
        Pes6Job_SetField4(arg0, func_00355C10, D_003E6448);
        D_003E9F98 = 0;
    }
    return 1;
}
