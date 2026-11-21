/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    void *field_0;
    u8 pad_4[0x40];
    void *field_44;
} Fields_arg0;

s32 func_001A5FF0(void *, void *);
s32 func_001C47E0(void *, void *, s32);
s32 func_001CDAD0(void *);
extern s32 (*D_003E9898)(u8);

void func_001A5F80(Fields_arg0 *arg0) {
    s8 *entry;
    s8 *entry2;
    s8 *entry3;

    entry = arg0->field_44;
    func_001C47E0(entry, entry + 0x20, M2C_FIELD(entry, s32 *, 4));
    entry3 = arg0->field_44;
    entry2 = arg0->field_0;
    func_001CDAD0(entry3);
    func_001A5FF0(entry2, entry3);
    M2C_FIELD(entry2, void **, 8) = entry3;
    if (D_003E9898 != NULL) {
        D_003E9898(M2C_FIELD(entry2, u8 *, 0));
    }
}
