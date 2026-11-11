/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct PL {
    u8 f0;
    u8 pad1[3];
    struct PL *f4;
    u8 pad8[0x14 - 8 + 2];
    u8 f16;
    u8 pad17;
    s16 f18;
    u8 pad1a[0xC];
    u16 f26;
    u16 f28;
    u8 pad2a[0x240 - 0x2A];
} PL;
typedef struct { u8 pad[0x2C]; u8 f2c; } PLB;

M2C_UNK func_009832C0(void *, M2C_UNK);          /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00A0C770(void *, M2C_UNK);              /* extern */
s32 func_00BF7550(void *);                       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CBCDE2[];

void func_00BFE750(void) {
    PL *p;
    s32 i;
    u8 t;

    p = (PL *)Pes6MatchPlayers;
    i = 0;
    do {
        if (((PLB *)p->f4)->f2c != 0) {
            if ((p->f0 == 0) && (p->f16 != 0xE1)) {
                p->f16 = 0xE1;
                p->f18 = 0xD;
            } else {
                if (func_00BF7550(p) != 0) {
                    if ((func_009B3070(p->f26, p->f28) & 0xFFFF) < 0x4001) {
                        if (func_00A0C770(p, 0x300) != 0) {
                            goto block_8;
                        }
                        goto block_11;
                    }
                    goto block_8;
                }
block_8:
                t = p->f16;
                if (t != 0xA3) {
                    if (t == 0x82) {
                        goto block_11;
                    }
                } else {
block_11:
                    if (p->f0 == (*(u8 *)D_00CBCDE2)) {
                        func_009832C0(p, 0x37);
                        p->f16 = 0x32;
                        p->f18 = 0;
                    } else {
                        func_009832C0(p, 0x37);
                        p->f16 = 0x48;
                        p->f18 = 0;
                    }
                }
            }
        }
        i += 1;
        p += 1;
    } while (i < 0x17);
}
