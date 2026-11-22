/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 Pes6Settings_Get_B05_b3_w3(void);
extern u8 D_00591C09[];

s32 func_0093DAA0(void) {
    if (D_00591C09[0] == 4) {
        return Pes6Settings_Get_B05_b3_w3() & 0xFF;
    }
    return 3;
}
