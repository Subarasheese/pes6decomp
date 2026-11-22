/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_0013BAB8[];
extern char D_0013B4A0[];
extern char D_0013AFE0[];
extern s32 D_011D9D74[];

void func_0013BBA8(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011D9D74[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_0013BAB8, (u32)D_0013B4A0, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_0013BAB8, (u32)D_0013AFE0, 0);
            func_00131580(buffer2);
        }
    }
}
