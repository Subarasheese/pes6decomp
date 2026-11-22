/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CE4330[];

s8 *func_00BA6E60(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return ((s8 *)D_00CE4330) + (arg0 * 0x50);
    }
    return NULL;
}
