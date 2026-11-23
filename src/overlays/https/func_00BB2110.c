/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef s32 (*SignatureMethod)(s32, const u8 *, s32, void *, void *, void *);
typedef struct {
    u8 reserved00[0x30];
    SignatureMethod sign, verify;
} SignatureMethods;
extern const SignatureMethods *func_00BAD1A0(void);
extern void func_00BB3380(s32, s32, s32, const char *, s32);
s32 func_00BB2110(s32 type, const u8 *digest, s32 length, void *signature, void *size, void *key) {
    SignatureMethod method = func_00BAD1A0()->sign;
    if (!method) {
        func_00BB3380(10, 105, 14, 0, 0);
        return -1;
    }
    return method(type, digest, length, signature, size, key);
}
