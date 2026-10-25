/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_00CBBE00[];
extern s32 D_003E6490[];
s32 func_00358000(s32);
void func_003387D0(s32, s32 (*)(s32), s32 *);

s32 func_00357130(s32 a) {
    if (D_00CBBE00[0] == 0xFF) {
        func_003387D0(a, func_00358000, D_003E6490);
        return 1;
    }
    return 0;
}
