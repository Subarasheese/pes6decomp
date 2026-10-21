/* compiler: ee-gcc-2.9-G0 */
/* CRI middleware code; source adapted from recvx-decomp (src/cri/mwlib/ee/lib/libadxe/lsc.c). */
typedef void (*LSC_STATFN)(void *obj1, void *obj2);
void LSC_CallStatFunc(void);
void LSC_EntryChgStatFunc(LSC_STATFN statfn, void *obj1, void *obj2);

extern LSC_STATFN D_00387948;
extern void *D_0038794C;
extern void *D_00387950;
void LSC_EntryChgStatFunc(LSC_STATFN statfn, void *obj1, void *obj2);

void LSC_CallStatFunc(void) 
{
    if (D_00387948 != ((void *)0)) 
    {
        D_00387948(D_0038794C, D_00387950);
    }
}