/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00967560(u8 *);
extern s32 func_00997EB0();
extern u8 D_00591E4F[];
extern u8 D_00591E67[];
extern u8 D_00591F14[];

s32 func_00983130(u8 *arg0) {
    u8 kind;

    if (arg0[0x24] == 0) {
        if (func_00997EB0() != 0) {
            return 4;
        }
    }
    if (D_00591F14[0] == 0) {
        if ((func_00967560(arg0) != 0) && (arg0[0x24] != 0)) {
            return 2;
        }
    }
    kind = arg0[0x16];
    if (kind == 27) {
        if ((arg0[0] == D_00591E4F[arg0[0x13] * 2]) && (arg0[0x24] != 0)) {
            return 1;
        }
    } else if (kind == 7) {
        if ((arg0[0x1DD] == 1) && (D_00591E67[arg0[0x12]] == 0)) {
            return 1;
        }
    }
    if (arg0[0] != D_00591E4F[arg0[0x13] * 2]) {
        return 0;
    }
    return 3;
}
