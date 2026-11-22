/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00153FF0(s32, s32);
extern void *func_001C48E8(void *, int, unsigned int);

s32 func_009E84F0(void) {
    s32 temp_v0;

    temp_v0 = func_00153FF0(0x40, 0xA4);
    if (temp_v0 != 0) {
        func_001C48E8((s32 *) temp_v0, 0, 0xA4);
    }
    return temp_v0;
}
