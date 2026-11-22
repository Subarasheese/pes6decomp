/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154070(s32);
extern void *func_001C48E8(void *, int, unsigned int);

s32 func_0099C7F0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_00154070(arg0);
    if ((temp_v0 != 0) && (arg0 != 0)) {
        func_001C48E8((s32 *) temp_v0, 0, arg0);
    }
    return temp_v0;
}
