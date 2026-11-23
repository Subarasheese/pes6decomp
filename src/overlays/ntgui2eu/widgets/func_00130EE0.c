/* compiler: ee-gcc-2.9-G0 */
#include "pes6/ntgui_array.h"
extern void func_00130AF8(WindowRecords *, s32, s32);
extern void func_00130C08(WindowRecords *, const WindowRecord *);
WindowRecords func_00130EE0(WindowRecords *src, s32 first, s32 last) {
    WindowRecords out;
    s32 i;
    func_00130AF8(&out, last - first + 1, src->growth);
    for (i = first; i <= last; i++)
        func_00130C08(&out, &src->items[i]);
    return out;
}
