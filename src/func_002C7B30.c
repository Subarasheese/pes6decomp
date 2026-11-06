/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 pad[0xF0]; } R;
extern u8 D_005E3611[][0xF0];
extern s32 func_002781A0(void);

void func_002C7B30(s32 a0) {
    if (func_002781A0() != 0) {
        D_005E3611[a0][0] |= 1;
    } else {
        D_005E3611[a0][0] &= 0xFE;
    }
}
