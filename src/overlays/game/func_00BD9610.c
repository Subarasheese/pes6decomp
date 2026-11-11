/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
s32 func_009E1C90(M2C_UNK);                         /* extern */

s32 func_00BD9610(void) {
    if ((func_009E1C90(1) & 0xFF) == 0xC && func_00BF6280() == 0xA && (func_009E1C90(3) & 0xFF) == 4) {
        return 1;
    }
    return 0;
}
