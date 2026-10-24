/* compiler: ee-gcc-2.9 */
#include "types.h"

/* Cross-match: vetusmagnus/rac3-uya-decomp at fc118a0b7442665a2b181055dc352ce5d117c41b.
 * src/boot_elf/core/1301D8.c, func_00131908.
 * See config/cross_project_matches.json for per-image address mappings. */
typedef struct {
    u8 pad0[0x12C];
    s32 x12C;
    u8 pad1[0x828 - 0x130];
    s32 x828;
    u32 x82C;
    u8 pad2[0x848 - 0x830];
    s32 x848;
    s32 x84C;
} S_131908;

extern void func_008F8908(S_131908 *);
extern u64 func_008F8578(S_131908 *);
extern s32 func_008F86F8(S_131908 *, s32);

#define IPU_CMD_131908 ((volatile u32 *)0x10002000)
#define IPU_BP_131908  ((volatile u32 *)0x10002020)
#define IPU_TOP_131908 ((volatile s64 *)0x10002030)

static __inline__ void cmd_131908(S_131908 *p, u32 cmd) {
    *IPU_CMD_131908 = cmd;
    p->x82C = cmd & 0xF0000000;
    if (p->x82C == 0x20000000 || p->x82C == 0x30000000 || p->x82C == 0x40000000) {
        p->x828 = 0;
    } else {
        p->x828 = 1;
    }
}

static __inline__ s16 vdec_131908(S_131908 *p, u32 cmd) {
    u64 r;
    u32 bp;
    s64 top;
    cmd_131908(p, cmd);
    r = func_008F8578(p);
    bp = *IPU_BP_131908;
    top = *IPU_TOP_131908;
    p->x848 = top;
    if (top < 0) {
        p->x84C = -(bp & 0x1F) & 0x1F;
    } else {
        p->x84C = 32;
    }
    p->x12C = (s32)r == 0;
    return r;
}

static __inline__ s16 vdecw_131908(S_131908 *p, s32 tbl) {
    return vdec_131908(p, 0x30000000 | (tbl << 26));
}

static __inline__ void dmv_131908(s32 *pred, s32 r_size, s32 motion_code, s32 motion_residual, s32 full_pel_vector) {
    s32 lim, vec;
    lim = 16 << r_size;
    vec = full_pel_vector ? (*pred >> 1) : (*pred);
    if (motion_code > 0) {
        vec += ((motion_code - 1) << r_size) + motion_residual + 1;
        if (vec >= lim) vec -= lim + lim;
    } else if (motion_code < 0) {
        vec -= ((-motion_code - 1) << r_size) + motion_residual + 1;
        if (vec < -lim) vec += lim + lim;
    }
    *pred = full_pel_vector ? (vec << 1) : vec;
}

void func_008F7778(S_131908 *p, s32 *PMV, s32 *dmvector, s32 h_r_size, s32 v_r_size, s32 dmv, s32 mvscale, s32 full_pel_vector) {
    s32 motion_code, motion_residual;

    func_008F8908(p);
    motion_code = vdecw_131908(p, 2);
    motion_residual = (h_r_size != 0 && motion_code != 0) ? func_008F86F8(p, h_r_size) : 0;
    dmv_131908(&PMV[0], h_r_size, motion_code, motion_residual, full_pel_vector);
    if (dmv) {
        func_008F8908(p);
        dmvector[0] = vdecw_131908(p, 3);
    }
    func_008F8908(p);
    motion_code = vdecw_131908(p, 2);
    motion_residual = (v_r_size != 0 && motion_code != 0) ? func_008F86F8(p, v_r_size) : 0;
    if (mvscale) PMV[1] >>= 1;
    dmv_131908(&PMV[1], v_r_size, motion_code, motion_residual, full_pel_vector);
    if (mvscale) PMV[1] <<= 1;
    if (dmv) {
        func_008F8908(p);
        dmvector[1] = vdecw_131908(p, 3);
    }
}
