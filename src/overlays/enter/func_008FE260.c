/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00338940(s32);
extern s32 Pes6Job_SetDone(int);
extern void func_00333320(s32);
extern s32 func_0090F610(void);

s32 func_008FE260(s32 arg0) {
    if (func_0090F610() == 0) {
        func_00333320(1);
        func_00338940(0x2F);
        return Pes6Job_SetDone(arg0);
    }
    return 0;
}
