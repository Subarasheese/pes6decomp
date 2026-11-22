/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008EBB80[];

char *func_008B6E40(s32 arg0) {
    return ((char *)D_008EBB80) + ((arg0 & 0xFF) * 0x10);
}
