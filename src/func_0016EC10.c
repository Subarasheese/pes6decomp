/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
typedef unsigned char u_char;
typedef unsigned int size_t;
typedef char Sint8;
typedef signed int Sint32;
typedef char Char8;
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef struct {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
} sceCdlLOCCD;
sceCdlLOCCD* sceCdIntToPos(int i, sceCdlLOCCD* p);
typedef void* SRD;
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
Sint32 dvCiLoadFcache(Sint8*, Sint8*, Sint32, Sint32);
void dvCiSetRdMode(Sint32 trycount, Sint32 spindlctrl, Sint32 datapattern, Sint32 rdmode);
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
void* memset(void* s, int c, size_t n);
size_t func_001C80F0(const char* s);
void func_0016EC10(Char8* path) {
    size_t len = func_001C80F0(path);
    Sint32 i;
    for (i = 0; i < len; i++) {
        if (path[i] == '/') {
            path[i] = '\\';
        }
        if (path[i] >= 'a' && path[i] <= 'z') {
            path[i] -= 'a' - 'A';
        }
    }
}