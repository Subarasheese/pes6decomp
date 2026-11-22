/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0099C7F0(s32);
extern void *memset(void *, int, unsigned int);
extern u32 D_00A7E250[];

void *func_009F4A40(void)

{
    int *arg0;

    arg0 = (int *)func_0099C7F0(0x170e8);
    if (arg0 == (int *)0x0) {
        arg0 = (int *)0x0;
        return arg0;
    }
    memset(arg0, 0, 0x170e8);
    memset(arg0 + 1, 0, 0x10);
    memset(arg0 + 5, 0, 0x10);
    memset(arg0 + 9, 0, 0xc000);
    memset(arg0 + 0x3009, 0, 0xb0bc);
    D_00A7E250[0] = 0;
    *arg0 = 7;
    arg0[0x5c38] = 0;
    return arg0;
}
