/* compiler: ee-gcc-2.9-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/lsc_err.c). */
		 

typedef char					Char8;		 

 

void func_001727F8(void (*)(void*, Char8*), void*);

  
  

  

 

extern void (*D_00387958)(void*, Char8*);
extern void* D_0038795C;

void func_001727F8(void (*func)(void*, Char8*), void* object) {
    if (func == 0) {
        D_00387958 = 0;
        D_0038795C = 0;
        return;
    }

    D_00387958 = func;
    D_0038795C = object;
}