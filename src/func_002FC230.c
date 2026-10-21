/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003B4450[];

void *func_002FC230(s32 arg0) {
    if ((arg0 >= 0) && ((u32) arg0 < 0xDU)) {
        return (void *)&D_003B4450[arg0 << 7];
    }
    return NULL;
}
