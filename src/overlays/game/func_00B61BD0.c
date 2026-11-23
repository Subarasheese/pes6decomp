/* compiler: mwcc-3.0.1b151-O3 */
#include "types.h"
extern void func_009B43E0(void);
extern void func_00AD0A20(void);
extern void func_00B5C240(void);
extern void func_00B5C550(void);
extern void func_00B5C9E0(void);
extern void func_00B5D280(void);
extern void func_00B5D540(void);
extern u8 Pes6MatchFlow_GetState(s32 level);
extern void func_009E1CB0(s32 level);
extern void Pes6Ball_Update(void);
extern s32 func_00152130(s32 slot, s32 duration);
extern u8 D_00591BE4[];
extern u16 D_00CBCB32[], D_00CBCB34[];
void func_00B61BD0(void) {
    u32 phase;

    phase = Pes6MatchFlow_GetState(3) & 0xFF;
    switch (phase) {
    case 0:
        func_00B5D540();
        break;
    case 1:
        func_00B5C240();
        if (D_00CBCB32[0] == 6) {
            func_009E1CB0(3);
        }
        break;
    case 2:
        func_00B5D280();
        break;
    case 3:
        func_00B5C9E0();
        break;
    case 4:
        func_00AD0A20();
        if (!(D_00CBCB34[0] & 2)) {
            Pes6Ball_Update();
        }
        if (func_00152130(1, (u8)((60 / D_00591BE4[0]) * 32)) == 1) {
            func_009E1CB0(3);
        }
        break;
    case 5:
        func_00B5C550();
        break;
    }
    if ((Pes6MatchFlow_GetState(3) & 0xFF) > 0) {
        func_009B43E0();
    }
}
