/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_0013ABC0[];
extern char D_00139D78[];
extern char D_0013A3F8[];
extern s32 D_011D960C[];

void func_0013AD20(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011D960C[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_0013ABC0, (u32)D_00139D78, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_0013ABC0, (u32)D_0013A3F8, 0);
            func_00131580(buffer2);
        }
    }
}
