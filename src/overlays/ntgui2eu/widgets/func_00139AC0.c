/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_001399A8[];
extern char D_001389F0[];
extern char D_001391C8[];
extern s32 D_011D95A0[];

void func_00139AC0(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011D95A0[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_001399A8, (u32)D_001389F0, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_001399A8, (u32)D_001391C8, 0);
            func_00131580(buffer2);
        }
    }
}
