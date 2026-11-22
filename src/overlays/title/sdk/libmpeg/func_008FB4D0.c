/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00141AA0.c.
 * See THIRD_PARTY.md for provenance and terms. */
#include "types.h"

typedef struct Rec_00135560 {
    u8 pad0[0x18];
    long v18;
    long v20;
    s32 state;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    s32 f3C;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
    s32 f60;
} Rec_00135560;
typedef struct Obj_00135560 {
    u8 pad0[0xB4];
    s32 cntA;
    s32 cntB;
    u8 pad1[0xFC - 0xBC];
    s32 flagFC;
    u8 pad2[0x14C - 0x100];
    s32 f14C;
    u8 pad3[0x158 - 0x150];
    s32 f158;
    s32 f15C;
    s32 mode;
    u8 pad4[0x184 - 0x164];
    s32 type;
    s32 f188;
    u8 pad5[0x194 - 0x18C];
    s32 f194;
    s32 f198;
    s32 f19C;
    s32 f1A0;
    s32 f1A4;
    s32 f1A8;
    s32 f1AC;
    s32 f1B0;
    s32 flag1B4;
    s32 flag1B8;
    u8 pad6[0x1C8 - 0x1BC];
    Rec_00135560 *r1C8;
    Rec_00135560 *r1CC;
    Rec_00135560 *r1D0;
    Rec_00135560 *r1D4;
    Rec_00135560 *r1D8;
    Rec_00135560 *r1DC;
    Rec_00135560 *r1E0;
    Rec_00135560 *r1E4;
    Rec_00135560 *r1E8;
    Rec_00135560 *r1EC;
    Rec_00135560 *r1F0;
    Rec_00135560 *r1F4;
    u8 pad7[0x838 - 0x1F8];
    long v838;
    long v840;
} Obj_00135560;

/* from rac3-decomp's func_00135560 */
s32 func_008FB4D0(Obj_00135560 *p, s32 arg1) {
    Rec_00135560 *rec;
    s32 ret;
    s32 n;
    Rec_00135560 *tmp;
    Rec_00135560 *cur;
    s32 type;
    s32 mode;
    rec = 0;
    ret = 0;
    type = p->type;
    mode = p->mode;
    n = (type == 3) ? 2 : 4;
    if (mode == 3) {
        p->r1D0 = p->r1D4;
        p->r1E0 = p->r1E4;
        p->r1F0 = p->r1F4;
        if (p->cntA + p->cntB >= n) {
            p->flagFC = 0;
            p->flag1B8 = 0;
            p->flag1B4 = 0;
        }
        if ((p->flagFC != 0 || p->flag1B8 != 0) && p->flag1B4 == 0) {
            Rec_00135560 *ra = p->r1C8;
            Rec_00135560 *rb = p->r1D8;
            Rec_00135560 *rc;
            ra->state = 0;
            rc = p->r1E8;
            rb->state = 0;
            rc->state = 0;
            type = p->type;
        }
        p->flagFC = 0;
        p->flag1B8 = 0;
        if (type == 3) {
            if (p->r1C8->state == 1 || p->flag1B4 != 0) {
                if (p->r1CC->state == 1) {
                    ret = 1;
                }
            }
        } else {
            if ((p->r1D8->state == 1 && p->r1E8->state == 1) || p->flag1B4 != 0) {
                if (p->r1DC->state == 1) {
                    if (p->r1EC->state == 1) {
                        ret = 1;
                    }
                }
            }
        }
    } else {
        if (arg1 == 0) {
            tmp = p->r1C8;
            p->r1C8 = p->r1CC;
            p->r1CC = tmp;
            tmp = p->r1D8;
            p->r1D8 = p->r1DC;
            p->r1DC = tmp;
            tmp = p->r1E8;
            p->r1E8 = p->r1EC;
            p->r1EC = tmp;
        }
        p->r1D0 = p->r1CC;
        p->r1E0 = p->r1DC;
        p->r1F0 = p->r1EC;
        if (type == 3) {
            if (mode != 2 || p->r1C8->state == 1) {
                ret = 1;
            }
        } else {
            cur = (type == 1) ? p->r1F0 : p->r1E0;
            if (mode != 2 || (arg1 != 0 && cur->state == 1) ||
                (p->r1D8->state == 1 && p->r1E8->state == 1)) {
                ret = 1;
            }
        }
    }
    switch (type) {
    case 3:
        rec = p->r1D0;
        break;
    case 1:
        rec = p->r1E0;
        break;
    case 2:
        rec = p->r1F0;
        break;
    }
    rec->state = 0;
    {
        long la = p->v838;
        s32 sa = p->mode;
        rec->v18 = la;
        rec->f2C = sa;
    }
    {
        long lb = p->v840;
        s32 sb = p->type;
        rec->v20 = lb;
        rec->f30 = sb;
    }
    rec->f34 = p->f14C;
    rec->f38 = p->f198;
    rec->f3C = p->f188;
    rec->f40 = p->f194;
    rec->f44 = p->f19C;
    rec->f48 = p->f1A0;
    rec->f4C = p->f1A4;
    rec->f50 = p->f1A8;
    rec->f54 = p->f1AC;
    rec->f58 = p->f1B0;
    rec->f5C = p->f158;
    rec->f60 = p->f15C;
    return ret;
}
