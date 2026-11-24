/* compiler: mwcc-3.0.1b151 */
#include "pes6/sound_adx.h"

extern s32 func_00154070(u32 size);
extern s32 D_003E9B3C;
extern s32 D_003E9B38;
extern void func_00251B80(s32);
extern void func_00251BA0(s32);
extern void func_00155A10(void);
extern void func_00155A00(void);
extern u8 D_00560140[];
extern u8 D_0053CF40[];

void func_0024EDE0(void) {
    u8 *base = (u8 *)func_00154070(0x100040);
    func_00251B80((s32)base);
    base += 64 - (s32)base % 64;
    func_00251BA0((s32)base);
    D_003E9B3C = (s32)(base + 0xe2000);
    D_003E9B38 = (s32)(base + 0xf1000);
    func_00155A10();
    D_00583330[0] = ADXT_Create(1, (void *)D_003E9B3C, 0xe124);
    D_00583330[2] = ADXT_Create(1, (void *)D_003E9B38, 0xe124);
    D_00583330[1] = ADXT_Create(2, D_00560140, 0x231e4);
    D_00583330[3] = ADXT_Create(2, D_0053CF40, 0x231e4);
    func_00155A00();
    D_003E9B34 = 1;
}
