/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/htci_sub.c). */
typedef unsigned char u_char;
typedef unsigned int size_t;
typedef signed int Sint32;
typedef char Char8;
typedef struct {
    u_char trycount;
    u_char spindlctrl;
    u_char datapattern;
    u_char pad;
} sceCdRMode;
typedef void* SRD;
Sint32 SRD_ReqRdDvd(SRD srd, Sint32, Sint32, void*, sceCdRMode*);
void* memset(void* s, int c, size_t n);
Sint32 htci_is_bgn_host(const Char8* str) {
    Char8 copy[6];
    memset(copy, 0, 6);
    memcpy(copy, str, 4);
    copy[5] = '\0';
    return strcmp(copy, "host\0\0\0") == 0;
}