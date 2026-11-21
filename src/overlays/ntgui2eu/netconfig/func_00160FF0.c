/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_00160F60(void);
extern char D_00161070[];
extern s32 D_011E6BE4[];
extern u32 D_005BEE5C[];

void func_00160FF0(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00161070, 0);
    D_011E6BE4[0] = func_00131580(buffer);
    D_005BEE5C[0] = 0;
    func_00160F60();
}
