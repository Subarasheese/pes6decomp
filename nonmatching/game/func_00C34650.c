/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 x; f32 y; } V2;

extern char D_00591BE4[];

void func_00C32E60(void *o, s32 a1, s32 a2, s32 a3);
s32 func_009B3480(void *o, f32 x, f32 y);
s32 func_009B3070(s32 a, s32 b);
s32 func_009B3220(s32 a, s32 b, s32 c);
s32 func_00A0C770(void *o, s32 f);
s32 func_00C38580(void *o, V2 v);
s32 func_00C351D0(void *o, V2 v);
s32 func_00C35500(s32 a);
void func_00BD4040(void *o, s32 a);
s32 func_00BBB8C0(s32 a);
s32 func_00BBB990(s32 a, s32 b);
s32 func_00BBB9C0(s32 a, s32 b);
void func_00B35970(void *o, f32 *out, f32 f);
void func_00BD3CF0(void *o, f32 x, f32 y);
s32 func_00C350E0(s32 a, s32 b);
s32 func_00B35DC0(void *o, f32 x, f32 y);
s32 func_00BAC710(s32 a);
s32 func_002079F0(void *o, s32 a);
void func_00209A00(void *o, s32 a, s32 b);
void func_00207390(void *o, s32 a);


void func_00C34650(void *s0, s32 a1, s32 a2, s32 a3) {
    s32 s4, s3, s1, v;
    V2 sv;
    f32 out[2];
    char *o0, *o1;

    s4 = (*(u8 *)((char *)((*(void * *)((char *)(s0) + 4))) + 12));
    func_00C32E60(s0, a1, a2, a3);
    o0 = (*(char * *)((char *)(s0) + 0));
    sv.y = (*(f32 *)((char *)(o0) + 112));
    sv.x = (*(f32 *)((char *)(o0) + 108));
    s3 = func_009B3480(o0, sv.x, sv.y) & 0xffff;
    s1 = func_009B3070((*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 38)), s3) & 0xffff;
    o0 = (*(char * *)((char *)(s0) + 0));
    if ((*(s32 *)((char *)(o0) + 28)) >= 0x681 && func_00A0C770(o0, 0x200) != 0) {
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 44)) = func_009B3480((*(char * *)((char *)(s0) + 0)), 0.0f, 0.0f);
        o0 = (*(char * *)((char *)(s0) + 0));
        (*(u8 *)((char *)((*(char * *)((char *)(o0) + 4))) + 45)) = (u16)(((*(u16 *)((char *)(o0) + 38)) - (*(u16 *)((char *)(o0) + 44))) + 0x10000) < 0x8001;
        func_00209A00((*(void * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4)), 0x3FB, 0);
        func_00207390((*(void * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4)), 16);
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 24)) = 4;
        return;
    }
    if ((*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)) == 0 && (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 26)) == 0) {
        if (s4 == 1 && func_00C38580(s0, sv) != 0) {
            (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 26)) = 0x20;
        } else {
            (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)) = func_00C351D0(s0, sv);
        }
    }
    if ((*(u8 *)((char *)((*(char * *)((char *)(s0) + 0))) + 98)) == 0 && (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)) == 0) {
        v = func_00C35500((*(u8 *)((char *)((*(char * *)((char *)(s0) + 0))) + 18)));
        if (v == 5 || v == 4) {
            if (s4 == 0) {
                if ((*(s32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 28)) == 0) {
                    s4 = 1;
                    func_00BD4040(s0, s4);
                }
            } else if (s4 == 1) {
                if ((*(u8 *)((char *)((*(char * *)((char *)(s0) + 4))) + 18)) == 4) {
                    if (func_00BBB8C0(*(u8 *)D_00591BE4 * 3) == 0) {
                        s4 = 2;
                        func_00BD4040(s0, s4);
                        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 24)) = 3;
                    }
                }
            } else {
                (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 24)) = 3;
            }
        } else if (s4 == 0) {
            if ((*(s32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 28)) == 0) {
                s4 = 1;
                func_00BD4040(s0, s4);
            }
        } else if (s4 != 1) {
            if ((*(u8 *)((char *)((*(char * *)((char *)(s0) + 4))) + 18)) == 4) {
                s4 = 0;
                func_00BD4040(s0, 0);
            }
        }
    }
    o0 = (*(char * *)((char *)(s0) + 0));
    v = (*(s32 *)((char *)(o0) + 28));
    if (v != 0 && (u16)s1 > 0x100 &&
        ((*(u8 *)((char *)(o0) + 98)) != 0 || (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)) != 0 || s4 >= 2)) {
        f32 f;
        f = (f32)(u32)*(u8 *)D_00591BE4;
        func_00B35970(s0, out, f);
        (*(f32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 108)) = out[0];
        (*(f32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 112)) = out[1];
    } else if (v >= 0x341 && (u16)s1 > 0x1000 && (u16)s1 < 0x6000) {
        char *t;
        s3 = func_009B3220(s3, (*(u16 *)((char *)(o0) + 38)), 0x100) & 0xffff;
        t = (*(char * *)((char *)(s0) + 0));
        (*(f32 *)((char *)(t) + 108)) = (*(f32 *)((char *)(t) + 224)) + (f32)func_00BBB990(s3, 0x800);
        t = (*(char * *)((char *)(s0) + 0));
        (*(f32 *)((char *)(t) + 112)) = (*(f32 *)((char *)(t) + 232)) + (f32)func_00BBB9C0(s3, 0x800);
    }
    o0 = (*(char * *)((char *)(s0) + 0));
    func_00BD3CF0(s0, (*(f32 *)((char *)(o0) + 108)), (*(f32 *)((char *)(o0) + 112)));
    o0 = (*(char * *)((char *)(s0) + 0));
    v = (*(u16 *)((char *)(o0) + 26));
    if (v != 0) {
        (*(u16 *)((char *)(o0) + 24)) = v;
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)) = 0;
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 26)) = 0;
        return;
    }
    o1 = (*(char * *)((char *)(s0) + 4));
    if ((*(u16 *)((char *)(o1) + 62)) == 0) return;
    v = (*(u8 *)((char *)(o1) + 18));
    if (v != 5 && v != 4) return;
    s3 = func_00C350E0((*(u16 *)((char *)(o1) + 62)), v) & 0xffff;
    v = (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62));
    {
        s32 hit;
        if (v < 0x59A) {
            hit = v == 0x424 || v == 0x4FB || v == 0x412 || v == 0x3F9 || v == 0x3F8 || v == 0x3F5;
        } else {
            s32 r = func_00BAC710(v);
            hit = r == 0x1B6 || r == 0x1B5 || r == 0x1B2 || r == 0x1B1 || r == 0x1AE;
        }
        if (hit) s1 = (*(u8 *)((char *)((*(char * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4))) + 45));
        else s1 = func_00B35DC0(s0, sv.x, sv.y) & 0xff;
    }
    if (s3 != 10000 && (*(u8 *)((char *)((*(char * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4))) + 45)) != (s1 & 0xff))
        s3 = (s3 + 0x1388) % 10000;
    if (s3 == 10000 || func_002079F0((*(void * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4)), s3) != 0) {
        f32 x, y;
        func_00209A00((*(void * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4)), (*(u16 *)((char *)((*(char * *)((char *)(s0) + 4))) + 62)), 0);
        x = sv.x;
        y = sv.y;
        (*(u8 *)((char *)((*(char * *)((char *)((*(char * *)((char *)(s0) + 0))) + 4))) + 45)) = s1;
        (*(f32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 108)) = x;
        (*(f32 *)((char *)((*(char * *)((char *)(s0) + 0))) + 112)) = y;
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 44)) = func_009B3480((*(void * *)((char *)(s0) + 0)), x, y);
        (*(u16 *)((char *)((*(char * *)((char *)(s0) + 0))) + 24)) = 2;
    }
}
