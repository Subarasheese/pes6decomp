/* compiler: mwcc-3.0.1b151 */

#include "pes6/pass_directions.h"

u8 func_009529E0(u8 limit) {
    s32 count = 0;
    s32 i = 0;
    s32 heading = 0;
    for (i = 0; i < 8; ++i) {
        heading = (u16)(i * 0x2000);
        if (limit <= D_00CB52A0.costs[(u16)headingSector((u16)heading)])
            ++count;
    }
    return (u8)count;
}
