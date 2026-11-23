/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct {
    u32 words[2];
} DecodeInput;
typedef struct {
    u32 words[8];
} DecodeContext;
extern void func_00BF5C98(void *, s32, u32), func_00BE8680(DecodeInput *, void *),
    func_00BEBC28(DecodeContext *), func_00BF5DD0(void *);
extern s32 func_00BEBBD8(DecodeContext *, DecodeInput *), func_00BE8240(s32),
    func_00BEBE48(DecodeContext *, const void *, const void *, void **);
s32 func_00BE85B8(const void *definition, void *reserved, const void *fields, void *input,
                  void **out) {
    DecodeContext state;
    DecodeInput descriptor;
    s32 status;
    func_00BF5C98(&descriptor, 0, sizeof(descriptor));
    func_00BF5C98(&state, 0, sizeof(state));
    func_00BE8680(&descriptor, input);
    status = func_00BE8240(func_00BEBBD8(&state, &descriptor));
    if (!status) {
        status = func_00BE8240(func_00BEBE48(&state, definition, fields, out));
        func_00BEBC28(&state);
    }
    return status;
}
