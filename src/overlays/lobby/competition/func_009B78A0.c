/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DB940(void *);
extern s8 *D_00A7DC08[];

s32 func_009B78A0(void) {
    return func_002DB940(*(void * *)((s8 *)(D_00A7DC08[0]) + 0x2C8));
}
