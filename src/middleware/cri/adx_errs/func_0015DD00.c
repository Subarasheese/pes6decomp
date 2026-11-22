/* compiler: ee-gcc-2.96-G0 */
#include "types.h"

extern s32 func_00163470(s32);
extern s32 func_00164170(s32);
extern s32 func_001646A0(s32);
extern s8 D_003C82F0[];
extern void func_0015B478(void *);

s32 func_0015DD00(s8 *arg0) {
    s32 value1;
    s32 value2;
    if (arg0 == 0) {
        func_0015B478(D_003C82F0);
        return -3;
    } else {
        if (0x7FFFF7FF < ((s32 *)(arg0))[4]) {
            func_001646A0(((s32 *)(arg0))[1]);
            value2 = func_00163470(((s32 *)(arg0))[1]);
            if (value2 != 4) {
                value1 = func_00164170(((s32 *)(arg0))[1]);
                ((s32 *)(arg0))[4] = value1;
                return value1;
            } else {
                return -5;
            }
        } else {
            value1 = func_00164170(((s32 *)(arg0))[1]);
            ((s32 *)(arg0))[4] = value1;
            return value1;
        }
    }
}
