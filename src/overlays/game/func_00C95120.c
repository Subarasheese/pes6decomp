/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x1C];
    void *field_1C;
    void *field_20;
} Fields_temp_s0;

extern void *func_00256140(void);
extern s32 SD_call(s32);
extern void func_002D33D0(s32, s32);
extern s32 func_002D4870(s32);
extern void func_002D4970(s32);

void func_00C95120(void) {
    void *entry;
    Fields_temp_s0 *value;
    void *entry2;
    void *entry3;

    value = func_00256140();
    SD_call(0x82000117);
    func_002D4870(0);
    func_002D4970(1);
    func_002D33D0(3, 0x3E8);
    entry2 = value->field_1C;
    entry3 = M2C_FIELD(entry2, void **, 0x14);
    if (entry3 != entry2) {
        do {
            entry = M2C_FIELD(entry3, void **, 0x14);
            M2C_FIELD(M2C_FIELD(entry3, void **, 0x10), void **, 0x14) = entry;
            M2C_FIELD(M2C_FIELD(entry3, void **, 0x14), void **, 0x10) =
                (void *)M2C_FIELD(entry3, void **, 0x10);
            M2C_FIELD(entry3, void **, 0x14) = (void *)M2C_FIELD(value->field_20, void **, 0x14);
            M2C_FIELD(value->field_20, void **, 0x14) = entry3;
            M2C_FIELD(entry3, void **, 0x10) = NULL;
            entry3 = entry;
        } while (entry != value->field_1C);
    }
}
