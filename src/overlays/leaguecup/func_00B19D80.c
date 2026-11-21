/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00B19D80(s8 *arg0) {
    if (arg0 != 0) {
        if (((s32 *)(arg0))[2] == 0) {
            if (((u16 *)(arg0))[2] == 0xFFFF) {
                ((s32 *)(arg0))[0xB] = 0;
            } else {
                ((s32 *)(arg0))[0xB] = 1;
            }
        } else {
            if (((s32 *)(arg0))[6] < ((s32 *)(arg0))[3]) {
                ((s32 *)(arg0))[0xB] = 5;
            } else {
                if (((s32 *)(arg0))[3] < ((s32 *)(arg0))[6]) {
                    ((s32 *)(arg0))[0xB] = 7;
                } else {
                    ((s32 *)(arg0))[0xB] = 6;
                }
            }
        }
    }
}
