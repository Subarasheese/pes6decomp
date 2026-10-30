/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D7D60(void *, u8);
extern u32 func_00AF0980(void);

void func_00AEEC10(s32 arg0) {
    void *temp_v0;

    temp_v0 = (void *)func_00AF0980();
    if (temp_v0 != 0) {
        func_001D7D60(*(void **)((u8 *)temp_v0 + 0x70), arg0 & 0xFF);
    }
}
