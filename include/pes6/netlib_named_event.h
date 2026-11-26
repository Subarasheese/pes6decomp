#ifndef PES6_NETLIB_NAMED_EVENT_H
#define PES6_NETLIB_NAMED_EVENT_H

#include "types.h"

typedef u32 (*NetlibEventCallback)(void);

s32 func_008157A0(NetlibEventCallback start, NetlibEventCallback finish, const char *name);
s32 func_00815100(const char *name);
s32 func_00814FC0(const char *name);
s32 func_00815B70(s32 index);
u32 func_00814FB0(void);

s32 func_00D10140(u32 mode);
s32 func_00D0FBE0(s64 enable);
void func_00D0CB50(void);
void func_00D0C980(void);

#endif
