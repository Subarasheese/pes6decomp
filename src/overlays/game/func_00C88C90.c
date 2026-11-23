/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void func_00C88AB0(s32, s32);
extern s32 func_00C88BF0(u8);
extern u8 D_00CB4F28[];
extern s32 D_00CCCE20[];
void func_00C88C90(void) {
    u32 i = 0;
    u8 *sourceId;
    s32 *handle;
    sourceId = D_00CB4F28;
    handle = D_00CCCE20;
    do {
        *handle = func_00C88BF0(*sourceId);
        func_00C88AB0(*handle, 0);
        i = i + 1;
        sourceId++;
        handle++;
    } while (i < 4U);
}
