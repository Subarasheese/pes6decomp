/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00210E20();                            /* extern */
u8 func_0021EE40(u16, M2C_UNK);                     /* extern */
s32 func_00226710();                                /* extern */
s8 func_00229010(u8);                               /* extern */
u16 func_002290D0(u8);                              /* extern */
void *func_00229460();                              /* extern */
void *func_0022F150();                              /* extern */
s32 func_00236DC0();                                /* extern */
M2C_UNK func_0023EA80();                            /* extern */
M2C_UNK func_00256330();                            /* extern */
M2C_UNK func_00266BA0(u16, u8, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00291980(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002D2E90();                            /* extern */
M2C_UNK func_00935090();                            /* extern */
M2C_UNK func_00935B70();                            /* extern */
M2C_UNK func_00949540();                            /* extern */
extern void *D_003E77B0;
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BBA[];
extern char D_00591BC4[];
extern char D_00591BC5[];

s32 func_0098B700(void) {
    s32 temp_v1;
    u8 temp_s1_2;
    u8 temp_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = func_00229460();
    temp_s0 = func_0022F150();
    if (temp_s1 == NULL) {
        return 0;
    }
    if (temp_s0 == NULL) {
        return 0;
    }
    if (func_00236DC0() == 0) {
        return 0;
    }
    temp_v1 = func_00226710() & 0xFF;
    if ((temp_v1 != 6) && (temp_v1 != 0x1A) && (temp_v1 != 0x18) && (temp_v1 != 0x16) && (temp_v1 != 0x14) && (temp_v1 != 0x12) && (temp_v1 != 0xF) && (temp_v1 != 0xD) && (temp_v1 != 0xB)) {

    } else {
        temp_s2 = M2C_FIELD(temp_s1, u8 *, 0x71);
        temp_s1_2 = M2C_FIELD(temp_s1, u8 *, 0x72);
        (*(u16 *)D_00591BB0) = func_002290D0(temp_s2);
        M2C_FIELD(D_003E77B0, s8 *, 0) = func_00229010(temp_s2);
        (*(u16 *)D_00591BB2) = func_002290D0(temp_s1_2);
        M2C_FIELD(D_003E77B0, s8 *, 0x2D) = func_00229010(temp_s1_2);
        M2C_FIELD(temp_s0, s8 *, 0x12) = 0;
        (*(u8 *)D_00591BB4) = func_0021EE40((*(u16 *)D_00591BB0), 0);
        func_00935B70();
        M2C_FIELD(temp_s0, u8 *, 0x13) = (u8) (*(u8 *)D_00591BB4);
        (*(s8 *)D_00591BB6) = 1;
        (*(s8 *)D_00591BB7) = 0;
    }
    (*(s8 *)D_00591BC4) = 3;
    (*(s8 *)D_00591BC5) = 3;
    func_00291980(0, 0);
    func_00291980(1, 0);
    func_00256330();
    func_00935090();
    D_003E9E88 = 0;
    D_003E9E89 = 0x3F;
    func_00266BA0((*(u16 *)D_00591BB0), D_003E9E88, 0, 0);
    func_00266BA0((*(u16 *)D_00591BB0), D_003E9E88, 1, 0);
    func_00266BA0((*(u16 *)D_00591BB2), D_003E9E89, 0, 1);
    func_00266BA0((*(u16 *)D_00591BB2), D_003E9E89, 1, 1);
    func_0023EA80();
    func_002D2E90();
    func_00949540();
    func_00210E20();
    (*(s8 *)D_00591BBA) = 0;
    return 1;
}
