/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern f32 *D_003E74CC;
extern char *D_003E7574;
extern char D_005926E0[];
void func_00930240(char *o);
void func_00A00960(char *o, s32 a);
void func_00B00970(char *o, s32 a, s32 b, s32 c);
u16 func_009B3220(u16 a, u16 b, s32 c);

void func_009D4CF0(char *o) {
    char *b = *(char **)(o + 4);
    f32 f = *(f32 *)(b + 0x38);
    char *c = *(char **)(b + 4);
    s32 mul = 0;
    u32 id;
    char *bb;

    if (!((s32)(*(u16 *)(c + 8) * 2) < (s32)f)) {
        func_00A00960(o, *(u16 *)(o + 0x38));
        return;
    }
    id = *(u16 *)(b + 0x30);
    if (id == 0xF2 || id == 0x196 || id == 0x171 || id == 0x194 || id == 0x1B || id == 0x10
        || id == 0x19E || id == 0x191 || id == 0x17B || id == 0x1A || id == 0x1DD || id == 0xB) {
        f32 m = (f32)(*(u8 *)(c + 2) * 2);
        if (f < m) mul = 0x63; else mul = 0x5C;
    } else if (id == 0x4E || id == 0x3B9 || id == 0x3BB || id == 0x3B7 || id == 0x3B5
               || id == 0x3B8 || id == 0x3BA || id == 0x3B4) {
        func_00930240(o);
    } else if (id == 0x3DE || id == 0x3E0 || id == 0x3E4 || id == 0x25C || id == 0x3D9
               || id == 0x3E2 || id == 0x3E1 || id == 0x3E5 || id == 0x3DB || id == 0x3DC) {
        mul = 0x5C;
    } else if (id == 0x3CA || id == 0x3CC || id == 0x3D0 || id == 0x3C6 || id == 0x3C4
               || id == 0x3CE || id == 0x3CD || id == 0x3D1 || id == 0x3C7 || id == 0x3C8
               || id == 0x26D || id == 0x26C || id == 0x273 || id == 0x270 || id == 0x271) {
        char *cc;
        s32 fi;
        if (id == 0x26D || id == 0x26C || id == 0x273 || id == 0x270 || id == 0x271) {
            s32 sgn = *(u8 *)(b + 0x2D) ? -1 : 1;
            *(u16 *)(o + 0x26) = *(u16 *)(o + 0x26) - (u16)(*(u16 *)(o + 0x38) * sgn);
        }
        bb = *(char **)(o + 4);
        fi = (s32)*(f32 *)(bb + 0x38);
        cc = *(char **)(bb + 4);
        if (*(u8 *)(cc + 2) * 2 < fi) mul = 0x5C; else mul = 0x63;
    } else if (id == 0x3B6) {
        if (f < 26.0f) {
            *(u8 *)(D_003E7574 + 0x66) = *(u8 *)D_005926E0;
            mul = 0x5C;
        } else {
            func_00B00970(o, (s32)((1024.0f * *D_003E74CC) / 2.0f), 0x3B6, 0x271);
        }
    } else if (id == 0x3B1 || id == 0x3B0) {
        func_00930240(o);
    } else if (id == 0x1F5 || id == 0x159 || id == 0x15C || id == 0x1F4 || id == 0x15D
               || id == 0x15E || id == 0x15B || id == 0x15A || id == 0x268 || id == 0x267
               || id == 0x162 || id == 0x266 || id == 0x30 || id == 0x3C0 || id == 0x3C1
               || id == 0x3C2 || id == 0x3BF || id == 0x3BE || id == 0x3BC || id == 0x3BD
               || id == 0x3B3) {
        if (id == 0x3B3) {
            if (!(f <= 20.0f))
                *(u16 *)(o + 0x26) = func_009B3220(*(u16 *)(o + 0x10C), *(u16 *)(o + 0x26), 0x400);
        }
        bb = *(char **)(o + 4);
        if (*(f32 *)(bb + 0x38) < (f32)(*(u8 *)(*(char **)(bb + 4) + 2) * 2))
            mul = 0x62;
        else
            func_00930240(o);
    } else if (id == 0x3B2) {
        if (!(f <= 20.0f))
            *(u16 *)(o + 0x26) = func_009B3220(*(u16 *)(o + 0x10C), *(u16 *)(o + 0x26), 0x400);
        func_00930240(o);
    } else if (id == 0x3D3 || id == 0x11C) {
        if (f < (f32)(*(u8 *)(c + 2) * 2)) {
            *(u16 *)(o + 0x28) = *(u16 *)(o + 0x26) + 0x8000;
            mul = 0x62;
        } else {
            func_00930240(o);
        }
    } else if (id == 0x3D4 || id == 0x25A || id == 0x3AD || id == 0x161) {
        func_00930240(o);
    } else {
        func_00A00960(o, *(u16 *)(o + 0x38));
        bb = *(char **)(o + 4);
        if (!(*(f32 *)(bb + 0x38) < (f32)(*(u8 *)(*(char **)(bb + 4) + 2) * 2)))
            mul = 0x5C;
    }
    if (mul)
        *(s32 *)(o + 0x1C) = (*(s32 *)(o + 0x1C) * mul) / 100;
    bb = *(char **)(o + 4);
    if (!(*(f32 *)(bb + 0x38) <= (f32)(*(u8 *)(*(char **)(bb + 4) + 2) * 2))) {
        *(s32 *)(o + 0xE4) = 0;
        *(s32 *)(o + 0xF4) = 0;
    }
}
