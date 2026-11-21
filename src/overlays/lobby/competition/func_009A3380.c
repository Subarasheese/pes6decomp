/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_0099C7E0(s32);

void *func_009A3380(s32 arg0, s8 arg1, s8 *arg2, s8 *arg3, s8 *arg4, s8 *arg5) {
    void *value1;
    value1 = func_0099C7E0(0x318);
    if (value1 == 0) {
        return 0;
    } else {
        ((s8 *)(value1))[0x2F8] = 0;
        ((s8 *)(value1))[0x2F9] = arg1;
        ((s32 *)(value1))[0xBC] = arg0;
        ((s32 *)(value1))[0xBD] = *(s32 *)(arg2);
        ((s32 *)(value1))[0xC5] = *(s32 *)(arg5);
        if (arg3 != 0) {
            ((s32 *)(value1))[0xBF] = *(s32 *)(arg3);
        } else {
            ((s32 *)(value1))[0xBF] = 0;
        }
        if (arg4 != 0) {
            ((s32 *)(value1))[0xC0] = *(s32 *)(arg4);
        } else {
            ((s32 *)(value1))[0xC0] = 0;
        }
        return value1;
    }
}
