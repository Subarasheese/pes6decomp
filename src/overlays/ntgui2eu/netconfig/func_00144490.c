/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_00144438(void);
extern s32 func_00124860(void);
extern char D_00144528[];
extern s32 D_011DF868[];

void func_00144490(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00144528, 0);
    D_011DF868[0] = func_00131580(buffer);
    func_00144438();
    func_00124860();
}
