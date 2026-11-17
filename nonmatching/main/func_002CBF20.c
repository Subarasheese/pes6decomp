/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0021E1A0(s32 a);
extern s32 func_00151EA0(s32 a);
extern s32 func_002CC5C0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7,
                         s32 b0, s32 b1, s32 b2, s32 b3);
extern char D_003AE920[];
extern char D_003AE924[];
extern char D_003AE928[];
extern char D_003AE92C[];
extern char D_003AE930[];
extern char D_003AE934[];
extern char D_003AE940[];
extern char D_003AE944[];
extern char D_003AE948[];
extern char D_003AE94C[];
extern char D_003AE950[];
extern char D_003AE954[];
extern char D_003AE958[];
extern char D_003AE95C[];
extern char D_003AE960[];
extern char D_003AE964[];

void func_002CBF20(u32 a0, u32 a1, u32 type, s32 flag, s32 sel, s32 *out0, s32 *out1, s32 *out2, s32 *out3)
{
    s32 cnt_a = 0, cnt_b = 0, cnt_c = 0, cnt_d = 0, cnt_e = 0;
    s32 loc_c0 = 0;
    s32 s3, v0;
    s32 s6, s7, s2, s1, s0;
    s32 arr290[84];
    s32 arr3e0[8];
    s32 arr400[8];
    s32 arr420[4];
    s32 arr42c[4];
    s32 arr130[20];
    s32 arrE0[10];
    f32 arr110[6];
    s32 i;
    s32 *p140 = arr130 + 4;

    s7 = 0; s6 = 0; s2 = 0; s1 = 0; s0 = 0;
    s3 = func_0021E1A0(a0 & 0xFFFF);
    v0 = func_0021E1A0(a1 & 0xFFFF);

    if (type < 12) {
        if (type < 11) {
            arr420[0] = s3;
            s6 += 2;
            arr420[1] = v0;
        } else {
            if (s3 != 0x1A && s3 != 0xF && s3 != 0xD && s3 != 9 && s3 != 8 && s3 != 6) {
                arr110[0] = *(f32 *)D_003AE920;
                arr110[1] = *(f32 *)D_003AE924;
                arr110[2] = *(f32 *)D_003AE928;
                arr110[3] = *(f32 *)D_003AE92C;
                arr110[4] = *(f32 *)D_003AE930;
                arr110[5] = *(f32 *)D_003AE934;
                s3 = ((s32 *)arr110)[func_00151EA0(6) & 0xFFFF];
            }
            arr42c[0] = s3;
            s7 += 1;
        }
    }

    if (type < 11) {
        if (type == 1 || type == 6) {
            s2 += 1;
            arr400[0] = 1;
        } else if (type == 2 || type == 7) {
            arr400[0] = 2;
            s2 += 2;
            arr400[1] = 3;
        } else if (type == 3 || type == 8) {
            s2 += 1;
            arr400[0] = 4;
        } else if (type == 10) {
            arr400[0] = 1;
            s2 += 2;
            arr400[1] = 2;
        }
    }

    if (flag != 0) {
        f32 *e = (f32 *)arrE0;
        e[0] = *(f32 *)D_003AE940;
        e[1] = *(f32 *)D_003AE944;
        e[2] = *(f32 *)D_003AE948;
        e[3] = *(f32 *)D_003AE94C;
        e[4] = *(f32 *)D_003AE950;
        e[5] = *(f32 *)D_003AE954;
        e[6] = *(f32 *)D_003AE958;
        e[7] = *(f32 *)D_003AE95C;
        e[8] = *(f32 *)D_003AE960;
        e[9] = *(f32 *)D_003AE964;
        for (i = 0; i < 10; i++) {
            p140[i] = arrE0[i];
            s0++;
        }
    }

    if (type == 1 || type == 0) {
        if (type == 0) {
            s32 k;
            arr290[0] = 0x44;
            s1 += 0xD;
            for (k = 1; k < 13; k++)
                arr290[k] = 0x44 + k;
        }
        arr290[s1 + 0] = 0;
        arr290[s1 + 1] = 1;
        arr290[s1 + 2] = 0xA;
        arr290[s1 + 3] = 0xB;
        arr290[s1 + 4] = 0x14;
        arr290[s1 + 5] = 0x15;
        arr290[s1 + 6] = 0x1E;
        arr290[s1 + 7] = 0x1F;
        arr290[s1 + 8] = 0x27;
        arr290[s1 + 9] = 0x28;
        arr290[s1 + 10] = 0x31;
        arr290[s1 + 11] = 0x32;
        s1 += 12;
        i = 0x3A;
        do {
            arr290[s1 + 0] = i;
            arr290[s1 + 1] = i + 1;
            arr290[s1 + 2] = i + 2;
            arr290[s1 + 3] = i + 3;
            arr290[s1 + 4] = i + 4;
            i += 5;
            s1 += 5;
        } while (i < 0x44);
    } else if (type == 9 || type == 4) {
        arr290[1] = 0x4F;
        arr290[0] = 0x4E;
        s1 += 5;
        arr290[3] = 0x46;
        arr130[0] = 0x46;
        arr290[2] = 0x50;
        loc_c0 += 2;
        arr290[4] = 0x49;
        arr130[1] = 0x49;
    }

    if (sel == 0) {
        s32 *a5p;
        if (flag != 0) {
            a5p = p140;
        } else {
            a5p = arr290;
            s0 = s1;
        }
        s0 = (flag != 0) ? s0 : s1;
        *out0 = func_002CC5C0(s7, (s32)arr42c, s2, (s32)arr400, s0, (s32)a5p, s6, (s32)arr420,
                              0, (s32)arr3e0, loc_c0, (s32)arr130);
    } else if (*out0 >= 0x51) {
        *out0 = func_00151EA0(0x51) & 0xFFFF;
    }
    arr130[0] = *out0;

    if (type == 9 || type == 4 || type == 8 || type == 3)
        s6 = 0;

    *out1 = func_002CC5C0(s7, (s32)arr42c, s2, (s32)arr400, s1, (s32)arr290, s6, (s32)arr420,
                          0, (s32)arr3e0, 1, (s32)arr130);
    arr130[1] = *out1;
    *out2 = func_002CC5C0(s7, (s32)arr42c, s2, (s32)arr400, s1, (s32)arr290, s6, (s32)arr420,
                          0, (s32)arr3e0, 2, (s32)arr130);
    arr130[2] = *out2;
    *out3 = func_002CC5C0(s7, (s32)arr42c, s2, (s32)arr400, s1, (s32)arr290, s6, (s32)arr420,
                          0, (s32)arr3e0, 3, (s32)arr130);
    arr130[3] = *out3;
}
