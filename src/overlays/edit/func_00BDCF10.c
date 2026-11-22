/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void func_00BC65E0(s32);
extern s32 func_001CDA50(s32);
extern void func_00BDD240(void);
extern s32 func_0017F950(s32, void (*)(void), s32, s32, s32);
extern const s32 D_00CC1140[];

void func_00BDCF10(void) {
    func_00BC65E0(11);
    func_0017F950(D_00CC1140[func_001CDA50(0)], func_00BDD240, 0, 0, 1);
}
