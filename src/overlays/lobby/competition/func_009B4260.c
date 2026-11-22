/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DB940(void *);
extern s8 *D_003EAD1C;

s32 func_009B4260(void) {
    return func_002DB940(*(void * *)((s8 *)(D_003EAD1C) + 0x1A8));
}
