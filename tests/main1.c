#include <stddef.h>
#include <unistd.h>

int main() {
  int a = 312345, i = 0; 
  char *c;
  c = _itos(a);
  while (c[i] )
    {
      write(1, &c[i], 1);
      i++;
    }
        _printf("Esto es%i una prueba %s ",12345,"martes");
  return 0;
}