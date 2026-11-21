/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_003AE978[];
extern void func_0017E150(s32);

void func_00268EA0(s32 value) {
    D_003AE978[0] = value;
    if (value == 0) {
        func_0017E150(value);
    }
}
