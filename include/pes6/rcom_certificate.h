#ifndef PES6_RCOM_CERTIFICATE_H
#define PES6_RCOM_CERTIFICATE_H
#include "types.h"
typedef struct x509_st X509;
typedef struct X509_name_st X509_NAME;
typedef struct X509_name_entry_st X509_NAME_ENTRY;
typedef struct x509_store_st X509_STORE;
typedef struct x509_store_ctx_st X509_STORE_CTX;
typedef struct x509_object_st X509_OBJECT;
typedef struct evp_md_st EVP_MD;
typedef struct evp_pkey_st EVP_PKEY;
typedef struct bio_st BIO;
typedef struct stack_st STACK;
typedef struct __sFILE RcomFile;
typedef s32 (*RcomPasswordCallback)(char *out, s32 size, s32 writing);
typedef void (*RcomApiFunction)(void);
extern void func_00BB3380(s32 library, s32 function, s32 reason, const char *file, s32 line);
#define RCOM_MISSING_CERTIFICATE_CALLBACK(function) func_00BB3380(26, (function), 14, 0, 0)
#endif
