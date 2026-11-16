/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00520090[];
extern char D_005200B0[];
extern char D_005200C0[];
extern char D_005200C4[];
extern char D_005200C8[];
extern char D_005200CC[];

void func_001892C0(void) {
    s32 **tbl;
    s32 *src;
    u8 *out;
    s32 i;
    s32 j;
    s32 *ent;
    u8 *p;
    u8 acc;

    tbl = (s32 **)D_005200C0;
    out = (u8 *)D_005200B0;
    src = *(s32 **)D_00520090;
    *(s32 *)D_005200C4 = src[0];
    *(s32 *)D_005200CC = src[1];
    *(s32 *)D_005200C8 = src[2];
    *(s32 *)D_005200C0 = src[3];
    i = 0;
    do {
        ent = tbl[i];
        acc = 0;
        j = 0;
        p = (u8 *)ent + 4;
        if (*ent > 0) {
            do {
                j++;
                *(s16 *)(p + 0x3E) = 0;
                acc = (acc | p[0x3C]) & 0xFF;
                p += 0x40;
            } while (j < *ent);
        }
        out[i] = acc;
        i++;
    } while (i < 4);
}
