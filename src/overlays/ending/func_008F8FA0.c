/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_008F9220(s32, s32, s32, s32);   /* extern */
extern u8 D_003EA674;

s32 func_008F8FA0(s32 arg0) {
    if (D_003EA674 == 0xC) {
        func_008F9220(arg0, -1, -1, 0);
    }
    return 1;
}
