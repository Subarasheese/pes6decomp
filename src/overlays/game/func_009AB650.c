/* compiler: mwcc-3.0.1b210 */
#pragma opt_propagation off
#include "pes6/goal_net.h"

extern u8 D_00CBA8E0[0x114];
extern NetMesh D_00CB7730;
extern NetState D_00CBA918;
extern u8 D_00CBA9ED[];
extern s32 D_003EA714;
extern void *func_001C48E8(void *dest, s32 value, u32 size);
extern s32 func_00188790(void);

void func_009AB650(void) {
    NetMesh *mesh = &D_00CB7730;
    func_001C48E8(D_00CBA8E0, 0, sizeof(D_00CBA8E0));
    func_001C48E8(mesh, 0, sizeof(NetMesh));
    D_003EA714 = func_00188790();
    func_009AB9D0(mesh);
    D_00CBA9ED[0] = 1;
    func_009AB6D0(&D_00CBA918, mesh);
}
