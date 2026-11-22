/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memset(void *, int, unsigned int);
extern s8 *strncpy(s8 *, s8 *, u32);
extern s32 D_00A7DD40[];

int func_009BF930(s8 *arg0) {
    int value;
    int value2;

    value = D_00A7DD40[0];
    if (D_00A7DD40[0] == 0) {
        value2 = 4;
    } else {
        if ((arg0 == (s8 *)0x0) || (*arg0 == 0)) {
            memset((int *)(D_00A7DD40[0] + 0x197), 0, 0x33);
            memset((int *)(value + 0x1ca), 0, 0x33);
        } else {
            strncpy((s8 *)(D_00A7DD40[0] + 0x197), arg0, 0x32);
            strncpy((s8 *)(value + 0x197), arg0, 0x32);
        }
        value2 = 0;
        *(u8 *)(value + 0x9e) = 1;
    }
    return value2;
}
