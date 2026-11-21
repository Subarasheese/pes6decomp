/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0014EEB0(void);
extern s32 func_00124860(void);
extern char D_0014EFC8[];
extern s32 D_011E0ABC[];

void func_0014EEF8(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0014EFC8, 0);
    D_011E0ABC[0] = func_00131580(buffer);
    func_0014EEB0();
    func_00124860();
}
