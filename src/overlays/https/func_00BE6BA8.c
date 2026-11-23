/* compiler: ee-gcc-2.96 */
#include "types.h"
typedef struct {
    u8 reserved00[12];
    void *data;
} StoredData;
s32 func_00BE6BA8(StoredData *ctx, void **out) {
    void *data = ctx->data;
    *out = data;
    return data ? 0 : 0xb;
}
