/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00153FF0(s32, s32);
extern void *func_001C48E8(void *, int, unsigned int);

s32 func_00AEEB80(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_00153FF0(arg0, arg1);
    if (temp_v0 != 0) {
        func_001C48E8((s32 *) temp_v0, 0, arg1);
    }
    return temp_v0;
}
