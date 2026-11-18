/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


extern char Pes6MemRegion_Count[];
extern char Pes6MemRegion_Table[];

s32 Pes6MemRegion_Get(s32 arg0) {
    if (arg0 >= (*(s32 *)Pes6MemRegion_Count)) {
        return 0;
    }
    return (*(s32 *)Pes6MemRegion_Table) + (arg0 * 0x10);
}
