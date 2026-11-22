/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_00139B70(void);
extern s32 func_00124860(void);
extern char D_00139D10[];
extern s32 D_011D9588[];
extern u32 D_005BCB0C[];

void func_00139C68(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00139D10, 0);
    D_011D9588[0] = func_00131580(buffer);
    D_005BCB0C[0] = 0;
    func_00139B70();
    func_00124860();
}
