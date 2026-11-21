/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/ssleay_091b_types.h"

/* Extract the public key from the certificate and return its bit count. */
struct x509_st;
extern EVP_PKEY *func_00BDCE40(struct x509_st *certificate);
extern int func_00BBA280(EVP_PKEY *publicKey);

int func_00BDD080(struct x509_st *certificate) {
    return func_00BBA280(func_00BDCE40(certificate));
}
