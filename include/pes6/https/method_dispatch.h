#ifndef PES6_HTTPS_METHOD_DISPATCH_H
#define PES6_HTTPS_METHOD_DISPATCH_H

#include "types.h"

typedef struct TransformDelegate TransformDelegate;
typedef struct {
    void (*destroy)(TransformDelegate *);
    u8 reserved04[12];
    s32 (*updateA)(TransformDelegate *, s32, s32, s32, s32, s32, s32, s32);
    s32 (*updateB)(TransformDelegate *, s32, s32, s32, s32, s32, s32, s32);
    s32 (*finishA)(TransformDelegate *, s32, s32, s32, s32, s32);
    s32 (*finishB)(TransformDelegate *, s32, s32, s32, s32, s32);
} DelegateMethods;
struct TransformDelegate {
    u8 reserved00[12];
    const DelegateMethods *methods;
};
typedef struct {
    u8 reserved00[0x28];
    TransformDelegate *delegate;
} TransformWrapper;
extern void func_00BE4AE8(TransformDelegate *);
extern s32 func_00BECCA8(TransformWrapper *, void (*)(TransformDelegate *));
typedef struct {
    u8 reserved00[12];
    s32 (*method0c)(void *, void *, void *, void *, u32 *, const void *, u32, void *);
    s32 (*method10)(void *, u32 *size);
    s32 (*method14)(void *, u32 *size);
} SlotMethods;
typedef struct {
    s32 reserved00, value;
} KeyStatus;

typedef struct {
    u8 reserved00[4];
    KeyStatus *status;
    const SlotMethods **active;
    const SlotMethods *first, *second;
    u8 reserved14[8];
    void *firstContext, *secondContext;
    u8 reserved24[8];
    void *parameter;
    u8 reserved30[0x10];
    s32 *limits;
} MethodPair;

extern s32 func_00BE4078(MethodPair *pair, void *key, void **choices, void *options);
extern s32 func_00BE40C8(MethodPair *pair, void *key, void **choices, void *options);
extern s32 func_00BE61C0(s32 status);

#endif
