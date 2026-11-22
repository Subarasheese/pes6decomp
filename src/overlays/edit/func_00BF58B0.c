/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 D_00CE8E20[];
extern s8 D_00CEA28C[];
extern void *memcpy(void *, const void *, unsigned int);

void *func_00BF58B0(void) {
    return memcpy(D_00CE8E20, D_00CEA28C, 0x146C);
}
