/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 func_002371A0(u16);                             /* extern */
s8 func_00371130(u8, u8, u8, u8, u8);               /* extern */
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BB8[];
extern char D_00591BB9[];
extern char D_00591BBB[];
extern char D_00591BBD[];
extern char D_00591BBE[];
extern char D_00591BBF[];
extern char D_00591BC0[];
extern char D_00591BC1[];
extern char D_00591BC2[];
extern char D_00591BC3[];
extern char D_00591BC4[];
extern char D_00591BC5[];
extern char D_00591BC6[];
extern char D_00591BC7[];
extern char D_00591BC8[];
extern char D_00591BC9[];
extern char D_00591BCA[];
extern char D_00591BCB[];
extern char D_00591BCE[];
extern char D_00591BE4[];
extern char D_00591DED[];

void func_0080DE80(void *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = func_002371A0((*(u16 *)D_00591BB0));
    M2C_FIELD(arg0, s16 *, 6) = func_002371A0((*(u16 *)D_00591BB2));
    M2C_FIELD(arg0, u8 *, 8) = (u8) D_003E9E88;
    M2C_FIELD(arg0, u8 *, 9) = (u8) D_003E9E89;
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (*(u8 *)D_00591BB4);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) (*(u8 *)D_00591BB6);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) (*(u8 *)D_00591BB7);
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) (*(u8 *)D_00591BB8);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (*(u8 *)D_00591BB9);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (*(u8 *)D_00591BBB);
    M2C_FIELD(arg0, s8 *, 0x10) = func_00371130((*(u8 *)D_00591BB8), (*(u8 *)D_00591BB7), (*(u8 *)D_00591BB6), (*(u8 *)D_00591BB4), D_003E9E89);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) (*(u8 *)D_00591BBD);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) (*(u8 *)D_00591BBE);
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) (*(u8 *)D_00591BBF);
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) (*(u8 *)D_00591BC0);
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) (*(u8 *)D_00591BC1);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (*(u8 *)D_00591BC2);
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) (*(u8 *)D_00591BC3);
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) (*(u8 *)D_00591BC4);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) (*(u8 *)D_00591BC5);
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) (*(u8 *)D_00591BC6);
    M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (*(u8 *)D_00591BC7);
    M2C_FIELD(arg0, u8 *, 0x1C) = (u8) (*(u8 *)D_00591BC8);
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (*(u8 *)D_00591BC9);
    M2C_FIELD(arg0, u8 *, 0x1E) = (u8) (*(u8 *)D_00591BCA);
    M2C_FIELD(arg0, u8 *, 0x1F) = (u8) (*(u8 *)D_00591BCB);
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) (*(u8 *)D_00591BCE);
    M2C_FIELD(arg0, u8 *, 0x21) = (u8) (*(u8 *)D_00591DED);
    M2C_FIELD(arg0, u8 *, 0x22) = (u8) (*(u8 *)D_00591BE4);
}
