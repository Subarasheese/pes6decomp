/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008EE190[];

char *func_008B9680(s32 arg0) {
    return ((char *)D_008EE190) + ((arg0 & 0xFF) * 0x2C) + 0x1C;
}
