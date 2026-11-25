/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/memory_card_request.h"
typedef struct {
    CardRequest header;
    u8 reserved10[0x68];
    void *buffer;
    u8 reserved7c[4];
    s32 size, descriptor;
    u8 reserved88[0x3c];
    s32 submittedSize;
} CardRead;
extern s32 func_00115C48(s32 file, void *buffer, s32 size);
static inline s32 card_start_read(s32 file, void *buffer, s32 bytes) {
    D_00538228[0] = 0;
    D_0053822C[0] = file;
    D_00538230[0].buffer = buffer;
    D_00538234[0].value = bytes;
    return func_00115C48(file, buffer, bytes);
}
s32 func_00217380(CardRead *request) {
    s32 file, bytes, status, result;
    void *buffer;
    CardTransferRange *range;
    file = request->descriptor;
    buffer = request->buffer;
    bytes = request->size;
    if (D_003E9A08) {
        range = &D_003E9A08[D_003E9A04];
        if (range->offset != -1)
            bytes = range->length;
    }
    status = card_start_read(file, buffer, bytes);
    result = 0;
    D_00538224[0] = 0;
    if (status == 0) {
        request->header.state = 0;
        result = -127;
    }
    request->submittedSize = bytes;
    return result;
}
