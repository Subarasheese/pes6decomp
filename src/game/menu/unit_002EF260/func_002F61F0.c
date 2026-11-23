/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    u8 subobject[0x98];
    void *handle;
} Display;
extern void func_002F0020(void *, float), func_001F3C40(void *, u8);
void func_002F61F0(Display *display, s32 value) {
    if (display) {
        func_002F0020(display->subobject, (float)value);
        func_001F3C40(display->handle, (u8)value);
    }
}
