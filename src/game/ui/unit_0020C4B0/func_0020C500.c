/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved[0x14];
    u16 value;
} Entry;
typedef struct {
    Entry **entries;
    s32 count;
} EntryList;
float func_0020C500(const EntryList *list, s32 index) {
    float value = 0.0f;
    Entry *entry;
    if (list && index < list->count && (entry = list->entries[index]) != 0)
        value = (float)entry->value;
    return value;
}
