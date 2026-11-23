/* OpenSSL 0.9.1c, crypto/objects/objects.h. See THIRD_PARTY.md. */
#ifndef PES6_HTTPS_OBJECT_NAMES_H
#define PES6_HTTPS_OBJECT_NAMES_H
#include "pes6/https/ssleay_091b_types.h"

typedef struct obj_name_st {
    int type;
    int alias;
    char *name;
    char *data;
} OBJ_NAME;

#endif
