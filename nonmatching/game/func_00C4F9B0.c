/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00CCB988[];
extern char D_00CB3400[];
extern char D_00CB3408[];
extern char D_00CB46F0[];

s32 func_00C12900(s32);
s32 func_00C12860(void);
s32 func_00C12AC0(void);
s32 func_00C13080(s32, s32, void *);
s32 func_00C13280(s32);
s32 func_00C132B0(s32);
s32 func_00C132C0(s32);
s32 func_00C135B0(s32, void *, s32);
s32 func_00C137B0(s32);
s32 func_00C137C0(s32);
s32 func_00C13840(void);
s32 func_00C4FE30(s32, s32, s32);

void func_00C4F9B0(f32 *out) {
    s32 lim = ((s32 *)D_00CCB988)[1];
    s32 s2 = ((s32 *)D_00CCB988)[2];
    s32 s0, s1 = -1, s3 = 0, t, k;
    u32 s5, ty;
    s32 v[4]; v[3]=0;

    if ((u32)lim < (u32)s2 || s2 == -1) {
        if (out) {
            out[0] = ((f32 *)D_00CB46F0)[0];
            out[1] = ((f32 *)D_00CB46F0)[1];
            out[2] = ((f32 *)D_00CB46F0)[2];
            out[3] = ((f32 *)D_00CB46F0)[3];
        }
        return;
    }
    s0 = func_00C13080(func_00C13840(), s2, (void *)func_00C12860);
    t = func_00C132B0(((s32 *)D_00CCB988)[2]) & 0xff;
    if (t == 0xff) s5 = 2;
    else s5 = (t >> 5) & 1;
    ty = func_00C132C0(((s32 *)D_00CCB988)[2]) & 0xff;
    if (ty == 7) s3 = 11;
    else if (ty == 9) s3 = 10;
    else if (ty == 20) s3 = 9;
    else if (ty == 3) s3 = 8;
    else if (ty == 11) {
        t = *(u8 *)(func_00C13280(s2) + 5) & 3;
        if (t == 1) s3 = 5;
        else if (t == 2) s3 = 4;
        else if (t == 3) s3 = 3;
        else {
            t = *(u8 *)(func_00C13280(s2) + 5) & 0x70;
            if (t == 0x20 || t == 0x10) s3 = 6;
            else s3 = 2;
        }
    } else if (ty == 10) {
        t = *(u8 *)(func_00C13280(s2) + 5) & 3;
        if (t == 1) s3 = 5;
        else if (t == 2) s3 = 4;
        else if (t == 3) s3 = 3;
        else s3 = 7;
    } else {
        if (func_00C12900(ty)) s3 = 1;
        else s3 = 2;
    }

    if ((u32)s3 < 12) {
        if (s3 == 3) {
            if (s5 != 2) {
                s32 s7 = func_00C135B0(s2, D_00CB3400, *(s32 *)D_00CB3408);
                if (s7 != -1) {
                    s1 = func_00C4FE30(s0, s7, s5);
                    if (s1 == -1) s1 = s7;
                }
            }
        } else if (s3 == 11) {
            if (s5 != 2) s1 = func_00C4FE30(s0, s2, (s5 ^ 1) & 0xff);
        } else if (s3 == 6 || s3 == 7 || s3 == 8) {
            if (s5 != 2) s1 = func_00C4FE30(s0, s2, s5);
        } else if (s3 == 9) {
            if (s5 != 2) {
                k = 0;
                do {
                    s2 = func_00C13080(s0, func_00C137B0(s2), (void *)func_00C12AC0);
                    if (s2 == -1) break;
                    k++;
                } while (k < 4);
                s1 = -1;
            }
        } else if (s3 == 10) {
            s1 = func_00C13080(s0, func_00C137B0(s2), (void *)func_00C12AC0);
        }
    }

    ((s32 *)D_00CCB988)[2] = func_00C137C0(((s32 *)D_00CCB988)[2]);
    if (out) {
        v[2] = s3;
        v[1] = s2;
        if (s1 == -1) v[0] = s2;
        else v[0] = s1;
        out[0] = *(f32 *)&v[0];
        out[1] = *(f32 *)&v[1];
        out[2] = *(f32 *)&v[2];
        out[3] = *(f32 *)&v[3];
    }
}
