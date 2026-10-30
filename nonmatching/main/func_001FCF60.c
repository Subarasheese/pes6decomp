/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5550(void *);
extern void func_001A5620(void *);
extern void func_001A55C0(int);
extern void func_001A54F0(int);
M2C_UNK func_001FDF00(f32 *, s16 *, u8);            /* extern */
extern char D_003A89F0[];
extern s32 D_003E999C;
extern char Pes6MatchPlayers[];
extern char D_00591E57[];
extern char D_0059273C[];
extern char D_00592743[];
extern char D_0059274C[];

void func_001FCF60(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    s16 *temp_a1;
    s16 var_v1;
    s32 var_a0;

    func_001A55C0((s32) &sp40);
    sp10 = sp40;
    sp14 = sp44;
    sp18 = sp48;
    func_001A54F0((s32) &sp30);
    sp24 = sp34;
    sp20 = sp30;
    temp_a1 = ((void *)D_003A89F0) + ((*(u8 *)D_00592743) * 0x12);
    sp28 = sp38;
    if ((*(u8 *)D_00591E57) != 0xFF) {
        var_a0 = (s32) (*(u8 *)D_00591E57) % 23;
    } else {
        var_a0 = 1;
    }
    if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x13) != 0) {
        var_v1 = -*temp_a1;
    } else {
        var_v1 = *temp_a1;
    }
    (*(s16 *)D_0059274C) = var_v1;
    (*(s32 *)D_0059273C) = 0;
    D_003E999C = 1;
    func_001FDF00(&sp10, temp_a1, (*(u8 *)D_00592743));
    sp40 = sp10;
    sp44 = sp14;
    sp48 = sp18;
    sp30 = sp20;
    sp34 = sp24;
    sp38 = sp28;
    func_001A5620(&sp40);
    func_001A5550(&sp30);
}
