/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002ABF10(int, int, int);
extern void func_002AD120(void *);
extern void func_002AD0E0(void *, s32, u8);
extern void func_002AD0B0(void *, u8);
extern char D_005E2FA0[];
extern char D_005E2FA4[];
extern char D_005E2FA8[];
extern char D_005E2FAC[];
extern char D_005E2FB0[];
extern char D_005E2FB4[];
extern char D_005E2FB8[];
extern char D_005E2FBC[];
extern char D_005E2FC0[];
extern char D_005E2FC1[];
extern char D_005E2FC2[];
extern char D_005E2FC3[];
extern char D_005E2FC4[];
extern char D_005E2FC5[];
extern char D_005E2FC6[];
extern char D_005E2FC8[];
extern char D_005E2FCC[];
extern char D_005E2FD0[];
extern char D_005E2FD4[];
extern char D_005E30D4[];
extern char D_005E30D8[];
extern char D_005E30DC[];
extern char D_005E30E0[];
extern char D_005E3274[];
extern char D_005E3278[];
extern char D_005E328A[];
extern char D_005E328B[];
extern char D_005E328C[];
extern char D_005E328D[];
extern char D_005E3304[];
extern char D_005E3305[];

void func_002BC540(void) {
    (*(s32 *)D_005E2FB0) = 0xBF800000;
    (*(s32 *)D_005E2FA0) = (*(s32 *)D_005E3278);
    (*(s8 *)D_005E2FC2) = -1;
    (*(s8 *)D_005E2FC4) = -1;
    (*(s32 *)D_005E2FA8) = 0;
    (*(f32 *)D_005E2FA4) = (*(f32 *)D_005E3274);
    (*(s32 *)D_005E2FAC) = 0xBF800000;
    (*(u8 *)D_005E2FC1) = (*(u8 *)D_005E328D);
    (*(s8 *)D_005E2FC3) = -1;
    (*(s32 *)D_005E2FC8) = 0;
    (*(u8 *)D_005E2FC5) = (*(u8 *)D_005E3304);
    (*(s32 *)D_005E2FCC) = 0;
    (*(u8 *)D_005E2FC6) = (*(u8 *)D_005E3305);
    (*(s32 *)D_005E2FB4) = 0xBF800000;
    (*(s32 *)D_005E2FB8) = 0;
    (*(s32 *)D_005E2FBC) = 0xBF800000;
    (*(s8 *)D_005E2FC0) = 0;
    (*(s32 *)D_005E2FD0) = 0;
    func_002ABF10((s32) ((void *)D_005E2FD4), (s32) ((void *)D_005E2FC6), (s32) (*(u8 *)D_005E3305));
    (*(s32 *)D_005E30D4) = 0;
    (*(s32 *)D_005E30D8) = 0;
    (*(s32 *)D_005E30DC) = 0;
    func_002AD120(((void *)D_005E30E0));
    func_002AD0E0(((void *)D_005E30E0), 0, (*(u8 *)D_005E328A));
    func_002AD0E0(((void *)D_005E30E0), 1, (*(u8 *)D_005E328B));
    func_002AD0B0(((void *)D_005E30E0), (*(u8 *)D_005E328C));
}
