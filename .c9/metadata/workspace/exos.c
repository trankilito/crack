{"filter":false,"title":"exos.c","tooltip":"/exos.c","undoManager":{"mark":2,"position":2,"stack":[[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["v"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"remove","lines":["v"],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":42,"column":1},"action":"insert","lines":["#include<stdio.h>","#include<cs50.h>","","int main(void)","{"," /*Getting the variables for the comparaison*/","int a = get_int (\"Please type a: \");","int b = get_int (\"Please type b: \");","int c = get_int (\"Please type c: \");","","/*The conditions of the comparaison that can allow the PC getting the wanted result.*/","/* the smallest to the largest number. (Ascending order)*/",""," if (a<b && b<c)"," {","     printf(\"%i < %i < %i\\n\", a,b,c);"," }"," if (a<c && c<b)"," {","     printf(\"%i < %i < %i\\n\", a,c,b);"," }"," if (b<a && a<c)"," {","     printf(\"%i < %i < %i\\n\", b,a,c);"," }"," if (b<c && c<a)"," {","  printf(\"%i < %i < %i\\n\", b,c,a);"," }"," if (c<a && a<b)"," {","  printf(\"%i < %i < %i\\n\", c,a,b);"," }"," if (c<b && b<a)"," {","  printf(\"%i < %i < %i\\n\", c,b,a);"," }","","{"," printf(\"Thank you!!\\n\");","}","","}"],"id":3}]]},"ace":{"folds":[],"scrolltop":372.796875,"scrollleft":0,"selection":{"start":{"row":34,"column":2},"end":{"row":34,"column":2},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":24,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1551119358636,"hash":"906841bdca645cddea58ccddecb993ed18b693ff"}