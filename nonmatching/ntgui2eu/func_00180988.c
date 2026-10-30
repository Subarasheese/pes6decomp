/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018C748(void *);                      /* extern */
extern M2C_UNK (*D_005C1450)();

void func_00180988(void *arg0) {
    D_005C1450();
    if (M2C_FIELD(arg0, s32 *, 0x5EF8) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x8C0) + 0x910));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EE8) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x740) + 0x1A90));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EEC) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x740) + 0x2910));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EF0) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x740) + 0x3790));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EF4) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x740) + 0x4610));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5ED4) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x140) + 0x5490));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5ED8) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x140) + 0x5710));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EDC) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x140) + 0x5990));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5EE0) != 0) {
        func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x140) + 0x5C10));
    }
}
