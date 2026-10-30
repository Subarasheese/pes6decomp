/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
s32 func_009E62D0(s16, s16);                        /* extern */
M2C_UNK func_00B00970(void *, s32);                 /* extern */
M2C_UNK func_00B74ED0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00B75580(void *, M2C_UNK);             /* extern */
extern f32 *D_003E74CC;
extern char D_00591BE4[];
extern char D_00591DB4[];
extern char D_00591E14[];
extern void *D_00CB3300;
extern char D_00CBBE00[];

void func_00B765A0(void **arg0) {
    void *temp_a0;

    func_00207BE0(M2C_FIELD(*arg0, void **, 4));
    func_00B00970(*arg0, (s32) (1024.0f * *D_003E74CC));
    switch ((*(u8 *)D_00CBBE00)) {                           /* irregular */
    case 0x1:
        if ((M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30) == 0) || ((u32) ((*(u8 *)D_00591BE4) * 2) < (u32) (*(u32 *)D_00591E14))) {
            if (func_009E62D0(M2C_FIELD(D_00CB3300, s16 *, 0xC), M2C_FIELD(D_00CB3300, s16 *, 0x300)) != 0) {
                func_00B75580(*arg0, 1);
                (*(s8 *)D_00591DB4) = 0;
            } else {
                func_00B75580(*arg0, 0);
            }
            return;
        }
        if (((*(u8 *)D_00CBBE00) != 0) && (((*(u8 *)D_00CBBE00) != 0xFF) || ((u32) ((*(u8 *)D_00591BE4) * 6) >= (u32) (*(u32 *)D_00591E14)))) {
        default:
            temp_a0 = *arg0;
            if (M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30) == 0) {
                M2C_FIELD(temp_a0, s32 *, 0x1C) = 0;
            }
            return;
        }
    case 0x0:
        if (func_009E62D0(M2C_FIELD(D_00CB3300, s16 *, 0xC), M2C_FIELD(D_00CB3300, s16 *, 0x300)) == 0) {
            func_00B74ED0(*arg0, 0);
            return;
        }
        func_00B74ED0(*arg0, 1);
        return;
    }
}
