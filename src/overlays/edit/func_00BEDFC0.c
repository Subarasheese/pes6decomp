/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00BEDFC0(s8 *arg0, s8 *arg1) {
    if (*(u16 *)(arg0) == 0) {
        return 1;
    } else {
        if (*(u16 *)(arg1) == 0) {
            return -1;
        } else {
            if (*(u16 *)(arg0) < *(u16 *)(arg1)) {
                return -1;
            } else {
                return 1;
            }
        }
    }
}
