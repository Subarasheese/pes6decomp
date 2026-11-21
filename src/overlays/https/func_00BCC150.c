/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00C3F778[];

void *func_00BCC150(u32 arg0) {
    if (arg0 < 0x23U) {
        return ((0x22 - arg0) * 0x28) + ((void *)D_00C3F778);
    }
    return NULL;
}
