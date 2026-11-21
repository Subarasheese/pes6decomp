/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_001514E8(s32);
extern void func_0014D688(void);
extern s32 func_00124860(void);
extern char D_0014D7D8[];
extern char D_011E0A10[];
extern s32 D_011E0A1C[];
extern s32 D_005B3744[];
extern s32 D_005BD8F4[];

void func_0014D6E0(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0014D7D8, 0);
    D_011E0A1C[0] = func_00131580(buffer);
    D_005B3744[0] = *(int *)(D_005BD8F4[0] * 4 + (u32)D_011E0A10);
    func_001514E8(D_005B3744[0]);
    func_0014D688();
    func_00124860();
}
