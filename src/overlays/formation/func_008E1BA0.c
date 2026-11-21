/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_008C5050(s32);
extern void func_001DF460(void *, void *);

void func_008E1BA0(s32 arg0, s32 arg1, s8 arg2) {
    void *value1;
    void *value2;
    ((s8 *)(((arg1 & 0xFF) + arg0)))[0x20] = arg2;
    if (((s32 *)((((arg1 & 0xFF) << 2) + arg0)))[0x10] != 0) {
        if (((u8 *)(((arg1 & 0xFF) + arg0)))[0x20] != 0) {
            value2 = func_008C5050(1);
            func_001DF460(((void **)(((s8 **)((((arg1 & 0xFF) << 2) + arg0)))[0x10]))[3], value2);
        } else {
            value1 = func_008C5050(2);
            func_001DF460(((void **)(((s8 **)((((arg1 & 0xFF) << 2) + arg0)))[0x10]))[3], value1);
        }
    }
}
