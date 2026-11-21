/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00D07760(s8 *arg0, s8 *arg1) {
    if (arg0 == 0) {
        return 0;
    } else {
        if (arg1 == 0) {
            ((s32 *)(arg0))[0xA] = 0;
            ((s32 *)(arg0))[0xB] = 0;
        } else {
            ((float *)(arg0))[0xA] = *(float *)(arg1);
            ((float *)(arg0))[0xB] = ((float *)(arg1))[1];
        }
        ((s8 *)(arg0))[0x3B] = 1;
        return 1;
    }
}
