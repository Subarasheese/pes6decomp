/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s8 D_00CB61F0[];
extern s8 D_00CB62B0[];
extern void *memcpy(void *, const void *, unsigned int);

void *func_0099DC70(void) {
    return memcpy(D_00CB61F0, D_00CB62B0, 0xC0);
}
