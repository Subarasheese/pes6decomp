/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_002DB8A0(void *);

s32 func_008C3860(s8 *arg0) {
    return func_002DB8A0(*(void * *)((s8 *)(arg0) + 0x50));
}
