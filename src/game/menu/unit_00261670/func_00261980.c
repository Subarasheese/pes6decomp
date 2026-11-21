/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00259CE0(void *);
extern u32 func_0025E0E0(s32);
extern s32 func_0025E100(s32, s32);

extern char D_0058D380[];
extern s16 D_0058D382[];
extern s16 D_0058D384[];
extern s16 D_0058D386[];

void func_00261980(void) {
    u32 temp_v0;

    temp_v0 = func_0025E0E0(9);
    if (!((temp_v0 == 0) || (temp_v0 == 1))) {
        return;
    }
    func_00259CE0(((void *)D_0058D380));
    D_0058D384[0] = (*(s16 *)D_0058D380);
    D_0058D386[0] = D_0058D382[0];
    func_0025E100(9, 2);
}
