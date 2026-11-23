#ifndef PES6_HTTPS_CRYPTO_PARAMETERS_H
#define PES6_HTTPS_CRYPTO_PARAMETERS_H

#include "types.h"
typedef struct CryptoObject CryptoObject;
typedef struct {
    const void *bytes;
    u32 length;
} CryptoBytes;
typedef struct CryptoMethod CryptoMethod;
extern s32 func_00BED248(CryptoObject *, void **allocation, u32 size);
extern s32 func_00BED2C0(CryptoObject *, void **copy, const void *input, u32 size);
extern s32 func_00BED060(CryptoObject *, void *buffer, u32 size);
extern s32 func_00BECE80(CryptoObject *object, const CryptoMethod *method, void *value);
extern void func_00BF5CC0(void *out, const void *in, u32 size);
extern void func_00BF2EB8(void *key);

#endif
