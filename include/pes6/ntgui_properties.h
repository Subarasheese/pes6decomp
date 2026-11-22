#ifndef PES6_NTGUI_PROPERTIES_H
#define PES6_NTGUI_PROPERTIES_H
#include "types.h"
typedef struct {
    s32 key;
    union {
        s64 integer;
        float real;
    } value;
} WidgetProperty;
#endif
