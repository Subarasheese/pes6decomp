/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef s32 (*OperationCallback)(void *, void *, u64 *, s32, void *, s32);
extern s32 func_00BB8B88(void *, void *, u64 *, s32, void *, s32);
extern void func_00BB8DA8(void *), func_00BB8D78(void *), func_00BB9120(void *),
    func_00BB9098(void *);
extern void func_00BB8DD8(void *, OperationCallback);
extern s32 func_00BB8DE8(void *, void *), func_00BB9F50(void *, void *),
    func_00BB9180(void *, void *, s32 *, s32), func_00BB91F8(void *, void *, s32, s32);
s32 func_00BBA190(u8 *supplied, void *options, void *operation, void *buffer, s32 *length,
                  s32 mode) {
    int result;
    u8 *context;
    u8 local[240];
    if (supplied == 0) {
        func_00BB8D78(local);
        func_00BB8DD8(local, func_00BB8B88);
        context = local;
    } else {
        func_00BB9120(supplied);
        context = supplied;
    }
    if (((options == 0) || ((result = func_00BB8DE8(context, options), result == 0))) &&
        ((result = func_00BB9F50(context, operation), result == 0))) {
        result = func_00BB9180(context, buffer, length, mode);
    }
    if (supplied == 0) {
        func_00BB9098(local);
    }
    return result;
}
