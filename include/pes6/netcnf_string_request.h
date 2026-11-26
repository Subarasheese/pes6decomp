#ifndef PES6_NETCNF_STRING_REQUEST_H
#define PES6_NETCNF_STRING_REQUEST_H

#include "types.h"

typedef struct {
    u8 reserved00[8];
    s32 setting;
    u8 reserved0c[4];
    char first[256], second[256];
} NetcnfStringRequest;

extern NetcnfStringRequest D_005E5F40;
extern u8 D_005E5F00[];
extern char *strcpy(char *to, const char *from);
extern s32 func_002D9D28(void), func_002DB028(void *client, void *request, s32 command);

static inline s32 sendNetcnfStringRequest(const char *first, s32 setting, const char *second, s32 command) {
    NetcnfStringRequest *request;
    func_002D9D28();
    request = &D_005E5F40;
    strcpy(request->first, first);
    request->setting = setting;
    strcpy(request->second, second);
    return func_002DB028(D_005E5F00, &D_005E5F40, command);
}
#endif
