/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
extern u8 Pes6MatchFlow_GetState(s32);

s32 func_00BD95C0(void) {
    if (Pes6MatchFlow_GetState(1) == 0xC) {
        if (func_00BF6280() == 0) {
            return 1;
        }
    }
    return 0;
}
