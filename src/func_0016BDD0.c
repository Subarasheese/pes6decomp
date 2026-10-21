/* compiler: ee-gcc-2.9-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/lsc_err.c). */
		 

typedef char					Char8;		 

 

void func_0016BDD0(void (*)(void*, Char8*), void*);

  
  

  

 

extern void (*D_0038508C)(void*, Char8*);
extern void* D_00385090;

void func_0016BDD0(void (*func)(void*, Char8*), void* object) {
    if (func == 0) {
        D_0038508C = 0;
        D_00385090 = 0;
        return;
    }

    D_0038508C = func;
    D_00385090 = object;
}