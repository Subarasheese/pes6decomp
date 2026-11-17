/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_001C48E8(void *, s32, s32);
extern s32 func_00277360(void *);
extern void func_0028D6E0(void *, void *, s32, s32, s32, void *, void *, s32);
extern u16 D_00591BB0;
extern u16 D_00591BB2;
extern char D_00591A90[];
extern char D_00591A97[];
extern char D_00591A9B[];
extern char D_00591AA2[];
extern char D_00591B17[];
extern char D_00592980[];
extern char D_005A2020[];
extern u8 D_005A2021;

void func_0028CD80(void) {
    u8 buf[0x188];
    u8 flg[0x20];
    u8 *s;
    u8 *d;
    u8 *p;
    char *q;
    char *g;
    s32 i;
    s32 j;

    if (D_00591BB0 != D_00591BB2) {
        return;
    }
    func_001C48E8(buf, 0, 0x188);
    buf[0] = 0;
    j = 0;
    s = (u8 *)D_00591A90;
    d = buf;
    p = flg;
    do {
        j += 5;
        p[0] = 1;
        d[5] = s[0x12];
        p[1] = 1;
        d[6] = s[0x13];
        p[2] = 1;
        d[7] = s[0x14];
        s += 5;
        p[3] = 1;
        d[8] = s[0x15 - 5];
        p[4] = 1;
        d[9] = s[0x16 - 5];
        p += 5;
        d += 5;
    } while (j < 6);
    flg[j] = 1;
    buf[5 + j] = D_00591AA2[j];
    j++;
    for (; j < 0x16; j++) {
        flg[j] = 0;
        buf[5 + j] = D_00591A90[j - 4];
    }
    for (; j < 0x20; j++) {
        flg[j] = 1;
        buf[5 + j] = D_00591A90[j + 7];
    }
    g = D_00592980;
    for (i = 0; i < 0x20; i++) {
        buf[0x25 + i] = *(u8 *)(g + 0xD4);
        if (func_00277360(g + 0xF0) == 1) {
            buf[0x45 + i] = 1;
        } else {
            buf[0x45 + i] = 0;
        }
        buf[0x65 + i] = *(u8 *)(g + 0x14);
        ((char **)(buf + 0x48))[i] = g + 0x94;
        buf[0x85 + i] = 0;
        g += 0x348;
    }
    q = D_005A2020 + D_005A2021 * 0x52;
    j = 0;
    d = buf;
    do {
        j += 5;
        d[0x128] = q[0x1C];
        d[0x129] = q[0x1D];
        d[0x12A] = q[0x1E];
        d[0x12B] = q[0x1F];
        d[0x12C] = q[0x20];
        q += 5;
        d += 5;
    } while (j < 6);
    buf[0x128 + j] = *(u8 *)(D_005A2020 + 0x1C + D_005A2021 * 0x52 + j);
    buf[2] = 0xB;
    buf[3] = 0xFF;
    buf[4] = 0xFF;
    func_0028D6E0(buf, flg, 1, 1, 0xFF, &buf[j], D_005A2020 + 0x1C + D_005A2021 * 0x52, D_005A2021 * 0x52);
    s = buf;
    d = (u8 *)D_00591A90;
    for (j = 0; j < 0x20; j += 8) {
        d[0x92] = s[5];
        d[0x93] = s[6];
        d[0x94] = s[7];
        d[0x95] = s[8];
        d[0x96] = s[9];
        d[0x97] = s[0xA];
        d[0x98] = s[0xB];
        d[0x99] = s[0xC];
        s += 8;
        d += 8;
    }
    q = D_00591A9B;
    j = 0xB;
    do {
        j += 5;
        q[7] = q[0x87];
        q[8] = q[0x88];
        q[9] = q[0x89];
        q[0xA] = q[0x8A];
        q[0xB] = q[0x8B];
        q += 5;
    } while (j < 0x11);
    D_00591A97[j] = D_00591B17[j];
    j++;
    for (; j < 0x20; j++) {
        D_00591A90[j + 7] = D_00591A90[j + 0x92];
    }
}
