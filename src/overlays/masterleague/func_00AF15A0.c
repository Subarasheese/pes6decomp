/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00AF0EC0(s32);
extern void func_00AF12D0(void);
extern u32 func_00AF7970(void);

void func_00AF15A0(void) {
    void *temp_v0;

    temp_v0 = (void *)func_00AF7970();
    if (temp_v0 != 0) {
        *(void **)temp_v0 = func_001D5A10(0x1031D);
        func_00AF12D0();
        func_00AF0EC0(*(s32 *)((u8 *)temp_v0 + 0x1AC));
    }
}
