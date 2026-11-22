/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001540E0(s32);
extern s32 Pes6HeapZone_Close(s32);

s32 func_00BC65A0(s32 arg0) {
    s32 value;

    value = func_001540E0(arg0);
    if (value != 0) {
        value = Pes6HeapZone_Close((s32)((s8)((s64)arg0)));
    }
    return value;
}
