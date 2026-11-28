#ifndef PES6_NTGUI_CHILD_EVENTS_H
#define PES6_NTGUI_CHILD_EVENTS_H

#include "types.h"

typedef void (*NtguiChildEvent)(void *widget, s32 value);

typedef struct {
    u8 reserved00[0x890];
    void *children[7];
} NtguiSevenChildGroup;

typedef struct {
    u8 reserved00[0x910];
    void *child;
} NtguiPrimaryChildGroup;

typedef struct {
    u8 reserved00[0x910];
    void *children[3];
} NtguiThreeChildGroup;

typedef struct {
    u8 reserved00[0x920];
    void *children[8];
} NtguiEightChildGroup;

extern NtguiChildEvent D_005C0CB8, D_005C0CC0;
extern NtguiChildEvent D_005C14D8, D_005C14E0;
extern NtguiChildEvent D_005C1A50, D_005C1A58;
extern NtguiChildEvent D_005C3760, D_005C3768;

extern void func_00165BA0(void *child, s32 value);
extern void func_00165BF0(void *child, s32 value);

#define NTGUI_FORWARD_THREE(group, value, event)                                                   \
    ((event)((group)->children[0], (value)), (event)((group)->children[1], (value)),               \
     (event)((group)->children[2], (value)))

#define NTGUI_FORWARD_SEVEN(group, value, event)                                                   \
    ((event)((group)->children[3], (value)), (event)((group)->children[2], (value)),               \
     (event)((group)->children[1], (value)), (event)((group)->children[0], (value)),               \
     (event)((group)->children[4], (value)), (event)((group)->children[5], (value)),               \
     (event)((group)->children[6], (value)))

#define NTGUI_FORWARD_EIGHT(group, value, event)                                                   \
    ((event)((group)->children[3], (value)), (event)((group)->children[0], (value)),               \
     (event)((group)->children[1], (value)), (event)((group)->children[2], (value)),               \
     (event)((group)->children[4], (value)), (event)((group)->children[5], (value)),               \
     (event)((group)->children[6], (value)), (event)((group)->children[7], (value)))

#endif
