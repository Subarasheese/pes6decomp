/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DB940(void *);
extern s8 *D_003EAD18;

s32 func_009B3220(void) {
    return func_002DB940(*(void * *)((s8 *)(D_003EAD18) + 8));
}
