#include "stdint.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"

int main()
{
  unsigned int i;
  uint64_t aux1=0, aux2=0, res=0;
  //init uart 
  uart_init(UART_BASE,FREQ/BAUD);

  aux1=0;
  aux2=1;
  uart_printf("1º 0\n2º 1\n");
  for(i=2;i<100;i++){
    res=aux1+aux2;
    uart_printf("%dº %d\n", (i+1), res);
    aux1=aux2;
    aux2=res;
  }
  //char *a = malloc(10);
  //free(a);
}
