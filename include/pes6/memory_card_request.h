#ifndef PES6_MEMORY_CARD_REQUEST_H
#define PES6_MEMORY_CARD_REQUEST_H

#include "types.h"

struct Metadata {
    int words[16];
};

typedef struct {
    u8 reserved00[8];
    s32 state;
    s16 port, slot;
} CardRequest;

typedef struct {
    CardRequest header;
    u8 reserved10[0x14];
    s32 type, freeSpace, formatted;
} CardInfoRequest;

typedef struct {
    CardRequest header;
    const char *path;
    s32 mode, submittedCount;
} CardDirectoryRequest;

typedef struct {
    CardDirectoryRequest directory;
    u8 reserved1C[0xA0];
    struct Metadata *records;
    s32 limit;
} CardDirectoryRequestBC;

typedef struct {
    CardDirectoryRequest directory;
    u8 reserved1C[0xA4];
    struct Metadata *records;
    s32 limit;
} CardDirectoryRequestC0;

typedef struct {
    CardRequest header;
    u8 reserved10[4];
    s32 mode, submittedCount;
    u8 reserved1C[0x1C];
    char path[0x84];
} CardDirectoryPathRequest;

typedef struct {
    s32 offset, length, reserved08;
} CardTransferRange;

extern s32 D_003E9A04;
extern CardTransferRange *D_003E9A08;

typedef union {
    s32 value;
    s32 *output;
    void *buffer;
    u32 address;
    const char *path;
    struct Metadata *records;
} CardCommandArgument;

extern s32 D_00538224[], D_00538228[], D_0053822C[];
extern CardCommandArgument D_00538230[], D_00538234[], D_00538238[], D_0053823C[], D_00538240[];
extern struct Metadata D_00537C00[];
extern const char D_003D4538[];

s32 func_00115FF8(s32 port, s32 slot, s32 *type, s32 *freeSpace, s32 *formatted);
s32 func_001161E8(s32 port, s32 slot, const char *path, s32 mode, s32 limit,
                  struct Metadata *records);
s32 func_00116BB0(s32 port, s32 slot, const char *path);

static inline s32 card_start_info(s32 port, s32 slot, s32 *type, s32 *freeSpace, s32 *formatted) {
    s32 status = 0;
    D_00538228[0] = 0;
    D_0053822C[0] = port;
    D_00538230[0].value = slot;
    D_00538234[0].output = type;
    D_00538238[0].output = freeSpace;
    D_0053823C[0].output = formatted;
    if (port != -1 && slot != -1)
        status = func_00115FF8(port, slot, type, freeSpace, formatted);
    return status;
}

static inline s32 card_request_info(CardInfoRequest *request) {
    s32 result, status;
    s32 port, slot;
    s32 *type, *freeSpace, *formatted;

    slot = request->header.slot;
    port = request->header.port;
    type = &request->type;
    freeSpace = &request->freeSpace;
    formatted = &request->formatted;
    status = card_start_info(port, slot, type, freeSpace, formatted);
    D_00538224[0] = 0;
    result = 0;
    if (status == 0) {
        request->header.state = 0;
        result = -127;
    }
    return result;
}

static inline s32 card_start_directory(s32 port, s32 slot, const char *path, s32 mode, s32 limit,
                                       struct Metadata *records) {
    s32 status = 0;
    D_00538228[0] = 0;
    D_0053822C[0] = port;
    D_00538230[0].value = slot;
    D_00538234[0].path = path;
    D_00538238[0].value = mode;
    D_0053823C[0].value = limit;
    D_00538240[0].records = records;
    if (port != -1 && slot != -1)
        status = func_001161E8(port, slot, path, mode, limit, records);
    return status;
}

static inline s32 card_start_name(s32 port, s32 slot, const char *name) {
    D_00538228[0] = 0;
    D_0053822C[0] = port;
    D_00538230[0].value = slot;
    D_00538234[0].path = name;
    return func_00116BB0(port, slot, name);
}

static inline s32 card_request_name(CardRequest *request) {
    s32 port, slot, status, result;
    const char *name;
    slot = request->slot;
    port = request->port;
    name = D_003D4538;
    status = card_start_name(port, slot, name);
    D_00538224[0] = 0;
    result = 0;
    if (status == 0) {
        request->state = 0;
        result = -127;
    }
    return result;
}

#endif
