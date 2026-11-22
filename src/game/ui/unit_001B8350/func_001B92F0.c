/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u32 kind;
    s32 value;
    u32 reserved08;
} ResourceEntry;

extern s32 func_001D5C40(s32);
extern void func_001DA4B0(s32);
extern s32 func_001DD560(s32);
extern s32 func_001E7140(s32);
extern s32 func_001F0210(s32);
extern void func_001F7B70(s32);
extern s32 func_0021DF90(s32);
extern s32 func_0021E000(u32);

void func_001B92F0(ResourceEntry *entries, s32 count) {
    u32 kind;
    s32 index;
    ResourceEntry *entry;
    s32 value;
    index = 0;
    if (count > 0) {
        entry = entries;
        do {
            kind = entry->kind;
            value = entry->value;
            switch (kind) {
            case 0:
                func_001DD560(value);
                break;
            case 1:
                func_001E7140(func_0021E000((u32)value));
                break;
            case 2:
                func_001DA4B0(value);
                break;
            case 3:
                func_001F0210(func_0021DF90(value));
                break;
            case 4:
                func_001D5C40(value);
                break;
            case 5:
                func_001F7B70(value);
                break;
            }
            index += 1;
            ++entry;
        } while (index < count);
    }
}
