/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0012FF58(s32, s32);
extern void func_0013CD80(void);
extern s32 func_00124860(void);
extern char D_0013CFA0[];
extern char D_005BCBF8[];
extern s32 D_011DA008[];

void func_0013CE08(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0013CFA0, 0);
    D_011DA008[0] = func_00131580(buffer);
    func_0012FF58((u32)D_005BCBF8, 0x111);
    func_0013CD80();
    func_00124860();
}
