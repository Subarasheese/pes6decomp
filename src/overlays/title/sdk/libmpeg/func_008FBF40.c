/* compiler: ee-gcc-2.9 */
#include "types.h"
typedef struct {
    u8 reserved00[0x40];
    struct ScreenEntry *frame;
} ScreenRecord;
typedef struct ScreenEntry {
    u8 reserved00[0xc4];
    u32 flags;
    u8 reservedC8[0x24];
    u32 address;
    int width;
    int height;
    int area;
} ScreenEntry;
extern s32 func_008FB318(void *);
int func_008FBF40(ScreenRecord *record, u32 address, int width, int height) {
    ScreenEntry *entry = record->frame;
    entry->height = height << 4;
    entry->address = (address & 0xfffffff) | 0x20000000;
    entry->area = width * height;
    entry->width = width << 4;
    entry->flags = 0;
    return func_008FB318(record);
}
