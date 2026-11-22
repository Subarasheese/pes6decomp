/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_008EBDE0[];

char *func_008C5210(s32 arg0) {
    return ((char *)D_008EBDE0) + ((arg0 & 0xFF) * 0x10);
}
