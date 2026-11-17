/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CBCD81[];
extern char D_00CBCD8C[];
extern char D_00CBCD8D[];
extern char D_00CBCD84[];
extern char D_00CBCD8E[];
extern void func_00B2ACF0(void);
extern s32 func_00207D10(char *);
extern void func_00B89870(char *);
extern void func_00209A00(char *, s32, s32);
extern void func_00207390(char *, s32);
extern void func_00B846A0(char *);
extern s32 func_00207D80(char *, s32);
extern void func_00208610(char *);
extern void func_00B9E5D0(char *);
extern void func_00B36400(s32, s32);
extern void func_00BD3BE0(char *, s32);

void func_00BE5610(char *p) {
    s32 v;
    char *o;
    func_00B2ACF0();
    if (func_00207D10(*(char **)(*(char **)p + 4)) != 0) {
        func_00208610(*(char **)(*(char **)p + 4));
        func_00B9E5D0(p);
        return;
    }
    if (*(u8 *)D_00CBCD81 != 0) {
        u8 k;
        func_00B89870(p);
        k = *(u8 *)D_00CBCD8C;
        if (k == 4) {
            v = 0x5A2;
        } else if (k == 3) {
            v = 0x5A0;
        } else if (k == 2) {
            v = 0x59E;
        } else if (k == 1) {
            v = 0x59C;
        } else if (k == 0) {
            v = 0x59A;
        }
        func_00209A00(*(char **)(*(char **)p + 4), v, 0);
        func_00207390(*(char **)(*(char **)p + 4), 0xA);
        *(u8 *)(*(char **)(*(char **)p + 4) + 0x2D) = *(u8 *)D_00CBCD8E;
        *(u8 *)(*(char **)p + 0x66) = 0xFF;
        func_00B846A0(p);
        *(s16 *)(*(char **)p + 0x18) = 0x60;
        return;
    }
    o = *(char **)(*(char **)p + 4);
    if (func_00207D80(o, *(u8 *)(*(char **)(o + 4) + 2) * 2) != 0) {
        if (*(u8 *)D_00CBCD8D != 0) {
            char *b = *(char **)p;
            u32 w = *(u32 *)(b + *(u8 *)D_00CBCD84 * 4 + 0x158);
            if (w < 0x400000) {
                o = *(char **)(b + 4);
                func_00209A00(o, *(u16 *)(o + 0x30), (*(u8 *)(*(char **)(o + 4) + 1) * 2) & 0xFFFF);
            }
        }
        o = *(char **)(*(char **)p + 4);
        if (*(f32 *)(o + 0x38) < (f32)(*(u8 *)(*(char **)(o + 4) + 2) * 2)) return;
        func_00B36400(1, 1);
        return;
    }
    o = *(char **)(*(char **)p + 4);
    if (func_00207D80(o, *(u8 *)(*(char **)(o + 4) + 1) * 2) != 0) {
        func_00BD3BE0(p, 2);
    }
}
