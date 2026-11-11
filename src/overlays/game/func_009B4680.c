/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern u8 D_00591BE4[];
extern char D_00CBD264[];

s32 func_009B4680(void) {
    return (s32)(*(u32 *)D_00CBD264 + ((u32)*(u8 *)D_00591BE4 >> 1));
}
