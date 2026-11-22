/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_0014BC30[];
extern char D_0014B738[];
extern char D_0014B300[];
extern s32 D_011E0268[];

void func_0014BCF0(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011E0268[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_0014BC30, (u32)D_0014B738, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_0014BC30, (u32)D_0014B300, 0);
            func_00131580(buffer2);
        }
    }
}
