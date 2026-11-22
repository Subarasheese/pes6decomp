/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s8 D_00CBCD8D[];

extern s8 *func_00B2A420(u32);
extern void func_00B364D0(u32);
extern void func_00B364E0(void);
extern void func_00B37240(void);
extern void func_00B82670(void);
extern s32 func_00BBB8C0(s32);

extern char D_00CBCAD1[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B89460(void *arg0) {
    s32 value;
    s8 *entry;
    u16 value2;
    void *entry2;
    void *entry3;

    func_00B37240();
    func_00B82670();
    (*(s8 *)D_00CBCAD1) = 4;
    func_00B364E0();
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x4E) = (s8)(func_00BBB8C0(0x88) % 2);
    entry =
        func_00B2A420((((s16)((s64)M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x13))) * 0xB) + 2);
    value = 0;
    do {
        entry3 = M2C_FIELD(entry, void **, 0);
        if ((M2C_FIELD(entry3, u8 *, 0x16) == 0x33) &&
            (M2C_FIELD(M2C_FIELD(entry3, void **, 4), u8 *, 0x2C) != 0)) {
            value2 = M2C_FIELD(entry3, u16 *, 0x18);
            if ((value2 != 0x7F) && (value2 != 0x80)) {
                entry2 = M2C_FIELD(entry, void **, 4);
                if (M2C_FIELD(entry2, u8 *, 0x51) == 0) {
                    if (M2C_FIELD(entry3, u8 *, 0x12) ==
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0x12)) {
                        M2C_FIELD(entry3, s16 *, 0x1A) = 0xF;
                    }
                } else {
                    M2C_FIELD(entry2, u8 *, 0x51) = 0xFFU;
                    M2C_FIELD(M2C_FIELD(entry, void **, 0), u16 *, 0x18) = 0x7DU;
                    *D_00CBCD8D = 0;
                }
            }
        }
        value += 1;
        entry += 8;
    } while (value < 0xA);
    (*(f32 *)D_00CBCB00) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    func_00B364D0(1U);
}
