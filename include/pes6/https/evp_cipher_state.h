#ifndef PES6_HTTPS_EVP_CIPHER_STATE_H
#define PES6_HTTPS_EVP_CIPHER_STATE_H
#include "types.h"
typedef struct CipherState CipherState;
typedef struct {
    u8 reserved00[0x10];
    s32 (*init)(CipherState *, const u8 *, const u8 *, s32);
    void (*process)(void);
    s32 (*cleanup)(CipherState *);
    u32 contextSize;
} PalCipher;
struct CipherState {
    const PalCipher *cipher;
    s32 encrypt, used;
    u8 originalIv[32], iv[32], buffer[32];
    s32 position;
    s32 reserved70;
    u32 contextSize;
    void *algorithmData;
    u32 reserved7c, flags, reserved84;
    u64 total;
};
extern void *func_001C48E8(void *, s32, u32);
extern void func_00BC0A88(void *);
extern void *func_00BC0A38(u32);
extern void func_00BB3380(s32, s32, s32, const char *, s32);
extern s32 func_00BB3B50(CipherState *, const PalCipher *);
extern s32 func_00BB3E00(CipherState *, const PalCipher *, const u8 *, const u8 *),
    func_00BB3E80(CipherState *, const PalCipher *, const u8 *, const u8 *);

#endif
