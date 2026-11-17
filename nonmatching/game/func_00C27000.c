/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_002937A0(s32, s32, s32, s32);
extern s32 func_002CA080(void *);
extern s32 func_002C8220(void *, s32, s32, s32);
extern s32 func_002C7280(void *, s32);
extern s32 func_0028F6A0(s32, void *, s32);
extern s32 func_00292ED0(s32);
extern s32 func_00292F00(s32);
extern s32 func_002C96C0(void *, s32, void *);
extern char D_00592980[];

s32 func_00C27000(u8 *obj, s32 p1, s32 slot, s32 val) {
    s8 buf[0x20];
    u8 flg[0x20];
    u8 e0;
    u8 d0;
    u8 s2;
    u8 s7;
    u8 fp;
    u8 team;
    u8 *pslot;
    char *pl;
    s32 s6;
    s32 s3;
    s32 s4;
    s32 s0;
    s32 i;
    s32 best;
    s32 idx;
    s32 v;

    team = obj[0];
    if (slot <= 0 || slot >= 0xB) {
        return 0;
    }
    pslot = &obj[slot + 0xC0];
    s6 = (u8)val;
    if (s6 == (u8)func_002937A0(obj[slot + 0xC0], p1, slot, val)) {
        return 0;
    }
    func_002CA080(buf);
    for (i = 0; i < 0xB; i++) {
        pl = D_00592980 + obj[0] * 0x6900 + obj[0x8C + i] * 0x348;
        if (*(u8 *)(pl + 0xD4) != 0) {
            func_002C8220(buf, obj[0xC0 + i], slot, val);
        }
    }
    if (s6 == 0xC) {
        s3 = buf[0x12];
        e0 = 2;
        if (s3 == 3) {
            d0 = 0x27; s2 = 0x25; s7 = 0x24; fp = 0x28;
        } else if (s3 == 2) {
            s2 = 0x24; s7 = 0x26; fp = 0x28;
        } else if (s3 == 1) {
            s2 = 0x24; s7 = 0x28;
        } else if (s3 == 0) {
            s2 = 0x26;
        }
    } else if (s6 == 0xB) {
        s3 = buf[0x11];
        e0 = 2;
        if (s3 == 3) {
            d0 = 0x22; s2 = 0x20; s7 = 0x1F; fp = 0x23;
        } else if (s3 == 2) {
            s2 = 0x1F; s7 = 0x21; fp = 0x23;
        } else if (s3 == 1) {
            s2 = 0x1F; s7 = 0x23;
        } else if (s3 == 0) {
            s2 = 0x21;
        }
    } else if (s6 == 9) {
        s3 = buf[0xF];
        e0 = 1;
        if (s3 == 3) {
            d0 = 0x1B; s2 = 0x19; s7 = 0x18; fp = 0x1C;
        } else if (s3 == 2) {
            s2 = 0x18; s7 = 0x1A; fp = 0x1C;
        } else if (s3 == 1) {
            s2 = 0x18; s7 = 0x1C;
        } else if (s3 == 0) {
            s2 = 0x1A;
        }
    } else if (s6 == 7) {
        s3 = buf[0xD];
        e0 = 1;
        if (s3 == 3) {
            d0 = 0x14; s2 = 0x12; s7 = 0x11; fp = 0x15;
        } else if (s3 == 2) {
            s2 = 0x11; s7 = 0x13; fp = 0x15;
        } else if (s3 == 1) {
            s2 = 0x11; s7 = 0x15;
        } else if (s3 == 0) {
            s2 = 0x13;
        }
    } else if (s6 == 5) {
        s3 = buf[0xB];
        e0 = 0;
        if (s3 == 3) {
            d0 = 0xD; s2 = 0xB; s7 = 0xA; fp = 0xE;
        } else if (s3 == 2) {
            s2 = 0xA; s7 = 0xC; fp = 0xE;
        } else if (s3 == 1) {
            s2 = 0xA; s7 = 0xE;
        } else if (s3 == 0) {
            s2 = 0xC;
        }
    } else if (s6 == 3) {
        s3 = buf[9];
        e0 = 0;
        if (s3 == 3) {
            d0 = 6; s2 = 2; s7 = 1; fp = 7;
        } else if (s3 == 2) {
            s2 = 1; s7 = 3; fp = 7;
        } else if (s3 == 1) {
            s2 = 1; s7 = 7;
        } else if (s3 == 0) {
            s2 = 3;
        }
    } else {
        return 0;
    }

    for (s4 = 0; s4 < 0xB; s4++) {
        flg[s4] = (s6 == (u8)func_002937A0(obj[0xC0 + s4], 0xC, slot, val)) ? 1 : 0;
    }

    if (s3 == 3) {
        best = 0x68;
        idx = -1;
        for (i = 0; i < 0xB; i++) {
            if (flg[i] != 0 && !(best < obj[0xAB + i * 2])) {
                best = obj[0xAB + i * 2];
                idx = i;
            }
        }
        obj[0xC0 + idx] = s2;
        flg[idx] = 0;
        best = 0;
        idx = -1;
        for (i = 0; i < 0xB; i++) {
            if (flg[i] != 0 && !(obj[0xAB + i * 2] < best)) {
                best = obj[0xAB + i * 2];
                idx = i;
            }
        }
        flg[idx] = 0;
        obj[0xC0 + idx] = d0;
        pl = NULL;
        for (s0 = 0; s0 < 0xB; s0++) {
            if (flg[s0] != 0) {
                pl = D_00592980 + team * 0x6900 + obj[0x8C + s0] * 0x348 + 0x68;
                break;
            }
        }
        if (pl == NULL) {
            return 0;
        }
        if (func_002C7280(pl, 1) != 0) {
            obj[0xC0 + s0] = s7;
            *pslot = fp;
        } else {
            obj[0xC0 + s0] = fp;
            *pslot = s7;
        }
    } else if (s3 == 2) {
        s6 = 0;
        s4 = -1;
        for (s0 = 0; s0 < 0xB; s0++) {
            if (flg[s0] != 0) {
                v = func_0028F6A0(p1, D_00592980 + team * 0x6900 + obj[0x8C + s0] * 0x348 + 0x68, obj[0xC0 + s0]);
                if (!(v < s6)) {
                    s6 = v;
                    s4 = s0;
                }
            }
        }
        if (s4 <= 0) {
            return 0;
        }
        obj[0xC0 + s4] = s7;
        for (i = 0; i < 0xB; i++) {
            if (i != s4 && flg[i] != 0) {
                if (obj[0xAB + i * 2] < 0x34) {
                    obj[0xC0 + i] = s2;
                    *pslot = fp;
                } else {
                    obj[0xC0 + i] = fp;
                    *pslot = s2;
                }
                break;
            }
        }
    } else if (s3 == 1) {
        pl = NULL;
        for (s0 = 0; s0 < 0xB; s0++) {
            if (flg[s0] != 0) {
                pl = D_00592980 + team * 0x6900 + obj[0x8C + s0] * 0x348 + 0x68;
                break;
            }
        }
        if (pl == NULL) {
            return 0;
        }
        if (func_002C7280(pl, 1) != 0) {
            obj[0xC0 + s0] = s2;
            *pslot = s7;
        } else {
            obj[0xC0 + s0] = s7;
            *pslot = s2;
        }
    } else if (s3 == 0) {
        *pslot = s2;
    } else {
        return 0;
    }

    func_002CA080(buf);
    for (i = 0; i < 0xB; i++) {
        pl = D_00592980 + obj[0] * 0x6900 + obj[0x8C + i] * 0x348;
        if (*(u8 *)(pl + 0xD4) != 0) {
            func_002C8220(buf, obj[0xC0 + i], slot, val);
        }
    }
    s0 = (u8)func_00292ED0((u8)val);
    for (i = 0; i < 0xB; i++) {
        if (s0 == (u8)func_00292F00(obj[0xC0 + i])) {
            func_002C96C0(obj + 0xAC, (u8)i, buf);
        }
    }
    obj[slot + 0xCB] = 0;
    obj[slot + 0xD6] = e0;
    return 1;
}
