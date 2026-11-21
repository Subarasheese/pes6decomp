/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_00150C20(void);
extern s32 func_00124860(void);
extern char D_00150CF0[];
extern s32 D_011E0C9C[];

void func_00150C68(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00150CF0, 0);
    D_011E0C9C[0] = func_00131580(buffer);
    func_00150C20();
    func_00124860();
}
