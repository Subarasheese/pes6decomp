#include "types.h"
typedef struct {
    u8 reserved[8];
    const s16 *id;
} WidgetNode;
const s16 *func_001BB370(s32 node) { return node ? ((const WidgetNode *)node)->id : 0; }
