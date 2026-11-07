/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00B24670(s32);
s32 func_009E1C90(s32);
s32 func_003387D0(s32, void *, void *);
extern u8 D_00358000[];
extern u8 D_003E6490[];

s32 func_00358190(s32 arg0) {
    if (func_00B24670(arg0) == 0) {
        if ((u8)func_009E1C90(2) >= 7) {
            func_003387D0(arg0, D_00358000, D_003E6490);
        }
    }
    return 0;
}
