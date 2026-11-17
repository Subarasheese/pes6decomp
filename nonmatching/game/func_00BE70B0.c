/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B2A9C0(void);
extern void func_00B2ACF0(char **p);
extern s32 func_00207D10(char *a);
extern s32 func_00207D80(char *a, s32 b);
extern void func_00208610(char *a);
extern void func_00B9E5D0(char **p);
extern void func_00209A00(char *a, s32 b, s32 c);
extern void func_00B846A0(char **p);
extern void func_00B35E10(char **p, char *a, char *b);
extern s32 func_009B3480(char *a, f32 x, f32 y);
extern char D_00CBCAD1[];
extern char D_00CBCD81[];

void func_00BE70B0(char **arg0) {
    s32 s2 = 0;
    s32 s1;
    s32 s0;
    u8 t;
    s1 = func_00B2A9C0();
    t = *(u8 *)D_00CBCAD1;
    if (t == 0x67) {
        s0 = 0x59B;
        s2 = 0x6E;
    } else if (t == 0x63) {
        s0 = 0x59C;
        s2 = 0x78;
    } else if (t == 0x34) {
        s0 = 0x59B;
        s2 = 0xF0;
    }
    func_00B2ACF0(arg0);
    if (func_00207D10(*(char **)(*arg0 + 4)) == 0) {
        if (func_00207D80(*(char **)(*arg0 + 4), s2)) {
            if (*(u8 *)D_00CBCD81 != 0) {
                *(u8 *)(*arg0 + 0x66) = 0xFF;
                func_00209A00(*(char **)(*arg0 + 4), s0, 0);
                func_00B846A0(arg0);
                *(s16 *)(*arg0 + 0x18) = 0x60;
            }
        } else if (s1 != 0) {
            if (func_00207D80(*(char **)(*arg0 + 4), s1)) {
                char *o = *arg0;
                func_00B35E10(arg0, o + 0x6C, o + 0x70);
                o = *arg0;
                *(s16 *)(*arg0 + 0x2C) = func_009B3480(o, *(f32 *)(o + 0x6C), *(f32 *)(o + 0x70));
            }
        }
    } else {
        func_00208610(*(char **)(*arg0 + 4));
        func_00B9E5D0(arg0);
    }
}
