/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct CryptoKey CryptoKey;
extern void *func_00BC0A38(u32 bytes);
extern void func_00BC0A88(void *data);
extern s32 func_00BBF020(CryptoKey *key, s32 mode, u8 *output, u32 *outputLength, u32 capacity,
                         const u8 *input, u32 inputLength, s32 options);
extern int memcmp(const void *, const void *, u32);
s32 func_00BBEF18(CryptoKey *key, s32 unused, const u8 *input, u32 *matches, u32 inputSize,
                  const u8 *suffix, u32 suffixSize, s32 options) {
    s32 result = 1;
    u8 *output = func_00BC0A38(inputSize);
    u32 length;
    u32 equal = 0;
    if (output) {
        result = func_00BBF020(key, 4, output, &length, inputSize, input, inputSize, options);
        if (result == 0 && suffixSize <= length) {
            equal = memcmp(suffix, output + (length - suffixSize), suffixSize) == 0;
        }
    }
    if (matches)
        *matches = equal;
    if (output)
        func_00BC0A88(output);
    return result;
}
