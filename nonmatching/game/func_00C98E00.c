/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002BC2B0(void);
extern void func_002BB8F0(f32 a);
extern s32 func_00BBB8C0(s32 n);
extern void func_002BB870(s32 a, s32 b);
extern void func_002BB820(s32 a, s32 b);
extern void func_002BB7F0(s32 a, s32 b);
extern void func_002BBF20(char *p);
extern void func_002BC000(void);
extern void func_00BBC510(s32 a, s32 b, s32 c, f32 x, f32 y);
extern void func_002A92A0(f32 a, f32 b, f32 c);
extern void func_002A8C00(f32 a);
extern void func_002A8830(s32 a);
extern void func_002A9210(f32 a);
extern void func_002A9200(f32 a);
extern void func_002A91F0(f32 a);
extern void func_001A56D0(f32 a, f32 b);
extern char D_00592740[];
extern char D_00CBBDF8[];
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00592A54[];
extern char D_0058F7B0[];
extern char D_0058F9F0[];
extern char D_0058FC30[];
extern char D_00591070[];
extern char D_005912B0[];
extern char D_005914F0[];
extern char D_003B91B0[];


void func_00C98E00(void) {
    s32 s0;
    s32 m;
    u8 st = *(u8 *)D_00592740;
    if (st == 3) {
        func_002BC000();
    } else if (st == 2) {
        if (*(u32 *)D_00591E14 >= (u32)(*(u8 *)D_00591BE4 * 30)) {
            func_00BBC510(28, 29, 12, 0.0f, 30.0f);
            func_002A92A0(-4352.0f, 0.0f, 0.0f);
            func_002A8C00(0.0f);
            func_002A8830(0);
            func_002A9210(0.0f);
            func_002A9200(0.0f);
            func_002A91F0(0.0f);
            func_001A56D0(50.0f, 16000.0f);
            *(u8 *)D_00592740 = *(u8 *)D_00592740 + 1;
        }
        func_002BC000();
    } else if (st == 1) {
        goto s1;
    } else if (st == 0) {
        func_002BC2B0();
        func_002BB8F0(30.0f);
        if (*(u8 *)D_00CBBDF8 == 1) {
            *(s32 *)D_00591E14 = *(u8 *)D_00591BE4 * 30;
        } else if (*(u8 *)D_00CBBDF8 == 2) {
            *(s32 *)D_00591E14 = *(u8 *)D_00591BE4 * 30;
        }
        m = func_00BBB8C0(1000) % 3;
        if (m == 2) {
            s0 = ((u8 *)D_00592A54)[((u8 *)D_0058FC30)[0x12] * 26880 + ((u8 *)D_0058FC30)[0x11] * 840] ? 10 : 1;
        } else if (m == 1) {
            s0 = ((u8 *)D_00592A54)[((u8 *)D_0058F9F0)[0x12] * 26880 + ((u8 *)D_0058F9F0)[0x11] * 840] ? 9 : 1;
        } else if (m == 0) {
            s0 = ((u8 *)D_00592A54)[((u8 *)D_0058F7B0)[0x12] * 26880 + ((u8 *)D_0058F7B0)[0x11] * 840] ? 8 : 1;
        }
        func_002BB870(s0 & 0xFF, 50);
        func_002BB820(s0 & 0xFF, 29);
        func_002BB7F0(100, 0);
        func_002BBF20(D_003B91B0);
        *(u8 *)D_00592740 = *(u8 *)D_00592740 + 1;
s1:
        if (*(u32 *)D_00591E14 >= (u32)(*(u8 *)D_00591BE4 * 15)) {
            m = func_00BBB8C0(1000) % 3;
            if (m == 2) {
                s0 = ((u8 *)D_00592A54)[((u8 *)D_005914F0)[0x12] * 26880 + ((u8 *)D_005914F0)[0x11] * 840] ? 21 : 12;
            } else if (m == 1) {
                s0 = ((u8 *)D_00592A54)[((u8 *)D_005912B0)[0x12] * 26880 + ((u8 *)D_005912B0)[0x11] * 840] ? 20 : 12;
            } else if (m == 0) {
                s0 = ((u8 *)D_00592A54)[((u8 *)D_00591070)[0x12] * 26880 + ((u8 *)D_00591070)[0x11] * 840] ? 19 : 12;
            }
            func_002BB870(s0 & 0xFF, 50);
            func_002BB820(s0 & 0xFF, 29);
            func_002BB7F0(100, 0);
            func_002BBF20(D_003B91B0);
            *(u8 *)D_00592740 = *(u8 *)D_00592740 + 1;
        }
        func_002BC000();
    }
}
