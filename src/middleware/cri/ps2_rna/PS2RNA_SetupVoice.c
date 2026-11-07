/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/ps2_rna.c). */
typedef unsigned int size_t;
typedef char Sint8;
typedef signed int Sint32;
void PS2RNA_SetupVoice(Sint32 nste, Sint32 nmono);
void* SJUNI_CreateRmt(Sint32, Sint8*, Sint32);
typedef char* va_list;
void func_001610B0(const char* fmt, ...);
void sceVprintf(const char* fmt, va_list ap);
int sceSnprintf(char* buffer, size_t count, const char* fmt, ...);
int sceVsnprintf(char* buffer, size_t count, const char* fmt, va_list ap);
extern Sint32 D_0038DBD0;
extern Sint32 D_0038DBD4;
extern Sint32 D_0038DBD8;
extern Sint32 D_0038DBF8;
extern Sint32 D_0038DBFC;
void PS2RNA_SetupVoice(Sint32 nste, Sint32 nmono) {
    Sint32 voice_count;
    if (nste < 0) {
        func_001610B0("PS2RNA_SetupVoice:Illigal parameter(nste=%d).", nste);
        return;
    }
    if (nmono < 0) {
        func_001610B0("PS2RNA_SetupVoice:Illigal parameter(nmono=%d).", nmono);
        return;
    }
    voice_count = (nste * 2) + nmono;
    if (voice_count > 32) {
        func_001610B0("PS2RNA_SetupVoice:The set-up value exceeded maximum(MAX=%d).", 32);
        return;
    }
    D_0038DBD0 = voice_count;
    D_0038DBF8 = nste;
    D_0038DBFC = nmono;
    D_0038DBD4 = voice_count * 0x4100;
    D_0038DBD8 = 1;
}