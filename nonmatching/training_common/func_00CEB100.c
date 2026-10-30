/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002EC3C0(s32);                         /* extern */
M2C_UNK func_002EC3D0(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_002ED380(M2C_UNK, M2C_UNK, f32 *);         /* extern */
M2C_UNK func_00CE3BF0(s32);                         /* extern */
M2C_UNK func_00CE4030(s32, s32, M2C_UNK, f32 *, M2C_UNK); /* extern */
s32 func_00CE4EB0();                                /* extern */
M2C_UNK func_00CE9E80(M2C_UNK, s32);                /* extern */
M2C_UNK func_00CE9EC0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00CE9F00(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00CEB020();                                /* extern */
M2C_UNK func_00CEB320();                            /* extern */
extern s32 D_003E7E1C;
extern char D_00CF9CE0[];
extern char D_00CF9CE4[];
extern char D_00CF9CE8[];
extern char D_00CF9CEC[];
extern char D_00CF9CF0[];
extern char D_00CF9CF4[];
extern char D_00CFFCFC[];
extern char D_00CFFD00[];
extern M2C_UNK func_00CEB530;
extern M2C_UNK func_00CEB560;
extern M2C_UNK func_00CEB570;
extern M2C_UNK func_00CEB660;

void func_00CEB100(void) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp28;
    f32 sp2C;
    s32 temp_v0;

    sp10 = (*(f32 *)D_00CF9CE0);
    sp14 = (*(f32 *)D_00CF9CE4);
    sp18 = (*(f32 *)D_00CF9CE8);
    sp1C = (*(f32 *)D_00CF9CEC);
    sp28 = (*(f32 *)D_00CF9CF0);
    sp2C = (*(f32 *)D_00CF9CF4);
    func_00CE4030(func_00CEB020(), D_003E7E1C, 2, &sp28, 0);
    func_00CE9F00(2, 0xE, &func_00CEB560);
    func_00CE9F00(2, 0, &func_00CEB660);
    func_00CE9F00(2, 1, &func_00CEB570);
    func_00CE9F00(2, 0xA, &func_00CEB530);
    func_00CE9F00(2, 0xB, &func_00CEB530);
    func_00CE9E80(0xE, func_00CE4EB0());
    func_00CE9E80(0, func_00CE4EB0());
    func_00CE9E80(1, func_00CE4EB0());
    func_00CE9EC0(0, func_00CE4EB0());
    func_00CE9EC0(1, func_00CE4EB0());
    func_00CE9EC0(6, func_00CE4EB0());
    func_00CE9EC0(7, func_00CE4EB0());
    func_00CE9EC0(4, func_00CE4EB0());
    func_00CE9EC0(5, func_00CE4EB0());
    func_00CE9F00(1, 8, NULL);
    func_00CE9F00(1, 9, NULL);
    if ((*(s32 *)D_00CFFCFC) == 0) {
        temp_v0 = func_002ED380(2, 0, &sp10);
        (*(s32 *)D_00CFFCFC) = temp_v0;
        func_002EC3D0(temp_v0, 1, 0);
        func_00CEB320();
        func_002EC3C0((*(s32 *)D_00CFFCFC));
    }
    func_00CE3BF0(D_003E7E1C + 8);
    (*(s32 *)D_00CFFD00) = 0;
}
