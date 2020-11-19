#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char p[10][30];
int q=0, h[10], s[10], k;

void cadastro();
void editarCura();
void editarSanidade();
void tabela();
void menu();
void dados();

void cadastro(){
int linha;
linha=0;
do{
printf("\nDigite o nome do Player%d: ", linha);
scanf("%s", &p[linha]);
printf("Digite o HP do Player%d: ", linha);
scanf("%d", &h[linha]);
printf("Digite a sanidade do Player%d: ", linha);
scanf("%d", &s[linha]);
printf("1 para criar novo personagem; qualquer outra tecla para sair ");
scanf("%d", &q);
linha++;
}while(q==1);
}

void editarSanidade(){
int ep, es, i;
printf("Qual player você deseja editar?");
scanf("%d", &i);
printf("A sanidade aumenta em...");
scanf("%d", &es);
s[i]=s[i]+es;
}

void editarCura(){
int ep, ec, i;
printf("Qual player você deseja editar?");
scanf("%d", &i);
printf("A vida aumenta em...");
scanf("%d", &ec);
h[i]=h[i]+ec;
}

void tabela(){
int tamanhoNome=0, tamanhoVida=1, l=0, hb;
printf("   Nome                          Vida      Sanidade\n");
while(l<10){
tamanhoVida=0;
printf("P%d %s", l, p[l]);
tamanhoNome=strlen(p[l]);
if(tamanhoNome==0){
break;}
while(tamanhoNome<30){
printf(" ");
tamanhoNome++;}
printf("%d", h[l]);
hb = h[l];
while(hb>=10){
if(hb/10){
hb=hb/10;
tamanhoVida++;}}
while(tamanhoVida<9){
printf(" ");
tamanhoVida++;}
printf("%d\n", s[l]);
l++;}
}

void dados(){
int r, md, q;
do{
printf("Digite a quantidade de dados:");
scanf("%d", &r);
printf("Digite qual o valor maximo do dado:");
scanf("%d", &md);
while(r>0){
printf("%d ", rand() % md);
r--;
}
printf("\n1 para rolar novamente; qualquer outra tecla para sair\n ");
scanf("%d", &q);}while(q==1);

}

int main(void){
do{
system("cls");
tabela();
printf("\n\n1 - Cadastrar\n2 - Editar Cura \n3 - Editar Sanidade\n4 - Dados\n5 - Sair");
scanf("%d", &k);
switch(k){
case 1: cadastro(); break;
case 2: editarCura(); break;
case 3: editarSanidade(); break;
case 4: dados(); break;
case 5: system("exit"); break;
}
}while(k!=5);
}
