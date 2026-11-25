/* compiler: mwcc-3.0.1b151 */
#include "pes6/texture_release.h"

typedef struct {
    u32 reserved00;
    s32 owner;
    void *pixels;
    u32 reserved[2];
} TextureEntry;
typedef struct {
    u8 reserved[0x1c];
    TextureEntry *entries;
} TextureSet;
extern void Pes6Heap_Free(void *memory);
void func_0017C030(TextureSet *set, s32 index) {
    TextureEntry *entry = &set->entries[index];
    if (entry->pixels) {
        func_00140FE0(entry->owner, entry->pixels);
        Pes6Heap_Free(entry->pixels);
        entry->pixels = 0;
    }
}
