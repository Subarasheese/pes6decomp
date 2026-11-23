/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern const s16 *func_001BB370(s32 node);
s32 func_001BAF70(s32 node) {
    s32 result = -1;
    if (node) {
        const s16 *id = func_001BB370(node);
        if (id)
            result = *id;
    }
    return result;
}
