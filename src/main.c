#include<stdio.h>
unsigned char tape[30000];
short pointer = 0;

int match_opening_braces(short i);
int match_closing_braces(short i);
int main(){
  char command[1000] = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++";
  short code_pointer = 0;
  short loop_start = -1;
  short loop_end = -1;
  while(command[code_pointer]!='\0'){
    switch(command[code_pointer]){
      case '+':
        tape[pointer]++;
        break;
      case '-':
        tape[pointer]--;
        break;
      case '>':
        pointer++;
        break;
      case '<':
        pointer--;
        break;
      case '.':
        printf("%c", tape[pointer]);
      case ',':
        scanf("%d", &tape[pointer]);
      case '[':
        // will implement later
        break;
      case ']':
        // later
        break;
      default:
        ; // ignore
    }
  }
  return 0;
}

int match_opening_braces(short index){
  int nesting = 0;
  int i=index+1;
  if (tape[index] == '[') {
    while(true){
      if (tape[index]=='[') {
        nesting++;
      } else if(tape[index]==']' && !nesting){

      }
      
      i++;
    }
  }
}
