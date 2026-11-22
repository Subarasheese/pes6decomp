/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00AE1000[];

char *func_009A6000(s32 arg0, s32 arg1) {
    return (arg1 * 8) + (((char *)D_00AE1000) + (arg0 * 0x28));
}
