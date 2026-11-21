/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern char D_00C3F560[];

void *func_00BCA090(u32 arg0) {
    if (arg0 < 8U) {
        return ((7 - arg0) * 0x28) + ((void *)D_00C3F560);
    }
    return NULL;
}
