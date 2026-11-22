/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_0014E308[];
extern char D_0014E0B8[];
extern char D_0014DF28[];
extern s32 D_011E0A88[];

void func_0014E3A0(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011E0A88[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_0014E308, (u32)D_0014E0B8, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_0014E308, (u32)D_0014DF28, 0);
            func_00131580(buffer2);
        }
    }
}
