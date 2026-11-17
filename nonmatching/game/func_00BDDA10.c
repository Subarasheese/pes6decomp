/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BDC580(void);
extern s32 func_00BDC570(void);
s32 func_009B3070(u16, s32);
u32 func_009B33A0(void *, s32, s32);
s32 func_009B33F0(void *, void *);
s32 func_009E1C90(s32);
s32 func_00BA87B0(void *, s32);
void func_00BD3CF0(f32, f32);
extern char Pes6MatchPlayers[];

void func_00BDDA10(void *arg0) {
    char *s0;
    char *s1;
    char *s2;
    char *p;
    char *q;
    s32 a;
    s32 b;
    s32 fx;
    s32 fz;
    s32 near;
    s32 action;
    u8 t;

    p = M2C_FIELD(arg0, char **, 0);
    func_00BD3CF0(M2C_FIELD(p, f32 *, 0x6C), M2C_FIELD(p, f32 *, 0x70));
    action = 0;
    if ((func_009E1C90(3) & 0xFF) == 3) {
        if (func_00BDC580() != 0xFF) {
            a = func_00BDC580() % 23;
        } else {
            a = 1;
        }
        s2 = (char *)Pes6MatchPlayers + a * 0x240;
        if (func_00BDC570() != 0xFF) {
            b = func_00BDC570() % 23;
        } else {
            b = 1;
        }
        s0 = (char *)Pes6MatchPlayers;
        s1 = s0 + b * 0x240;

        p = M2C_FIELD(arg0, char **, 0);
        fx = (s32)(M2C_FIELD(p, f32 *, 0xE0) - M2C_FIELD(s2, f32 *, 0xE0));
        fz = (s32)(M2C_FIELD(p, f32 *, 0xE8) - M2C_FIELD(s2, f32 *, 0xE8));
        near = (s32)((u32)fx * (u32)fx + (u32)fz * (u32)fz) < 0x400001;
        if (near && (func_009B3070(M2C_FIELD(p, u16 *, 0x26), func_009B33F0(p, s2)) & 0xFFFF) < 0x3001) {
            action = 1;
        } else {
            p = M2C_FIELD(arg0, char **, 0);
            fx = (s32)(M2C_FIELD(p, f32 *, 0xE0) - M2C_FIELD(s1, f32 *, 0xE0));
            fz = (s32)(M2C_FIELD(p, f32 *, 0xE8) - M2C_FIELD(s1, f32 *, 0xE8));
            near = (s32)((u32)fx * (u32)fx + (u32)fz * (u32)fz) < 0x400001;
            if (near && (func_009B3070(M2C_FIELD(p, u16 *, 0x26), func_009B33F0(p, s1)) & 0xFFFF) < 0x3001) {
                action = 1;
            } else {
                p = M2C_FIELD(arg0, char **, 0);
                fx = (s32)(M2C_FIELD(p, f32 *, 0xE0) - M2C_FIELD(s0, f32 *, 0xE0));
                fz = (s32)(M2C_FIELD(p, f32 *, 0xE8) - M2C_FIELD(s0, f32 *, 0xE8));
                near = (s32)((u32)fx * (u32)fx + (u32)fz * (u32)fz) < 0x400001;
                if (near && (func_009B3070(M2C_FIELD(p, u16 *, 0x26), func_009B33F0(p, s0)) & 0xFFFF) < 0x3001) {
                    action = 1;
                }
            }
        }
        if (action) {
            if (func_00BA87B0(arg0, 2) != 0) {
                p = M2C_FIELD(arg0, char **, 0);
                M2C_FIELD(p, u16 *, 0x2C) = M2C_FIELD(p, u16 *, 0x26);
                q = M2C_FIELD(arg0, char **, 4);
                M2C_FIELD(q, u8 *, 0x4C) = 2;
                t = M2C_FIELD(q, u8 *, 0x4C);
                if (t == 3) {
                    M2C_FIELD(M2C_FIELD(arg0, char **, 0), s16 *, 0x18) = 9;
                } else if (t < 3) {
                    M2C_FIELD(M2C_FIELD(arg0, char **, 0), s16 *, 0x18) = 7;
                }
            }
        }
    }
    p = M2C_FIELD(arg0, char **, 0);
    if (func_009B33A0(p, (s32)M2C_FIELD(p, f32 *, 0x6C), (s32)M2C_FIELD(p, f32 *, 0x70)) < 0x90001U) {
        if (func_00BA87B0(arg0, 2) != 0) {
            p = M2C_FIELD(arg0, char **, 0);
            M2C_FIELD(p, u16 *, 0x2C) = M2C_FIELD(p, u16 *, 0x26);
            q = M2C_FIELD(arg0, char **, 4);
            M2C_FIELD(q, u8 *, 0x4C) = 2;
            t = M2C_FIELD(q, u8 *, 0x4C);
            if (t == 3) {
                M2C_FIELD(M2C_FIELD(arg0, char **, 0), s16 *, 0x18) = 9;
            } else if (t < 3) {
                M2C_FIELD(M2C_FIELD(arg0, char **, 0), s16 *, 0x18) = 7;
            }
        }
    }
}
