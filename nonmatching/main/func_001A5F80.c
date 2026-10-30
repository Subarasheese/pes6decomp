/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A5FF0(void *, void *);              /* extern */
M2C_UNK func_001C47E0(void *, void *, s32);         /* extern */
M2C_UNK func_001CDAD0(void *);                      /* extern */
extern M2C_UNK (*D_003E9898)(u8);

void func_001A5F80(void *arg0) {
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;

    temp_a0 = M2C_FIELD(arg0, void **, 0x44);
    func_001C47E0(temp_a0, temp_a0 + 0x20, M2C_FIELD(temp_a0, s32 *, 4));
    temp_s1 = M2C_FIELD(arg0, void **, 0x44);
    temp_s0 = M2C_FIELD(arg0, void **, 0);
    func_001CDAD0(temp_s1);
    func_001A5FF0(temp_s0, temp_s1);
    M2C_FIELD(temp_s0, void **, 8) = temp_s1;
    if (D_003E9898 != NULL) {
        D_003E9898(M2C_FIELD(temp_s0, u8 *, 0));
    }
}
