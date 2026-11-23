/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
#include "pes6/https/ssleay_091b_types.h"
extern s32 func_00BAA5E0(BUF_MEM *buffer, s32 length);
extern void *memcpy(void *, const void *, u32);
s32 func_00BAA6A8(BUF_MEM *buffer, const void *data, u32 size) {
    s32 previous = buffer->length;
    s32 requested = previous + size;
    s32 result = func_00BAA5E0(buffer, requested);
    if (result == requested)
        memcpy(buffer->data + previous, data, size);
    return result;
}
