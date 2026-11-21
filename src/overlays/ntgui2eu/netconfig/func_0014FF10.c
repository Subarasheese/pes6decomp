/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_0014FC20(s32, s32);
extern s32 func_0015E628(void);
extern void func_00165AC0(void *);
extern void func_0014FEC8(void);
extern char D_00150038[];
extern s32 D_011E0B14[];
extern s32 D_011E0AD0[];
extern u32 D_005B3704[];
extern u32 D_005BD9BC[];
extern u32 D_005BD9C0[];
extern u32 D_005B397C[];

void func_0014FF10(void) {
    int value;
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_00150038, 0);
    D_011E0B14[0] = func_00131580(buffer);
    func_0014FC20(D_011E0AD0[0], 0);
    value = func_0015E628();
    if (!((value < 0) && ((D_005B3704[0] & 2) != 0))) {
        D_005BD9BC[0] = 1;
    } else {
        D_005BD9BC[0] = 0;
    }
    D_005BD9C0[0] = 0;
    if (D_005B397C[0] != 0) {
        func_00165AC0(D_005B397C[0]);
    }
    func_0014FEC8();
}
