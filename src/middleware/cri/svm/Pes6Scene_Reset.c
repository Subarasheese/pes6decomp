/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern u8 Pes6SceneStack[];
void func_001C48E8(void *arg0, s32 arg1, s32 arg2);
void Pes6Scene_Reset(void) {
    func_001C48E8(Pes6SceneStack, 0, 0x18);
}
