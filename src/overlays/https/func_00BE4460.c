/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
#include "pes6/https/method_dispatch.h"
extern s32 func_00BE6070(MethodPair *, const SlotMethods **, s32, void *, void *, void **, void *);
s32 func_00BE4460(MethodPair *pair, void **choices, void *options) {
    return func_00BE6070(pair, &pair->first, 0, 0, 0, choices, options);
}
