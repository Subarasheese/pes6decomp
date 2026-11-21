/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_0013CC10[];
extern char D_0013C458[];
extern char D_0013C040[];
extern s32 D_011DA00C[];

void func_0013CCD0(int arg0) {
    int buffer[8];
    int buffer2[8];

    D_011DA00C[0] = arg0;
    if (-1 < arg0) {
        if (arg0 < 7) {
            func_00131560(buffer, 1, (u32)D_0013CC10, (u32)D_0013C458, 0);
            func_00131580(buffer);
        } else if (arg0 < 0xe) {
            func_00131560(buffer2, 1, (u32)D_0013CC10, (u32)D_0013C040, 0);
            func_00131580(buffer2);
        }
    }
}
