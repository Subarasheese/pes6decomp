/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
extern u8 func_00BF6270(void);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, void *, u16, void *, M2C_UNK, void *); /* extern */
M2C_UNK func_00B2A420(u8);                          /* extern */
M2C_UNK func_00B846A0(void *);                      /* extern */
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

void func_00B87540(void *arg0) {
    M2C_UNK var_a1;
    u16 temp_a4;
    void *temp_a3;
    void *temp_a5;
    void *temp_a7;
    void *temp_v0;
    void *temp_v1;

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
        temp_a7 = M2C_FIELD(arg0, void **, 0);
        (*(f32 *)D_00CBCB00) = M2C_FIELD(temp_a7, f32 *, 0xE0);
        temp_a5 = M2C_FIELD(arg0, void **, 0);
        (*(f32 *)D_00CBCB04) = M2C_FIELD(temp_a5, f32 *, 0xE8);
        temp_a4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(u16 *)D_00CBCAFE) = temp_a4;
        temp_a3 = M2C_FIELD(arg0, void **, 0);
        (*(f32 *)D_00CBCAF4) = M2C_FIELD(temp_a3, f32 *, 0xE0);
        (*(f32 *)D_00CBCAF8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
        (*(u16 *)D_00CBCAFC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
        (*(s8 *)D_00CBCAD2) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0;
        switch ((*(u8 *)D_00CBCAD3)) {                       /* irregular */
        case 4:
            var_a1 = 0x59A;
            break;
        case 3:
            var_a1 = 0x59E;
            break;
        case 2:
            var_a1 = 0x59C;
            break;
        default:
            var_a1 = 0x2ED;
            break;
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCD8E);
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_v1, u16 *, 0x26) = (u16) M2C_FIELD(temp_v1, u16 *, 0x28);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = 0;
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0, temp_a3, temp_a4, temp_a5, 4, temp_a7);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 8);
        func_00B846A0(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x17;
    }
}
