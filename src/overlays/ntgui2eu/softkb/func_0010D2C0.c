/* compiler: ee-gcc-2.96-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x2a0];
    u8 values[1];
} NtguiValues;
extern void func_001AD620(const char *file, s32 line, const char *test);
extern const char D_005F7F48[], D_005F7F68[];
void func_0010D2C0(NtguiValues *values, s32 index, u8 value) {
    if (!values)
        func_001AD620(D_005F7F48, 298, D_005F7F68);
    values->values[index] = value;
}
