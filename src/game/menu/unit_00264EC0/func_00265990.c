/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    s32 x, y;
} CoordinateRecord;
extern CoordinateRecord *func_001BB370(s32 index);
extern s32 D_0058D410[], D_0058D414[];
extern CoordinateRecord *D_0058D41C[];
s32 func_00265990(s32 index) {
    s32 found = 0;
    CoordinateRecord *entry = func_001BB370(index);
    if (entry->x == D_0058D410[0] && entry->y == D_0058D414[0]) {
        found = 1;
        D_0058D41C[0] = entry;
    }
    return found;
}
