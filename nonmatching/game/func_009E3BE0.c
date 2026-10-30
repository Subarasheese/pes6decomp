/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001A5F20(s32);
extern s32 func_00208210(s32);
extern void Pes6Ball_Update(void);
extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
extern int func_0029AC20(void);
M2C_UNK func_0093F720();                            /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00B72050(u32, u8);                     /* extern */
M2C_UNK func_00B72500(u8, u32);                     /* extern */
M2C_UNK func_00B72E80(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00B76710();                            /* extern */
s32 func_00BA91C0();                                /* extern */
M2C_UNK func_00BA92A0(u8);                          /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00CBBDF3[];
extern char D_00CBBE00[];
extern char D_00CBBE04[];
extern char D_00CBBE05[];
extern char D_00CBBE07[];
extern char D_00CBBE08[];

void func_009E3BE0(void) {
    func_00B76710();
    if ((*(u8 *)D_00CBBE00) == 1) {
        func_00BA92A0((*(u8 *)D_00CBBE04));
    } else {
        func_00BA92A0((*(u8 *)D_00CBBE05));
    }
    if (func_00BA91C0() & 0x1008) {
        (*(u8 *)D_00CBBDF3) = 1;
    }
    if (func_0029AC20() != 0) {
        return;
    }
    func_00AD0A20();
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x65) = 1;
    Pes6Ball_Update();
    func_0093F720();
    (*(u32 *)D_00591E14) += 1;
    if ((func_002DCA30() != 0) && ((u32) ((*(u8 *)D_00591BE4) * 6) < (u32) (*(u32 *)D_00591E14))) {
        (*(u8 *)D_00CBBDF3) = 1;
    }
    if ((*(u8 *)D_00CBBE07) != 0) {
        if (func_00208210(func_001A5F20(5)) == 0xB3) {
            goto block_14;
        }
        if (func_00208210(func_001A5F20(5)) != 0xB4) {
            if (func_00208210(func_001A5F20(5)) == 0xB5) {
                goto block_14;
            }
        } else {
block_14:
            switch ((*(u8 *)D_00CBBE08)) {                   /* irregular */
            case 0:
                func_00B72E80(3, (*(u8 *)D_00CBBE08));
                break;
            case 1:
                if ((u32) (*(u32 *)D_00591E14) >= (u32) ((*(u8 *)D_00591BE4) * 5)) {
                    func_00B72500((*(u8 *)D_00591BE4), (*(u32 *)D_00591E14));
                }
                break;
            case 2:
                if ((u32) (*(u32 *)D_00591E14) >= (u32) ((*(u8 *)D_00591BE4) * 4)) {
                    func_00B72050((*(u32 *)D_00591E14), (*(u8 *)D_00CBBE08));
                }
                break;
            case 3:
                if ((u32) (*(u32 *)D_00591E14) >= (u32) ((*(u8 *)D_00591BE4) * 3)) {
                    (*(u8 *)D_00CBBDF3) = 1;
                }
                break;
            }
        }
    }
    if ((*(u8 *)D_00CBBDF3) == 0) {

    } else if (func_00152130(1, 0x10) != 0) {
        func_009E1D30(2, 0xB);
    }
}
