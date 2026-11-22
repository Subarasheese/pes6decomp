/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00325A40(u8 *);
extern s32 func_0032E8D0(u32);
extern s32 Pes6Job_SetPayload(s32, s32);
extern s32 Pes6Job_Create(s32, void *, s32, void *);
extern void func_008FAB40(s32);
extern s32 func_008FE260(s32);
extern void func_008FE2B0(s32);

extern s8 D_003EA500;
extern s8 D_003EA504;
extern s8 D_003EA508;
extern s8 D_003EA514;
extern char D_0092ACA8[];

s32 func_008FE560(s32 *arg0) {
    func_00325A40((u8 *) *arg0);
    D_003EA514 = 0;
    D_003EA508 = 0;
    D_003EA504 = 0;
    D_003EA500 = func_0032E8D0(0x1EU);
    Pes6Job_SetPayload(Pes6Job_Create(0x80000044, func_008FE2B0, 3, ((void *)D_0092ACA8)), (s32) arg0);
    Pes6Job_SetPayload(Pes6Job_Create(0x2F, func_008FAB40, 3, ((void *)D_0092ACA8)), (s32) arg0);
    Pes6Job_Create(0x36, func_008FE260, 3, ((void *)D_0092ACA8));
    return 1;
}
