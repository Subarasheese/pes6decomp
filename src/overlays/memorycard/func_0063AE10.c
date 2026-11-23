/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 pad00[0xc];
    void *drawable;
} MemoryCardSprite;
extern MemoryCardSprite *func_001D6EF0(void *, void *, s32);
extern s32 func_001D7820(void *);
extern void func_001DEF30(void *, s32);
s32 func_0063AE10(void *owner, MemoryCardSprite **slot, void *resource, s32 index) {
    s32 created = 0;
    if (owner && slot && !*slot && resource) {
        MemoryCardSprite *sprite = func_001D6EF0(owner, resource, index);
        void *drawable;
        *slot = sprite;
        drawable = sprite->drawable;
        func_001DEF30(drawable, func_001D7820(owner));
        created = 1;
    }
    return created;
}
