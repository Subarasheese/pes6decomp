/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6MemRegion_Count[];
extern char Pes6MemRegion_Table[];

void Pes6MemRegion_ClearState(s32 arg0) {
    if (arg0 < (*(s32 *)Pes6MemRegion_Count)) {
        M2C_FIELD(((arg0 << 4) + (*(s32 *)Pes6MemRegion_Table)), s8 *, 0xC) = 0;
    }
}
