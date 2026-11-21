/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_00146320(void);
extern s32 func_00124860(void);
extern char D_00146868[];
extern s32 D_011DFAD8[];

void func_00146368(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00146868, 0);
    D_011DFAD8[0] = func_00131580(buffer);
    func_00146320();
    func_00124860();
}
