/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0084A5A0(void);
extern s32 func_008481D0(void);
extern u8 func_0084CDD0(s32, s32, void *);
extern s32 func_0081D300(s32);
extern s32 func_0081D240(s32);
M2C_UNK func_0084EE40(M2C_UNK);                     /* extern */
M2C_UNK func_0087D490();                            /* extern */
s32 func_00B23DB0();                                /* extern */
extern char D_0088A908[];
extern char D_008B10B0[];
extern char D_008B10B8[];
extern char D_008B1468[];
extern char D_008B14CC[];
extern char D_008B14CD[];
extern char D_008B14D4[];
extern char D_008B14E1[];
extern char D_008B14E4[];
extern char D_008B14E5[];
extern char D_008B14E8[];

void func_00809E30(void *arg0) {
    s32 temp_a5;
    s32 temp_t0;

    (*(s8 *)D_008B14E8) = 0;
    if (func_008481D0() != 0) {
        (*(s32 *)D_008B10B0) = 0;
        (*(s32 *)D_008B10B8) = 0;
    }
    func_0084EE40(1);
    func_0084A5A0();
    func_0081D300(0);
    func_0081D240(0);
    if (func_00B23DB0() != 0) {
        func_0087D490();
    }
    temp_a5 = 0 & 1;
    (*(s8 *)D_008B1468) = 0;
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~1) | 1;
    temp_t0 = temp_a5 * 4;
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~8) | (temp_a5 * 8);
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~4) | temp_t0;
    (*(u8 *)D_008B14CD) = ((*(u8 *)D_008B14CD) & ~4) | temp_t0;
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~0x40) | (temp_a5 << 6);
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~0x80) | (temp_a5 << 7);
    (*(u8 *)D_008B14CC) = ((*(u8 *)D_008B14CC) & ~2) | 2;
    func_0084CDD0(0, -1, ((void *)D_008B14E4));
    func_0084CDD0(0, -1, ((void *)D_008B14E5));
    (*(s8 *)D_008B14E1) = 0;
    (*(s32 *)D_008B14D4) = (*(s32 *)D_0088A908);
    M2C_FIELD(arg0, s8 *, 3) = 1;
}
