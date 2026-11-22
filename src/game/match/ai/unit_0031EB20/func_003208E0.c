/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0030E750(s32);
extern s32 Pes6MatchPlayer_GetSquadIndex(s32);
extern s32 func_0030EF30(void);
extern u32 func_00333620(s32, u8);
extern s32 func_0030EEF0(void);
extern s32 Pes6Job_CopyPayloadOut(void *, void *);
extern int func_003109B0(void);
extern void func_0031BBE0(s32, s32, s32);
extern void *Pes6Job_Create(s32, void (*)(void), s32, void *);
extern void func_003394E0(s32, s32, s32, s32);
extern int Pes6Job_SetField4(void *, void (*)(void), void *);
extern char D_003E15C8[];
extern void func_0031FC30(void);
extern void func_00320030(void);
extern void func_00320680(void);
extern void func_003207C0(void);

s32 func_003208E0(void *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;

    temp_s1 = func_0030EF30();
    temp_v0 = func_0030EEF0();
    if ((temp_v0 == 0) && (temp_s1 == 0)) {
        return 0;
    }
    if (temp_s1 != 0) {
        func_00333620(3, 1);
        func_00333620(5, 1);
    }
    if (temp_v0 != 0) {
        func_00333620(3, 1);
        func_00333620(6, 1);
    }
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x40);
    func_0031BBE0(3, M2C_FIELD(arg0, s32 *, 0x3C), 4);
    temp_a0 = func_003109B0() & 0xFF;
    if (temp_v0 != 0) {
        Pes6Job_Create(0x8000001F, func_00320030, 0x1A, (void *)D_003E15C8);
    } else if (temp_s1 != 0) {
        func_003394E0(temp_s2, 6, Pes6MatchPlayer_GetSquadIndex(func_0030E750(temp_a0)) & 0xFF, 2);
        Pes6Job_CopyPayloadOut(Pes6Job_Create(0x80000020, func_0031FC30, 8, (void *)D_003E15C8), arg0);
        Pes6Job_CopyPayloadOut(
            Pes6Job_Create(0x26, func_00320680, M2C_FIELD(arg0, s32 *, 8), (void *)D_003E15C8),
            arg0);
    }
    Pes6Job_SetField4(arg0, func_003207C0, (void *)D_003E15C8);
    return 1;
}
