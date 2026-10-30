/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6C50(void *);
extern void func_00153FA0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0058D200[];
extern void *D_0058D208;
extern void *D_0058D20C;
extern char D_0058D218[];
extern char D_0058D230[];
extern char D_0058D248[];

void func_0025F240(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    void *temp_a0;

    var_s1 = 0;
    var_s0 = ((void *)D_0058D200);
    do {
        temp_a0 = M2C_FIELD(var_s0, void **, 4);
        if (temp_a0 != NULL) {
            if (M2C_FIELD(var_s0, u8 *, 0x15) != 0) {

            } else {
                func_001E6C50(temp_a0);
            }
            M2C_FIELD(var_s0, void **, 4) = NULL;
        }
        var_s1 += 1;
        var_s0 += 0x18;
    } while (var_s1 < 5);
    func_00153FA0(D_0058D208);
    func_00153FA0(D_0058D20C);
    func_00153FA0(M2C_FIELD(((void *)D_0058D218), void **, 8));
    func_00153FA0(M2C_FIELD(((void *)D_0058D218), void **, 0xC));
    func_00153FA0(M2C_FIELD(((void *)D_0058D230), void **, 0xC));
    func_00153FA0(M2C_FIELD(((void *)D_0058D248), void **, 8));
    func_00153FA0(M2C_FIELD(((void *)D_0058D248), void **, 0xC));
    func_001C48E8(((void *)D_0058D200), 0, 0x7C);
}
