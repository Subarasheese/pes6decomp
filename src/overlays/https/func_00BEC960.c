/* compiler: ee-gcc-2.96-G0 */
#include "types.h"
typedef struct {
    u8 data[32];
} CryptoInput;
typedef struct {
    u8 data[16];
} CryptoScratch;
extern void func_00BEC730(CryptoInput *, const void *), func_00BEC770(CryptoInput *);
extern s32 func_00BEAEF8(void *, void *, void *, void *, CryptoInput *, CryptoScratch *, void *,
                         void *);
s32 func_00BEC960(void *out, void *key, const void *input, void *args, void *context) {
    CryptoInput prepared;
    CryptoScratch scratch;
    s32 status;
    func_00BEC730(&prepared, input);
    status = func_00BEAEF8(out, key, 0, 0, &prepared, &scratch, args, context);
    func_00BEC770(&prepared);
    return status;
}
