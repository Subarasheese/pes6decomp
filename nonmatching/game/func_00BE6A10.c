/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char *func_00BF6270(void);
extern s32 **func_00B2A420(char *);
extern void func_0027A5B0(s32, u8);
extern void func_00B83FF0(u16, u8, f32 *, s32, f32, f32, f32, f32, f32);
extern void func_00B34AE0(void *, s32, s32);
extern void func_00BD3CF0(void *, f32, f32);
extern s32 func_00207D80(void *, s32);
extern void func_00209A00(void *, s32, s32);
extern void func_00207390(void *, s32);
extern void func_00B84330(void *, u8, u16, s32, u16, s32);
extern char D_00CBCAD1[];
extern char D_00CBCCD0[];
extern char D_00CBCCF0[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCAFE[];
extern char D_00CBCD10[];
extern char D_00CBCD70[];
extern char D_00CBCD81[];

void func_00BE6A10(char **arg0) {
    s32 s4, s3, s2, s1, s6;
    s32 **s0;
    f32 buf[2];
    u8 sel;
    char *rec;

    s0 = (s32 **)func_00B2A420(func_00BF6270());
    func_0027A5B0(*(s32 *)arg0, **(u8 **)s0);
    sel = *(u8 *)D_00CBCAD1;
    if (sel == 0x67) {
        s4 = 0x6E; s3 = 0; s2 = 0x59A; s1 = 0x59B; s6 = 0x59C;
    } else if (sel == 0x63) {
        s4 = 0x78; s3 = 0; s2 = 0x59A; s1 = 0x59C; s6 = 0x59D;
    } else if (sel == 0x34) {
        s4 = 0xF0; s3 = 0; s2 = 0x59A; s1 = 0x59B; s6 = 0x59C;
    } else if (sel == 0xA) {
        s4 = 0xC6; s3 = 1; s2 = 0x59A; s1 = 0x59B; s6 = 0x59C;
    }
    func_00B83FF0(*(u16 *)D_00CBCAFE, *(u8 *)(*(char **)((char *)*s0 + 4) + 0x2D), buf, 0,
                  *(f32 *)D_00CBCB00, *(f32 *)D_00CBCB04,
                  *(f32 *)(D_00CBCCD0 + s3 * 4), *(f32 *)(D_00CBCCF0 + s3 * 4), 100.0f);
    *(f32 *)(*arg0 + 0x6C) = buf[0];
    *(f32 *)(*arg0 + 0x70) = buf[1];
    rec = *(char **)((char *)*s0 + 4);
    func_00B34AE0(arg0, (s32)(((f32)s4 - *(f32 *)(rec + 0x38)) / *(f32 *)(rec + 0x28)), 2);
    func_00BD3CF0(arg0, *(f32 *)(*arg0 + 0x6C), *(f32 *)(*arg0 + 0x70));
    rec = *(char **)((char *)*s0 + 4);
    if (*(u16 *)(rec + 0x30) == (u16)s2) {
        if (func_00207D80(rec, s4 - 1) != 0) {
            *(u8 *)D_00CBCD81 = 1;
        }
    } else if (*(u16 *)(rec + 0x30) == (u16)s1) {
        char *r0;
        s32 m;
        s32 idx = s3 * 2;
        *(u8 *)(*(char **)(*arg0 + 4) + 0x2D) = *(u8 *)(rec + 0x2D);
        r0 = (char *)*s0;
        m = *(u8 *)(*(char **)(r0 + 4) + 0x2D) ? -1 : 1;
        *(u16 *)(*arg0 + 0x26) = *(u16 *)(r0 + 0x26) + *(u16 *)(D_00CBCD10 + idx) * m;
        *(u8 *)(*arg0 + 0x66) = 0xFF;
        func_00209A00(*(char **)(*arg0 + 4), s6, 0);
        func_00207390(*(char **)(*arg0 + 4), 10);
        func_00B84330(arg0, (u8)(u32)func_00BF6270(), *(u16 *)(*arg0 + 0x26), 0,
                      *(u16 *)(D_00CBCD70 + idx), 0);
        *(u16 *)(*arg0 + 0x18) = 0x60;
    }
}
