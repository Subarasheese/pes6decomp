/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern char D_00124BE0[];
extern u32 D_005B3758[];

void func_00124BA0(void) {
    int buffer[8];

    D_005B3758[0] = 0;
    func_00131560(buffer, 1, 0, (u32)D_00124BE0, 0);
    func_00131580(buffer);
}
