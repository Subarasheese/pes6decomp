#ifndef PES6_HTTPS_KEY_OBJECT_H
#define PES6_HTTPS_KEY_OBJECT_H

#include "types.h"

typedef struct KeyObject KeyObject;
typedef struct {
    u8 reserved00[4];
    void (*destroy)(KeyObject *);
} KeyMethods;
struct KeyObject {
    const KeyMethods *methods;
    void *parameters, *privateData;
    u32 flags;
};
typedef struct {
    u8 reserved00[0x1c];
    KeyObject *key;
} KeyOwner;
extern const KeyMethods D_00C3F088;
extern KeyObject *func_00BBDD20(void);
extern void *func_00BC0A38(u32 size);
extern void func_00BC0A88(void *);
extern void func_00BBFDA0(void *);

#endif
