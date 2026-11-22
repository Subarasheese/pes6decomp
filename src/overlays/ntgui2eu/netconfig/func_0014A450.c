/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0014A2B8(void);
extern void func_00149D10(s32, s32);
extern char D_0014A550[];
extern s32 D_011DFBB8[];
extern u32 D_005B3700[];
extern s32 D_005BEDC8[];
extern u32 D_011DFEC0[];
extern s32 D_005BEDD4[];
extern u32 D_011DFEC4[];
extern u32 D_011DFEC8[];
extern u32 D_005BD424[];
extern s32 D_011DFB78[];

void func_0014A450(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0014A550, 0);
    D_011DFBB8[0] = func_00131580(buffer);
    if (((D_005B3700[0] & 1) != 0) && (D_005BEDC8[0] == 2)) {
        D_011DFEC0[0] = 1;
    }
    if (((D_005B3700[0] & 2) != 0) && (D_005BEDD4[0] == 2)) {
        D_011DFEC4[0] = 1;
    }
    if ((D_005B3700[0] & 4) != 0) {
        D_011DFEC8[0] = 1;
    }
    D_005BD424[0] = 0;
    func_0014A2B8();
    func_00149D10(D_011DFB78[0], 0);
}
