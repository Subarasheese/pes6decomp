/* compiler: ee-gcc-2.96-G0 */
#include "pes6/https/method_dispatch.h"

extern s32 func_00BE6070(MethodPair *pair, const SlotMethods **slot, s32 mode,
                         void *key, void *parameter, void **choices, void *options);

s32 func_00BE4078(MethodPair *pair, void *key, void **choices, void *options) {
    const SlotMethods **slot = &pair->second;
    s32 result = func_00BE6070(pair, slot, 1, key, pair->parameter, choices, options);
    if (result == 0)
        pair->active = slot;
    return result;
}
