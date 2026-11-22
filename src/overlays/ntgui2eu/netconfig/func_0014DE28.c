/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00131560(void *, s32, s32, s32, s32);
extern s32 func_00131580(s32 *);
extern void func_001514E8(s32);
extern void func_0014DDC0(void);
extern s32 func_00124860(void);
extern char D_0014DEC0[];
extern s32 D_011E0A38[];
extern s32 D_005B3744[];
extern s32 D_011E0A28[];

void func_0014DE28(void) {
    int buffer[8];

    func_00131560(buffer, 0, 0, (u32)D_0014DEC0, 0);
    D_011E0A38[0] = func_00131580(buffer);
    D_005B3744[0] = D_011E0A28[0];
    func_001514E8(D_011E0A28[0]);
    func_0014DDC0();
    func_00124860();
}
