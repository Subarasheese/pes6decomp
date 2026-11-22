/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0013FE50(void);
extern s32 func_00124860(void);
extern char D_0013FF48[];
extern s32 D_011DB860[];
extern u32 D_011DB864[];
extern u32 D_011DB868[];

void func_0013FEB8(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0013FF48, 0);
    D_011DB860[0] = func_00131580(buffer);
    D_011DB864[0] = 0;
    D_011DB868[0] = 0;
    func_0013FE50();
    func_00124860();
}
