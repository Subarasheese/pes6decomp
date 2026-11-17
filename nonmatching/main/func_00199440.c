/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_005202B0[];
extern char D_00520230[];
extern char D_0051FFB2[];
extern char D_005202B8[];
extern char D_00397660[];
extern char D_0051FF51[];

s32 func_00153FE0(s32 a0, s32 a1);
f32 func_0011D468(f32 x);
s32 func_00188AC0(s32 a0, s32 a1);
void func_001982E0(void);

void func_00199440(void) {
    u8 *base;
    u16 *cell;
    u32 r, c, i, j, k;
    f32 *tbl;
    f32 s;
    u8 *obj;
    u8 *vtx;
    f32 *p;
    f32 mn[3];
    f32 mx0, mx1, mx2;
    s32 *pa, *pb;
    f32 *py;
    f32 *pz;

    if (*(s32 *)D_005202B0 == 0) return;
    if (*(s32 *)D_00520230 != 0) return;

    base = (u8 *)func_00153FE0(*(s16 *)D_0051FFB2, 0x29C0);
    *(s32 *)D_00520230 = (s32)base;

    cell = (u16 *)(base + 0x1E8);
    for (r = 0; r < 10; r++) {
        for (c = 0; c < 10; c += 5) {
            for (k = 0; k < 5; k++) {
                u16 v = (c + k) + r * 11;
                cell[0] = v;
                cell[1] = cell[0] + 11;
                cell[2] = cell[0] + 1;
                cell[3] = cell[2];
                cell[4] = cell[1];
                cell[5] = cell[1] + 1;
                cell += 6;
            }
        }
    }

    tbl = (f32 *)(((u8 *)*(s32 *)D_00520230) + 4);
    for (i = 0; i < 11; i++) {
        s = func_0011D468(3.1415927f * (f32)i / 10.0f);
        for (j = 0; j < 11; j++) {
            *tbl = (s + func_0011D468(3.1415927f * (f32)j / 10.0f)) / 2.0f;
            tbl++;
        }
    }

    obj = (u8 *)*(s32 *)D_00520230 + 0x698;
    py = &mn[1];
    pz = &mn[2];
    pa = (s32 *)D_005202B8;
    pb = (s32 *)D_00397660;
    for (i = 0; i < 2; i++, obj += 0x1194, pa++, pb++) {
        if (*pa == 0) {
            *(s32 *)obj = 0;
            continue;
        }
        if (func_00188AC0(*pb, (s32)(obj + 0x10)) != 0x79) {
            *(s32 *)obj = 0;
            continue;
        }
        *(s32 *)obj = 1;
        if (i == 0 && *(u8 *)D_0051FF51 != 0) {
            if (*(u8 *)D_0051FF51 == 1)
                *(s32 *)(obj + 4) = 2;
            else
                *(s32 *)(obj + 4) = 3;
        } else {
            *(s32 *)(obj + 4) = i;
        }

        vtx = obj + 0x5C0;
        for (r = 0; r < 11; r++) {
            f32 t = 0.74f * ((f32)r / 10.0f);
            for (c = 0; c < 11; c++) {
                *(f32 *)(vtx + 0x10) = (f32)c / 10.0f;
                *(f32 *)(vtx + 0x14) = t;
                vtx += 0x18;
            }
        }

        *(u16 *)(obj + 0x1118) = 51;
        *(u16 *)(obj + 0x111A) = 200;
        *(u8 **)(obj + 0x1120) = obj + 0x5C0;
        *(u8 **)(obj + 0x1124) = (u8 *)*(s32 *)D_00520230 + 0x1E8;

        p = *(f32 **)(obj + 0x10);
        mn[0] = mx0 = p[0];
        *py = mx1 = p[1];
        *pz = mx2 = p[2];
        p += 4;
        for (k = 1; k < 121; k++) {
            if (p[0] < mn[0]) mn[0] = p[0];
            else if (p[0] > mx0) mx0 = p[0];
            if (p[1] < *py) *py = p[1];
            else if (p[1] > mx1) mx1 = p[1];
            if (p[2] < *pz) *pz = p[2];
            else if (p[2] > mx2) mx2 = p[2];
            p += 4;
        }
        *(s32 *)(obj + 0x1128) = 0;
        *(s32 *)(obj + 0x112C) = 0;
        *(s32 *)(obj + 0x1130) = 0;
        p = (f32 *)(obj + 0x1134);
        p[0] = mn[0]; p[1] = mx1; p[2] = mx2;
        p[3] = mn[0]; p[4] = *py; p[5] = mx2;
        p[6] = mx0; p[7] = mx1; p[8] = mx2;
        p[9] = mx0; p[10] = *py; p[11] = mx2;
        p[12] = mn[0]; p[13] = mx1; p[14] = *pz;
        p[15] = mn[0]; p[16] = *py; p[17] = *pz;
        p[18] = mx0; p[19] = mx1; p[20] = *pz;
        p[21] = mx0; p[22] = *py; p[23] = *pz;
    }

    **(s32 **)D_00520230 = 1;
    func_001982E0();
    **(s32 **)D_00520230 = 0;
}
