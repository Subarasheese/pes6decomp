/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/0013C8D8.c.
 * See THIRD_PARTY.md for provenance and terms. */
#include "types.h"

typedef struct {
    u8 *base;
    u8 pad04[0xC];
    s32 width;
} Ref_13C8D8;
typedef struct {
    u8 pad000[0x130];
    s32 second_field;
    u8 pad134[0x160 - 0x134];
    s32 picture_coding_type;
    u8 pad164[0x184 - 0x164];
    s32 picture_structure;
    u8 pad188[0x1C8 - 0x188];
    Ref_13C8D8 *ref_images[12];
    u8 pad1F8[0x5A0 - 0x1F8];
    struct {
        u8 pad0[0x12C];
        s32 n;
        u8 pad130[0x10];
    } mc[2];
    s32 cur;
} Dec_13C8D8;

extern void func_008F6B60(Dec_13C8D8 *d, Ref_13C8D8 *ref, s32 sfield, s32 dfield, s32 yofs, s32 h,
                          s32 bx, s32 by, s32 dx, s32 dy, s32 fieldpred, s32 avg);
extern void func_008F6080(Dec_13C8D8 *d, s32 DMV[][2], s32 *dmvector, s32 mvx, s32 mvy);
extern void func_00900558(Dec_13C8D8 *d, char *fmt, s32 code);
extern char D_00901C80[];
extern char D_00901CA0[];
extern char D_00901CC0[];

/* from rac2-decomp's func_001296A0 */
void func_008F6208(Dec_13C8D8 *d, s32 bx, s32 by, s32 mb_type, s32 motion_type, s32 pmv[2][2][2],
                   s32 mvfs[2][2], s32 *dmvector) {
    s32 dmv[2][2];
    Ref_13C8D8 *refs[2][2];
    s32 one = 1;
    s32 avg;
    s32 currentfield;
    s32 same = one;
    avg = 0;
    d->mc[d->cur].n = 0;
    if ((mb_type & 8) || d->picture_coding_type == 2) {
        if (d->picture_structure == 3) {
            if (motion_type == 2 || !(mb_type & 8)) {
                func_008F6B60(d, d->ref_images[0], 0, 0, 0, 16, bx, by, pmv[0][0][0], pmv[0][0][1],
                              0, 0);
            } else if (motion_type == same) {
                func_008F6B60(d, d->ref_images[0], mvfs[0][0], 0, 0, 8, bx, by, pmv[0][0][0],
                              pmv[0][0][1] >> 1, same, 0);
                func_008F6B60(d, d->ref_images[0], mvfs[1][0], 1, 0, 8, bx, by, pmv[1][0][0],
                              pmv[1][0][1] >> 1, same, 0);
            } else if (motion_type == 3) {
                func_008F6080(d, dmv, dmvector, pmv[0][0][0], pmv[0][0][1] >> 1);
                func_008F6B60(d, d->ref_images[0], 0, 0, 0, 8, bx, by, pmv[0][0][0],
                              pmv[0][0][1] >> 1, same, 0);
                func_008F6B60(d, d->ref_images[0], 1, 0, 0, 8, bx, by, dmv[0][0], dmv[0][1], same,
                              one);
                func_008F6B60(d, d->ref_images[0], 1, 1, 0, 8, bx, by, pmv[0][0][0],
                              pmv[0][0][1] >> 1, same, 0);
                func_008F6B60(d, d->ref_images[0], 0, 1, 0, 8, bx, by, dmv[1][0], dmv[1][1], same,
                              one);
            } else {
                func_00900558(d, D_00901C80, motion_type);
            }
        } else {
            currentfield = d->picture_structure == 2;
            refs[0][0] = d->ref_images[4];
            refs[0][1] = d->ref_images[8];
            refs[1][0] = d->ref_images[5];
            refs[1][1] = d->ref_images[9];
            one = 2;
            same = 0;
            if (d->picture_coding_type == one && d->second_field) {
                same = currentfield != mvfs[0][0];
            }
            if (motion_type == 1 || !(mb_type & 8)) {
                func_008F6B60(d, refs[same][mvfs[0][0]], 0, 0, 0, 16, bx, by, pmv[0][0][0],
                              pmv[0][0][1], 0, 0);
            } else if (motion_type == 2) {
                func_008F6B60(d, refs[same][mvfs[0][0]], 0, 0, 0, 8, bx, by, pmv[0][0][0],
                              pmv[0][0][1], 0, 0);
                same = d->picture_coding_type == motion_type && d->second_field &&
                       currentfield != mvfs[1][0];
                func_008F6B60(d, refs[same][mvfs[1][0]], 0, 0, 8, 8, bx, by, pmv[1][0][0],
                              pmv[1][0][1], 0, 0);
            } else if (motion_type == 3) {
                same = d->second_field ? motion_type - 2 : 0;
                func_008F6080(d, dmv, dmvector, pmv[0][0][0], pmv[0][0][1]);
                func_008F6B60(d, refs[0][currentfield], 0, 0, 0, 16, bx, by, pmv[0][0][0],
                              pmv[0][0][1], 0, 0);
                func_008F6B60(d, refs[same][!currentfield], 0, 0, 0, 16, bx, by, dmv[0][0],
                              dmv[0][1], 0, 1);
            } else {
                func_00900558(d, D_00901CA0, motion_type);
            }
        }
        avg = 1;
    }
    if (mb_type & 4) {
        if (d->picture_structure == 3) {
            same = 1;
            if (motion_type == 2) {
                func_008F6B60(d, d->ref_images[1], 0, 0, 0, 16, bx, by, pmv[0][1][0], pmv[0][1][1],
                              0, avg);
            } else {
                func_008F6B60(d, d->ref_images[1], mvfs[0][1], 0, 0, 8, bx, by, pmv[0][1][0],
                              pmv[0][1][1] >> 1, same, avg);
                func_008F6B60(d, d->ref_images[1], mvfs[1][1], 1, 0, 8, bx, by, pmv[1][1][0],
                              pmv[1][1][1] >> 1, same, avg);
            }
        } else if (motion_type == 1) {
            func_008F6B60(d, mvfs[0][1] ? d->ref_images[9] : d->ref_images[5], 0, 0, 0, 16, bx, by,
                          pmv[0][1][0], pmv[0][1][1], 0, avg);
        } else if (motion_type == 2) {
            func_008F6B60(d, mvfs[0][1] ? d->ref_images[9] : d->ref_images[5], 0, 0, 0, 8, bx, by,
                          pmv[0][1][0], pmv[0][1][1], 0, avg);
            func_008F6B60(d, mvfs[1][1] ? d->ref_images[9] : d->ref_images[5], 0, 0, 8, 8, bx, by,
                          pmv[1][1][0], pmv[1][1][1], 0, avg);
        } else {
            func_00900558(d, D_00901CC0, motion_type);
        }
    }
}
