#ifndef PES6_MATCH_SETUP_RESOURCES_H
#define PES6_MATCH_SETUP_RESOURCES_H

#include "pes6/overlay_module.h"

extern s32 Pes6SceneStack[];
extern s32 func_0021E000(u32 resource);
extern s32 func_0021DF90(s32 resource);
extern s32 Pes6File_AllChannelsIdle(void);
extern s32 Pes6SaveData_GetUnavailableFlag(void);
extern s32 func_002DEC40(s32 (*callback)(void));
extern void func_002DED00(s32 callback);
extern s32 func_001B6A30(s32 transition);
extern s32 func_001B68B0(void);
extern s32 func_008156F0(void);
extern s32 func_008223F0(void);
extern void func_001E7370(s32 resource, s32 *options);
extern void func_001F04F0(s32 resource, s32 *options);
extern void func_001D5EE0(s32 resource, s32 *options);
extern void *func_001D5A10(s32 resource);
extern void func_001E7140(s32 resource);
extern void func_001F0210(s32 resource);
extern void func_008B33F0(s32 resource);
extern void func_008B34C0(void);
extern void func_008B36F0(void);

#endif
