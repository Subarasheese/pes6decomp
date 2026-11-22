/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_00138468[];
extern s32 D_011D78A4[];

void func_001382F0(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00138468, 0);
    D_011D78A4[0] = func_00131580(buffer);
}
