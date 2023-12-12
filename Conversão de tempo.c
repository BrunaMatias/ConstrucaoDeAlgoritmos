#include <stdio.h>

int
main ()
{
  int N;
  int horas;
  int min;
  int seg;
  int resto;
  printf ("Informe o tempo em minutos:");
  scanf ("%d", &N);
  horas = N / 3600;
  resto = N % 3600;
  min = resto / 60;
  seg = N % 60;
  printf ("O tempo corresponde a: %d:%d::%d", horas, min, seg);

  return 0;
}
