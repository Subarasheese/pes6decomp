/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

u16 *func_001F00C0(void *arg0, s32 arg1, M2C_UNK arg2, u8 *arg3) {
    u8 *p;
    s32 count;
    s32 i;
    u32 hi;
    u32 lo;
    u8 **list;
    s32 n;
    u16 *e;

    if (arg0 == NULL) {
        return NULL;
    }
    hi = ((u32)arg1 >> 16) & 0xFFFF;
    lo = arg1 & 0xFFFF;
    count = *(s32 *)((u8 *)arg0 + 4);
    p = arg3;
    i = 0;
    if (count > 0) {
        list = *(u8 ***)((u8 *)arg0 + 8);
        do {
            p = *(u8 **)(*list + 4);
            if (*(u16 *)(p + 4) == hi) {
                break;
            }
            i++;
            list++;
        } while (i < count);
    }
    if (i == count) {
        return NULL;
    }
    n = *(s32 *)p;
    e = (u16 *)(p + 8);
    if (n != 0) {
        do {
            if (*e == lo) {
                break;
            }
            n--;
            e = (u16 *)((u8 *)e + 12);
        } while (n != 0);
    }
    return n == 0 ? NULL : e;
}
