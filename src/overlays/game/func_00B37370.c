/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002BB8F0(float);
extern void func_002727C0(s32);
extern u8 func_00BF6270(void);
s32 func_001C48E8(u8 *, s32, s32);
s32 func_002BB870(u8, s32);
extern void func_002BC2B0(void);
s8 func_00BBB8C0(s32);
extern u8 Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00592740[];
extern char D_00CBCB18[];
extern char D_00CBCB28[];
extern char D_00CBCB29[];
extern char D_00CBCB2C[];
extern char D_00CBCB2E[];

void func_00B37370(void) {
    f32 value;
    s32 value2;
    s32 value3;
    u32 temp_lo;
    u8 value4;
    *((s8 *)D_00CBCB2E) = 0;
    func_002727C0(0x13);
    func_001C48E8((void *)D_00CBCB28, 0, 8);
    func_002BC2B0();
    temp_lo = ((u32)(*((u32 *)D_00CBCB18))) / ((u8)(*((u8 *)D_00591BE4)));
    if (((s32)temp_lo) < 0) {
        value = 2.0f * ((f32)((temp_lo >> 1) | (temp_lo & 1)));
    } else {
        ;
    }
    func_002BB8F0((f32)temp_lo);
    *((s8 *)D_00CBCB2C) = func_00BBB8C0(3);
    value4 = func_00BF6270();
    value4 = value4 & 0xFF;
    if (value4 != 0) {
        value2 = value4 & 0xFF;
        if (value2 < 0x17) {
            if ((value2 == 0xFF) == 0) {
                value3 = value2 % 23;
            } else {
                value3 = 1;
            }
            if ((*((u8 *)(((s8 *)(*(
                              (void **)(((s8 *)(Pes6MatchPlayers + (value3 * 0x240))) + 4)))) +
                          0x2C))) != 0) {
                *((u8 *)D_00CBCB28) = value4;
            }
        }
    }
    func_002BB870(*((u8 *)D_00CBCB28), 0x64);
    func_002BB870(*((u8 *)D_00CBCB29), 0x5A);
    *((s8 *)D_00592740) = 3;
}
