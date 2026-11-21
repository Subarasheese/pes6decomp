/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 D_00CBD890[];
extern s32 D_00CBD894[];

s32 func_00C01090(s32 arg0) {
    if (!((arg0 < 0x2E))) {
        return 0;
    } else {
        if (!((arg0 < 0x20))) {
            return (D_00CBD894[0] & (1 << (arg0 - 0x20)));
        } else {
            return (D_00CBD890[0] & (1 << arg0));
        }
    }
}
