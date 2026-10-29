/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *Pes6Ball_Current;

s32 Pes6Ball_GetPositionX(f32 *outX) {
    f32 positionX;

    positionX = M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    *outX = positionX;
    return (s32) positionX;
}
