/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00B364A0(void);
extern s32 func_00BF6270(void);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK, u8 *, u8, u8); /* extern */
void *func_00B2A420(s32);
s32 func_00B397F0(void *);
s32 func_00B39A20(void *);
s32 func_00B39C00(void *);
M2C_UNK func_00B39ED0(void *);
s32 func_00B8AA90(void *);
M2C_UNK func_00BD3BE0(void *, M2C_UNK);
extern char D_00CBCD83[];
extern char D_00CBCD8D[];

void func_00B39560(void *arg0) {
    u8 *p;
    u8 idx;
    u8 val;
    u8 temp_s2;
    u16 temp_s0;
    u16 cur;
    void *temp_s0_p;

    temp_s0_p = func_00B2A420(func_00BF6270());
    temp_s2 = M2C_FIELD(M2C_FIELD(temp_s0_p, void **, 4), u8 *, 0x54);
    temp_s0 = func_00B39C00(arg0) & 0xFFFF;
    if (temp_s2 != 0) {
        if (func_00B8AA90(arg0) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x1A);
            return;
        }
    } else if ((func_00B364A0() & 0xFF) == 6 && func_00B397F0(arg0) != 0) {
        goto store;
    }
    cur = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18);
    if (cur != 0xC) {
        if (cur != temp_s0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = temp_s0;
            cur = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18);
            if (cur == 10) {
                func_00BD3BE0(arg0, 1);
            } else if (cur == 9) {
                func_00BD3BE0(arg0, 2);
            } else if (cur == 8) {
                func_00BD3BE0(arg0, 3);
            } else if (cur == 7) {
                func_00BD3BE0(arg0, 4);
            }
        }
        return;
    }
    if ((func_00B364A0() & 0xFF) != 6 && func_00B39A20(arg0) != 0) {
store:
        idx = *(u8 *)D_00CBCD8D;
        val = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 0);
        p = (u8 *)D_00CBCD83 + idx;
        *p = val;
        *(u8 *)D_00CBCD8D += 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x51) = *(u8 *)D_00CBCD8D;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x1A);
        func_001C48E8((u8 *)M2C_FIELD(arg0, void **, 4) + 0x44, 0, 8, p, idx, val);
        return;
    }
    func_00B39ED0(arg0);
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0xC) == 1) {
        func_00BD3BE0(arg0, 2);
    }
}
