#ifndef PES6_HTTPS_CLIENT_STATE_H
#define PES6_HTTPS_CLIENT_STATE_H
#include "types.h"

typedef struct {
    char *component[4];
    s32 number;
    char *suffix[2];
} HttpAddress;

typedef struct HttpHeader {
    struct HttpHeader *next;
    u32 reserved;
    char *name;
    char *value;
} HttpHeader;

typedef struct {
    void *allocation;
    u8 reserved04[0x14];
    s32 active, state;
    u8 reserved20[0x3c];
    s32 firstThread;
    u8 reserved60[0x30];
    HttpAddress *addresses;
    u8 reserved94[8];
    s32 secondThread;
    u8 reservedA0[0x18];
    HttpAddress *proxyAddresses;
    HttpHeader *headers;
    void *buffer;
    u32 bufferSize, flags;
    u8 reservedCC[0x60];
    s32 worker[2];
    void *stack[2];
    s32 socket;
    u8 reserved140[0x10];
    s32 semaphore[4];
    u8 reserved160[8];
    s32 sslError;
    void *sslContext;
    struct ssl_st *ssl;
} HttpClient;

extern void func_00C0B7D0(void *buffer);
extern s32 func_00C07798(HttpAddress *address);
extern s32 func_00C07CB8(HttpHeader *header);
extern s32 func_00C09FD0(HttpClient *client);
extern s32 func_00C0A5B0(HttpClient *client);
#endif
