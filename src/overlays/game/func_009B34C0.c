/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6Math_Atan2Fixed(s32, s32);

u16 func_009B34C0(f32 x, f32 z, f32 targetX, f32 targetZ)
{
    return (u16)Pes6Math_Atan2Fixed(-(s32)(targetZ - z), (s32)(targetX - x));
}
