/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA820;
extern char D_00CCBD30[];
extern char D_00CCBD40[];
extern char D_00CA86D8[];
extern char D_00CA86DC[];
extern char D_00CCCE34[];

void func_001C48E8(void *, s32, s32);
s32 func_00C86030(s32, void *);
s32 func_001F7B30(s32, void *);
s32 func_001F70D0(s32, s32);
void func_001F7030(s32, s32);
void func_00C74530(void);
void func_00C73EF0(void);
void func_00C74090(void);
s32 func_001EDD00(s32);
void func_001F6C20(s32, s32, s32, s32);
void func_00C8B160(s32, s32);
void func_001F6FC0(s32, void *, s32, s32);
void func_00C92C80(s32, f32, f32);
void func_00C92C60(f32);
void func_00C73A40(s32);

void func_00C73460(void) {
    s32 tbl[2];
    f32 buf[4];
    s32 s0, s1;
    u8 *p;

    *(s32 *)(D_00CCBD40 + D_003EA820 * 0x50) = 0xFF;
    func_001C48E8(D_00CCBD30 + D_003EA820 * 0x50 + 0x1D, 0, 0xC);
    s0 = D_003EA820;
    p = (u8 *)D_00CCBD30 + s0 * 0x50;
    s1 = p[0x29];
    p[0x29] = (s1 & ~1) | 1;
    s1 = func_001F7B30(func_00C86030(s1, p), p);
    s1 = func_001F70D0(s1, D_003EA820);
    *(s32 *)(D_00CCBD30 + D_003EA820 * 0x50) = s1;
    func_001F7030(s1, s0);
    func_00C74530();
    func_00C73EF0();
    func_00C74090();
    tbl[0] = *(s32 *)D_00CA86D8;
    tbl[1] = *(s32 *)D_00CA86DC;
    s0 = D_003EA820;
    s1 = func_001EDD00(*(s32 *)D_00CCCE34);
    func_001F6C20(*(s32 *)(D_00CCBD30 + D_003EA820 * 0x50), s1, 9, 0);
    func_00C8B160(tbl[s0], s1);
    s0 = D_003EA820;
    buf[0] = 0; buf[1] = 0; buf[2] = 0; buf[3] = 0;
    func_001F6FC0(*(s32 *)(D_00CCBD30 + s0 * 0x50), buf, 9, 0);
    func_00C92C80(s0, buf[0], buf[1] - 3.0f);
    func_00C92C60(buf[2]);
    func_00C73A40(0);
}
