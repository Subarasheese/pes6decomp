/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(16)
#include "pes6/memory_card_request.h"
typedef struct {
    u8 reserved00[0x18];
    u32 address;
    s32 size;
} CardWriteEntry;
typedef struct {
    u8 reserved00[0x1c];
    CardWriteEntry *entries;
} CardWriteTable;
typedef struct {
    CardRequest header;
    CardWriteTable *table;
    u8 reserved14[0x70];
    s32 descriptor;
    u8 reserved88[0x30];
    s32 index;
    u8 reservedBC[8];
    s32 submittedSize;
} CardWrite;
extern s32 func_00115D60(s32 file, u32 address, s32 size);
static inline s32 card_start_write(s32 file, u32 address, s32 bytes) {
    D_00538228[0] = 0;
    D_0053822C[0] = file;
    D_00538230[0].address = address;
    D_00538234[0].value = bytes;
    return func_00115D60(file, address, bytes);
}
s32 func_00219970(CardWrite *request) {
    s32 file, bytes, status, result;
    u32 address;
    CardTransferRange *range;
    u32 offset;
    CardWriteEntry *entry;
    file = request->descriptor;
    offset = (u32)request->index * sizeof(CardWriteEntry);
    entry = (CardWriteEntry *)(offset + (u32)request->table->entries);
    address = entry->address;
    bytes = entry->size;
    if (D_003E9A08) {
        range = &D_003E9A08[D_003E9A04];
        if (range->offset != -1)
            bytes = range->length;
    }
    status = card_start_write(file, address, bytes);
    result = 0;
    D_00538224[0] = 0;
    if (status == 0) {
        request->header.state = 0;
        result = -127;
    }
    request->submittedSize = bytes;
    return result;
}
