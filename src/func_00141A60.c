/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E97F4;
extern u8 D_00376480[];
extern u8 D_00376490[];
extern f32 D_00376494[];
extern u32 D_004FDFB8[];

u8 *func_00141A60(void) {
    if (D_003E97F4 != 0) {
        return D_00376480;
    }
    D_00376494[0] = (u32)(u8)(D_004FDFB8[0] >> 24);
    return D_00376490;
}
