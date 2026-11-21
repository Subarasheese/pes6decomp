/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00259CE0(void *);
extern u32 func_0025E0E0(s32);
extern s32 func_0025E100(s32, s32);

extern char D_0058CF40[];
extern s16 D_0058CF42[];
extern s16 D_0058CF44[];
extern s16 D_0058CF46[];

void func_002594E0(void) {
    u32 temp_v0;

    temp_v0 = func_0025E0E0(7);
    if (!((temp_v0 == 0) || (temp_v0 == 1))) {
        return;
    }
    func_00259CE0(((void *)D_0058CF40));
    D_0058CF44[0] = (*(s16 *)D_0058CF40);
    D_0058CF46[0] = D_0058CF42[0];
    func_0025E100(7, 2);
}
