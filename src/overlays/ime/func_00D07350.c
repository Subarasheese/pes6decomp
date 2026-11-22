/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0080A280(s32, s32);
extern s32 func_0080A360(s32);
extern void *func_00809FE0(s32, s32);

void *func_00D07350(s32 arg0) {
    s32 value1;
    void *value2;
    value1 = func_0080A360(arg0);
    if (value1 == -1) {
        return 0;
    } else {
        value2 = func_00809FE0(arg0, value1);
        if (value2 == 0) {
            func_0080A280(arg0, value1);
            return 0;
        } else {
            ((s32 *)(value2))[1] = value1;
            ((s32 *)(value2))[0x54] = 0;
            ((s32 *)(value2))[0x55] = 0;
            return value2;
        }
    }
}
