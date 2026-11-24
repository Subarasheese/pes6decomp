/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u32 Pes6Random_State[];
s32 Pes6Random_Below(u16 upper) {
    if (upper != 0) {
        u32 state = Pes6Random_State[0];
        u16 value;

        state ^= state << 17;
        state ^= state >> 15;
        Pes6Random_State[0] = state;
        value = (u16)((float)upper * ((1.0f / 4294967296.0f) * (float)Pes6Random_State[0]));
        if (value >= upper) {
            value = upper - 1;
        }
        return value;
    }
    return 0;
}
