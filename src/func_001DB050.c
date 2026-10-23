/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00103538(s32, s32);
extern s64 func_00138C10(s32, s32);
extern void func_001DB120(s32, void *);
extern void func_001E6310(s32, s32);
extern void func_001E6360(s32, s32, s32);

void func_001DB050(void *object) {
    s32 context;
    void *payload;
    void *node;

    node = M2C_FIELD(object, void **, 0);
    context = M2C_FIELD(M2C_FIELD(object, void **, 0x20), s32 *, 0x1C);
    if (node != NULL) {
        do {
            if ((M2C_FIELD(node, u8 *, 0xDC) != 0) && !(((s32) M2C_FIELD(node, u8 *, 0xDD) >> 1) & 1)) {
                payload = M2C_FIELD(node, void **, 0x14);
                M2C_FIELD(payload, s64 *, 0x20) = func_00138C10(context, M2C_FIELD(M2C_FIELD(M2C_FIELD(payload, void **, 0x18), void **, 8), s32 *, 0xC));
            }
            node = M2C_FIELD(node, void **, 4);
        } while (node != NULL);
        func_00103538(context, 0);
        func_001E6360(context, 1, 1);
        func_001DB120(context, object);
        func_001E6310(context, 1);
    }
}
