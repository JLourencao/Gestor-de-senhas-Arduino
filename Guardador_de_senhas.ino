#include "Keyboard.h"

int botao = 1;
bool senha = false;

void setup() {
  pinMode(1, INPUT_PULLUP);
  Keyboard.begin();

   
}
 
void loop() {
   int botaoEstado = digitalRead(botao);
  if (botaoEstado == LOW && !senha){
    Keyboard.print("0dfa9cd119b5619dfa9e8af520428f0c");// Arch 
    /* Após fazer upload do código, o arduino carrega o hexadecimal e o hash fica em frente
     ao Keyboard.end();  sendo assim, quando plugado e a senha for digitada, apenas
     precisa-se completar a senha encriptada, por exemplo 0dfa9cd119b5619dfa9e8af520428f0cLinux
  */
    senha = true;
    delay(1000);
  } 
}
