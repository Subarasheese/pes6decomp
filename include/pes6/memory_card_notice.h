#ifndef PES6_MEMORY_CARD_NOTICE_H
#define PES6_MEMORY_CARD_NOTICE_H

#include "types.h"

typedef struct {
    u32 message;
    u8 pad04[0x1C];
    u8 updated;
} MemoryCardNotice;
extern MemoryCardNotice D_0065E7B0[];
extern const u32 D_0065A450[];

#endif
