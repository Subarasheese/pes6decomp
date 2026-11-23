/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct CryptoCollection CryptoCollection;
typedef struct {
    const void *data;
} CryptoValue;
extern s32 func_00BE98A8(u8 *encoded, u32 *length, const void *input);
extern s32 func_00BE7418(CryptoCollection *collection, u32 tag, s32 flags, void *value, u32 size);
s32 func_00BE8F90(CryptoCollection *list, u32 tag, s32 flags, const CryptoValue *value) {
    u8 encoded[32];
    u32 length;
    s32 result = 0;
    if (value) {
        result = func_00BE98A8(encoded, &length, value->data);
        if (result == 0)
            result = func_00BE7418(list, tag, flags, encoded, length);
    }
    return result;
}
