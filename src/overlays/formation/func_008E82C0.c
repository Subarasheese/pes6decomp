/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_008E8F10(void *, s32);
extern void func_008E9080(void *);

void func_008E82C0(s8 *arg0, s32 arg1) {
    u32 temp_hi;

    func_008E9080(arg0 + 4);
    temp_hi = (u32) (arg1 & 0xFF) % 12U;
    *arg0 = (s8) temp_hi;
    func_008E8F10(arg0 + 4, temp_hi & 0xFF);
}
