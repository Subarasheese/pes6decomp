/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef s32 (*PriorityBefore)(const s8 *, const s8 *, s32);
extern s32 func_002ADF20(const s8 *, const s8 *, s32);
extern u8 func_002ADE30(const s8 *, const s8 *, const u8 *, u8, PriorityBefore);
extern void *func_001C47E0(void *, const void *, u32);
void func_002ADD60(u8 *order, const s8 *weights, u8 count) {
    u8 i;
    for (i = 0; i < (u8)count; ++i) {
        u8 at = func_002ADE30(&weights[i], weights, order, i, func_002ADF20);
        if (at != (u8)i) {
            func_001C47E0(order + (at + 1), order + at, (u8)i - at);
            order[at] = i;
        } else {
            order[at] = i;
        }
    }
}
