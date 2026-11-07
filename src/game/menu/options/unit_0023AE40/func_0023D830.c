/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591C09[];
u8 *func_00221210(void);
s32 func_002DCA30(void);

u8 func_0023D830(s32 a) {
    u8 *p = func_00221210();

    if (D_00591C09[0] == 0 && func_002DCA30() == 0) {
        if (a == 0) {
            return p[0x14];
        }
        return p[0x15];
    }
    return 0;
}
