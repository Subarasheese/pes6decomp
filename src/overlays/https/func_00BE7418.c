/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct CryptoArena CryptoArena;
typedef struct {
    CryptoArena *arena;
} CryptoCollection;
extern s32 func_00BF4EF0(CryptoArena *arena, u32 size, const void *input, void **copy);
extern s32 func_00BE74A8(CryptoCollection *, u32 tag, s32 flags, void *value, u32 size);
s32 func_00BE7418(CryptoCollection *collection, u32 tag, s32 flags, void *value, u32 size) {
    void *saved;
    if (!size)
        saved = value;
    else if (func_00BF4EF0(collection->arena, size, value, &saved))
        return 0x803;
    return func_00BE74A8(collection, tag, flags, saved, size);
}
