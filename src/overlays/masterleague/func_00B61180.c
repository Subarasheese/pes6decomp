/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00229010(s32);

s32 func_00B61180(s32 arg0, s32 arg1) {
    s32 value1;
    s32 value2;
    s32 value3;
    if ((arg0 & 0xFF) < 4) {
        value3 = func_00229010((((arg1 & 0xFF) + ((arg0 & 0xFF) << 4)) & 0xFF));
        return (value3 & 0xFF);
    } else {
        if ((arg0 & 0xFF) < 5) {
            value2 = func_00229010((((arg1 & 0xFF) + 0x40) & 0xFF));
            return (value2 & 0xFF);
        } else {
            value1 = func_00229010((((arg1 & 0xFF) + 0x48) & 0xFF));
            return (value1 & 0xFF);
        }
    }
}
