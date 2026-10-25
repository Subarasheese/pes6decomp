/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_002FB090(void);
extern s32 func_002FB000(void);

s32 func_002FBE00(void) {
    s32 r;
    if (func_002FB090() == 0) {
        return 0;
    }
    r = func_002FB000();
    if (r == 0x10 || r == 0x68 || r == 0x71) {
        return 0;
    }
    return 1;
}
