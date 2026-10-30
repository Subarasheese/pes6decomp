/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern u8 func_00BF6270(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, u16 *, f32 *, f32 *, M2C_UNK, u8); /* extern */
M2C_UNK func_00B2A420(u8);                          /* extern */
M2C_UNK func_00B84580(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00BD3CF0(void *, f32, f32);            /* extern */
extern char D_00CBCAD2[];
extern char D_00CBCAD3[];
extern char D_00CBCAF4[];
extern char D_00CBCAF8[];
extern char D_00CBCAFC[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];
extern char D_00CBCD81[];
extern char D_00CBCD8E[];

void func_00B87E60(void *arg0) {
    M2C_UNK var_a1;
    void *temp_v0;

    func_00B2A420(func_00BF6270());
    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if ((*(u8 *)D_00CBCD81) == 1) {
        (*(u8 *)D_00CBCD81) = 2;
        func_00B364D0(2U);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
        (*(f32 *)D_00CBCB00) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
        (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
        (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(f32 *)D_00CBCAF4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
        (*(f32 *)D_00CBCAF8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
        (*(u16 *)D_00CBCAFC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(s8 *)D_00CBCAD2) = 0;
        switch ((*(u8 *)D_00CBCAD3)) {                       /* irregular */
        case 3:
            var_a1 = 0x4FD;
            break;
        case 4:
            var_a1 = 0x4FC;
            break;
        default:
            var_a1 = 0x2ED;
            break;
        case 2:
            var_a1 = 0x4FF;
            break;
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCD8E);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0, ((void *)D_00CBCAFE), ((void *)D_00CBCB04), ((void *)D_00CBCB00), 2, (*(u8 *)D_00CBCAD3));
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
        func_00B84580(arg0, 0, (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), void **, 4), u16 *, 8) * 2) & 0xFFFF);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x11;
    }
}
