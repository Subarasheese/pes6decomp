/* compiler: ee-gcc-2.9-as210-G0 */
#include "pes6/rcom_certificate.h"

extern X509_PUBKEY *func_00BE2220(X509_PUBKEY **key, u8 **input, long length);
extern EVP_PKEY *func_00BE2708(X509_PUBKEY *key);
extern void func_00BACE68(EVP_PKEY *key);
extern void func_00BACF40(EVP_PKEY *key);
extern void func_00BE2470(X509_PUBKEY *key);

EVP_PKEY *func_00BAB6B8(s32 type, EVP_PKEY **out, u8 **input, long length) {
    X509_PUBKEY *encoded;
    EVP_PKEY *key;
    encoded = func_00BE2220(0, input, length);
    if (!encoded)
        return 0;
    key = func_00BE2708(encoded);
    if (out && key) {
        if (*out)
            func_00BACE68(*out);
        *out = key;
        func_00BACF40(key);
    }
    func_00BE2470(encoded);
    return key;
}
