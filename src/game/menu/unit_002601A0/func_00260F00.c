/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void func_001ED840(void *, u8);
extern void func_001ED880(void *, f32);
extern void *D_0058D360[];
extern s32 D_0058D368[];
extern f32 D_0058D36C[];
void func_00260F00(s32 selection, f32 amount) {
    D_0058D368[0] = selection;
    D_0058D36C[0] = amount;
    func_001ED840(D_0058D360[0], selection & 0xFF);
    func_001ED880(D_0058D360[0], amount);
}
