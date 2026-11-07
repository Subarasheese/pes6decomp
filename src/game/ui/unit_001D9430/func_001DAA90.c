/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(s32);
extern s32 func_00154060(s32, s32);
extern void func_001D9CC0();
extern void func_001D9D60(s32, s32);
extern char D_0052AB90[];
extern char D_0052ABA4[];
extern char D_0052ABAC[];

void func_001DAA90(s32 object, s32 arg1) {
    if ((object != 0) && (arg1 != 0)) {
        if (((*(s32 *)D_0052AB90) != 0) && ((*(s32 *)D_0052ABA4) != 0)) {
            func_00153FA0((*(s32 *)D_0052ABAC));
            (*(s32 *)D_0052ABAC) = 0;
            (*(s32 *)D_0052AB90) = 0;
            (*(s32 *)D_0052ABA4) = 0;
            func_001D9CC0();
        }
        (*(s32 *)D_0052AB90) = object;
        (*(s32 *)D_0052ABA4) = arg1;
        (*(s32 *)D_0052ABAC) = func_00154060(object, 0x4C);
        func_001D9D60(object, arg1);
    }
}
