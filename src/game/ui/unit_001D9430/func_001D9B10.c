/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    s32 firstHandle;
    s32 secondHandle;
    s32 handle;
    u8 reserved1C[0xc];
    u8 type;
} WidgetResource;
extern void Pes6Heap_Free(void *);
extern void func_001DB600(void *);
extern s32 func_001E6C50(s32);
extern void func_001F4F40(s32, s32);
void func_001D9B10(WidgetResource *record) {
    if (record != 0) {
        switch (record->type) {
        case 3:
            func_001F4F40(record->firstHandle, record->secondHandle);
            break;
        }

        func_001E6C50(record->handle);
        func_001DB600(record);
        Pes6Heap_Free(record);
    }
}
