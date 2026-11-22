/* compiler: ee-gcc-2.9-G0 */
#include "types.h"

extern s32 D_011E0D80[];
extern s32 D_011E0D84[];
extern s32 D_011E0D88[];
extern s32 D_011E0D8C[];
extern s8 D_011E0DC0[];
extern void func_001560B8(void *);

void func_001555D8(void) {
    D_011E0D80[0] = 0;
    D_011E0D84[0] = 0;
    D_011E0D88[0] = 0;
    D_011E0D8C[0] = 0;
    func_001560B8(D_011E0DC0);
}
