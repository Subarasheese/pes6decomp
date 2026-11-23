/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 Pes6GfxRing_Alloc(s32);
extern s32 Pes6GfxRing_Commit(s32);
extern s32 Pes6DmaQueue_Send(s32, s32, s32, s32);
extern u32 *D_003E97F8;
extern s32 D_004FDD50[];
void func_00142630(void) {
    u32 packet;
    packet = Pes6GfxRing_Alloc(0x10);
    Pes6GfxRing_Commit((packet & 0xfffffff) | 0x20000000);
    *D_003E97F8 = packet;
    D_003E97F8 = 0;
    Pes6DmaQueue_Send(1, 1, D_004FDD50[0], 0);
}
