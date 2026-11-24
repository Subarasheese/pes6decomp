/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    s32 directory;
    const char *name;
} FileName;
typedef struct {
    s32 count;
    FileName *entries;
} FileIndex;
typedef struct {
    s32 count;
    const char **names;
} DirectoryIndex;
typedef struct {
    const char *root;
    DirectoryIndex *directories;
    FileIndex *files;
} HostCatalog;
extern u8 D_03000100[];
extern HostCatalog *D_03000200[][2];
extern s32 func_00180BA0(s32 bank), func_00180B50(s32 bank),
    sprintf(char *path, const char *format, ...);
void func_0017E690(s32 resource, char *path) {
    s32 bank = (resource >> 16) & 7;
    s32 id = resource & 0xffff;
    if (bank == 4) {
        HostCatalog *catalog = (HostCatalog *)D_03000100;
        if (catalog->files) {
            sprintf(path, "HST:%s/%s", catalog->root, catalog->files->entries[id].name);
        }
    } else {
        s32 group = func_00180BA0(bank);
        s32 slot = func_00180B50(bank);
        HostCatalog *catalog = D_03000200[group][slot];
        if (catalog) {
            FileName *entry = &catalog->files->entries[id];
            sprintf(path, "HST:%s/%s/%s", catalog->root,
                          catalog->directories->names[entry->directory], entry->name);
        }
    }
}
