/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0052AF20[];
extern char D_0052AF24[];
extern char D_0052AF28[];
extern char D_0052AF2C[];

s32 func_001E4F30(void *object, void *offset) {
    f32 x;
    f32 y;

    x = M2C_FIELD(object, f32 *, 0x10) + M2C_FIELD(offset, f32 *, 0);
    if (!(x < (*(f32 *)D_0052AF20)) && (x <= (*(f32 *)D_0052AF28))) {
        y = M2C_FIELD(object, f32 *, 0x14) + M2C_FIELD(offset, f32 *, 4);
        if (!(y < (*(f32 *)D_0052AF24)) && (y <= (*(f32 *)D_0052AF2C))) {
            return 1;
        }
    }
    return 0;
}
