/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct {
    u8 bytes[32];
} WindowRecord;
typedef struct {
    WindowRecord *items;
    s32 capacity, initialCapacity, count, growth;
} WindowRecords;
extern void func_00130AF8(WindowRecords *, s32, s32);
extern void func_00130C08(WindowRecords *, const WindowRecord *);
extern void func_00130DC8(WindowRecords *, s32);
WindowRecords func_00130F98(WindowRecords *src, s32 first, s32 last) {
    WindowRecords out;
    s32 i;
    func_00130AF8(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++) {
        WindowRecord *slot = &src->items[i];
        func_00130DC8(src, i);
        func_00130C08(&out, slot);
    }
    return out;
}
