/*
Aqui, trabalha-se o exemplo de um jogo em que cenário é um módulo independente. Isso é útil para que o desenvolvimento possa ser feito em uma equipe com múltiplos programadores – cada um programando um cenário do jogo – e para que o próprio jogador possa escolher qual quer acessar, fazendo-se escolhas a respeito de qual caminho seguir.

História:
Você é um detetive, convocada para investigar uma mansão mal assombrada. Você deve explorar os diferentes cômodos da casa, juntar pistas e decifrar o que está acontecendo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include "Ambientes.h"

int main() {
   
    setlocale(LC_ALL, "Portuguese");
    
    //Variáveis do projeto
    // Lugares visitados: 0 = Não visitado ; 1 = Visitado
    int PistaNum = 0;
    char pistas[8];
    int HallVisitado = 0;
    int BibliotecaVisitada = 0;
    int SalaDeJantarVisitada = 0;
    int CozinhaVisitada = 0;
    int QuartoPrincipalVisitado = 0;
    int QuartoDasCriançasVisitado = 0;
    int LocalEscolhido;
    int RespostaValida; //0 = Resposta inválida (força o loop); 1 = resposta válida
    
    
    printf("\n\n\n        ###    MANSÃO MAL ASSOMBARA    ###\n\n");
    printf("-- Um jogo desenvolvido e programado por Eduardo Cortez --\n\n\n");
    
    continuar();
    
    printf("\n\n[Policial local]: Olá, detetive. Obrigado por ter atendido ao nosso chamado. Essa é a casa de que lhe falamos.");
    printf("\n\nEla parece datar do século XVIII e há mais de um século ninguém habita aqui. Pior que isso. Não há registro de quando foi a última vez que alguém morou nessa casa.");
    
    continuar();
    
    printf("\n\nAinda do lado de fora, você olha para a casa e percebe que ela já foi bela e imponente um dia. Mas, hoje, a história é diferente. Suas paredes de madeira estão repletas de buracos. Seu telhado também está quebrado em diversos pontos. Claramente essa situação se manteve por muitos anos; há diversos musgos e plantas crescendo ao redor da casa, em uma situação de total abandono.");
    printf("\n\nCom as janelas também quebradas, você consegue ver pedaços do interior da casa: cortinas rasgadas e comidas por traças, estofados se desintegrando e muitos móveis cuja estrutura não lhe dá qualquer confiança.");
    
    continuar();
    
    printf("\n\n[Policial local]: Bom, detetive, a partir daqui é com o senhor. Só de olhar para essa casa, já tenho arrepios e meu salário não irá pagar por qualquer trauma que eu desenvolva lá dentro.");
    
    continuar();
    
    printf("\n\nVocê força a porta dupla que dá acesso à casa e se localiza agora no Hall de Entrada.");
    printf("\n\nAntes de que seus olhos se acostumem à penumbra, seu nariz é atacado por um odor de podridão que te causa intensa náusea. A ânsia para vomitar faz você ficar sem ar e, ao tentar controlar as golfadas de refluxo e puxar o ar - aquele ar fétido, úmido, repleto de podridão – você sucumbe ao cheiro de mofo, madeira morta e fezes de rato. Sem conseguir se controlar, você vomita sobre os restos de um carpete que outrora seria exibido com orgulho. Agora, não passa de uma massa negra de fungos, fibras e pelos.");
    
    continuar();
    
    printf("Após alguns minutos, você finalmente consegue controlar seu próprio corpo e olhar em volta.");
    
    LocalEscolhido = 1;

    
   while (PistaNum < 7)
   {
       if (LocalEscolhido == 0) // Saída
       {
           if (PistaNum == 6) //Liberar Saída
           {
               // Função saída
               pistas[PistaNum] = 'M';
               PistaNum = PistaNum + 1;
               
               printf("\n\nAo sair da casa, você repara em um pequeno pedaço de papel preso no batente da porta. Ao examinar o papel com atenção, você percebe que ele contém a letra M. Esse papel estava aqui antes? Você não consegue ter certeza... Outra letra... Por que essas letras?");
               printf("\n\nPista encontrada: \"M\"");
               
               continuar();
               
               printf("\n\n[Policial local]: Finalmente você saiu! Estava com medo de nunca mais te ver. De repente, a casa ficou escura demais para que eu pudesse acompanhar seus movimentos pelas janelas; é como se houvesse uma sombra espessa dentro da casa... Mas, enfim, isso pode ser apenas o meu medo falando mais alto...");
               printf("\n\nO que você encontrou?");
               
               continuar();
               
               printf("\n\nSem saber exatamente o que dizer, você menciona as letras que parecem ter sido espalhadas pela casa. Enquanto fala, você ainda se incomoda com a última letra encontrada... Quase como se ela houvesse sido colocada ali depois de sua entrada na casa...\n\n");
               
               int i;
               for(i = 0; i < PistaNum; i++)
               {
                   printf("%c   ", pistas[i]);
               }
               
               continuar();
               
               printf("\n\n[Policial local]: Hum... letras? Talvez elas estejam embaralhadas, tentando passar uma mensagem... Essas letras fazem algum sentido para você? Alguma palavra... talvez um nome que você tenha visto dentro da casa?");
               
               printf("\n\nDIGITE A PALAVRA FORMADA PELAS LETRAS EMBARALHADAS:\n");
               char RespostaDoJogador[8];
               fgets(RespostaDoJogador, 8, stdin);
               fflush(stdin);
               
               // Modificação para letras maiúsculas
               int j;
               for (j = 0; j < 8; j++)
               {
                   RespostaDoJogador[j] = toupper(RespostaDoJogador[j]);
               }
               
               // Confirmação da Resposta
               printf("\nVocê escreveu: %s", RespostaDoJogador);
               printf("\n\n Digite 1 para continuar ou 2 para alterar sua resposta.\n");
               
               int confirmacao;
               scanf("%d", &confirmacao);
               fflush(stdin);
               
               while (confirmacao != 1)
               {
                   printf("\n\nSuas pistas são: ");
                   for(i = 0; i < PistaNum; i++)
                   {
                       printf("%c   ", pistas[i]);
                   }
                   
                   printf("\n\nDesembaralhe as letras e forme um nome.");
                   printf("\nDIGITE SUA RESPOSTA: ");
                   
                   fgets(RespostaDoJogador, 8, stdin);
                   fflush(stdin);
                   
                   for (j = 0; j < 8; j++)
                   {
                       RespostaDoJogador[j] = toupper(RespostaDoJogador[j]);
                   }
                   
                   printf("\nVocê escreveu: %s", RespostaDoJogador);
                   printf("\n\n Digite 1 para continuar ou 2 para alterar sua resposta.\n");
                   
                   scanf("%d", &confirmacao);
                   fflush(stdin);
               }

               
               if ((strcmp(RespostaDoJogador, "MORDRED")) == 0)
               {
                   printf("\n\nQuando você desembaralha as letras, o policial coça a cabeça, incomodado, e conta que Mordred é o nome do delegado local. De alguma maneira a casa parecia estar querendo se comunicar com ele. Ele se compromete a conversar com o Delegado. Já está tarde. Você não vê a hora de voltar ao hotel, tomar um banho e tentar dormir um pouco.");
                   
                   continuar();
                   
                   printf("\n\nAlguns dias depois...");
                   printf("\n\nO delegado revelou que é um descendente dos antigos donos daquela casa. A família, durante gerações, havia se dedicado à busca do Santo Graal, mas as consequências disso foram terríveis. Sempre que pareciam se aproximar de uma pista sólida a respeito do que seria esse objeto e de qual seria seu paradeiro, um trágico acidente acontecia. Geração após geração, membros daquela família eram mutilados, desenvolviam doenças misteriosas e morriam em acidentes sem qualquer motivo razoável. Tentando fugir desse destino, há quase 200 anos os últimos moradores abandonaram a casa e se mudaram para uma cidade pequena e isolada em Portugal.");
                   
                   continuar();
                   
                   printf("\n\nDécadas se passaram... Mais de um século depois, tudo parecia bem. Parecia que finalmente haviam se livrado da maldição que os perseguia... Até que seus pais começaram a ter sonhos estranhos. Sonhos não, verdadeiros pesadelos. Objetos ao seu redor começaram a se quebrar sozinhos e, depois, uma estranha sombra passou a pairar sobre seu pai e sua mãe. Eles morreram asfixiados enquanto dormiam.");
                   
                   continuar();
                   
                   printf("Mordred entendeu que isso deveria estar relacionado à antiga maldição e a tudo o que havia naquela antiga mansão. Criou coragem, saiu de Portugal e se mudou para a antiga cidade natal de sua família. A própria visão da casa, no entanto, o deixara em pânico. Incapaz de entrar na casa e de deixar a cidade, Mordred tentou disfarçar seu pesar e sua angústia. Tentou trabalhar como qualquer cidadão local e, assim, quem sabe, passaria despercebido.");
                   printf("\n\nA mansão, no entanto, sentiu sua presença. Ela o estava chamando. Ele sabia que, agora, não poderia mais fugir...");
                   
                   continuar();
                   
                   printf("\n\n[Delegado]: Detetive... muito obrigado por seus serviços.");
                   
                   printf("\n\n[Delegado]: Agora eu não tenho mais escapatória. Devo dar continuidade à busca de meus ancestrais. Quem sabe, por meio dessa busca insana e desvairada, eu não descobra como dar fim a essa maldição? Quem sabe a busca de minha família não tivesse exatamente esse objetivo? Quem sabe a busca fosse uma luta contra a maldição, e não a maldição em si?");
                   
                   continuar();
                   
                   printf("\n\n[Delegado]: Bom, detetive... Essas são minhas únicas esperanças. Eu sou o último descendente de minha família. Agora, só eu posso descobrir essa resposta... Ou morrer tentando...");
                   printf("\n\n[Delegado]: Ao final, espero, dará tudo na mesma. Se eu morrer, acredito que a maldição morrerá comigo. Essa deve ser a SUA esperança, detetive, pois agora você já se aproximou demais da causa deste mal...");
                   
                   continuar();
                   
                   printf("\n\n[Delegado]: Agradeço mais uma vez seus serviços. Você está dispensado.");
                   
                   printf("\n\nFIM.");
                   
                   printf("\n\nPARABÉNS!!! VOCÊ ENCERROU O JOGO DECIFRANDO AS PISTAS CORRETAMENTE. PARA DESCOBRIR UM NOVO FINAL, JOGUE NOVAMENTE.");
                   
                   printf("\n\nJogo desenvolvido por Eduardo Cortez. 2020.");
                   printf("\nLicença Creative Commons para modificação ou reprodução, distribuição gratuita, sem fins lucrativas, com menção ao autor.");
                   
                   printf("\n\nPressione \"enter\" para encerrar.");
                   getchar();
                   fflush(stdin);
               }
               else
               {
                   printf("\n\nSua resposta não faz qualquer sentido para o policial com quem você está falando. Vocês vão à delegacia para verificar se a palavra ");
                   for (j = 0; j < 8; j++)
                   {
                       printf("%c", RespostaDoJogador[j]);
                   }
                   printf(" faz qualquer sentido para o delegado, mas ele também não vê qualquer significado nisso.");
                   printf("\n\nTalvez tudo não passasse, afinal, de alguma pegadinha dos adolescentes locais.");
                   
                   continuar();
                   
                   printf("\n\nEles se desculpam por ter tomado seu tempo e te dispensam.");
                   printf("\n\nVocê deixa aquela cidade, mas uma sensação estranha o acompanha. Você tem a impressão que tudo está mais escuro que o normal e essa sensação não passa durante os próximos dias. É como se uma sombra o acompanhasse... Você espera ser apenas uma má impressão ou uma alucinação persistente, em função de todo o mofo presente naquela estranha mansão... Pensando assim, você apenas torce para esquecer de tudo isso até a próxima semana.");
                   
                   printf("\n\nFIM.");
                   
                   printf("\n\nPARABÉNS!!! VOCÊ ENCERROU O JOGO SEM DECIFRAR AS PISTAS. PARA DESCOBRIR UM NOVO FINAL, JOGUE NOVAMENTE.");
                   
                   printf("\n\nJogo desenvolvido por Eduardo Cortez. 2020.");
                   printf("\nLicença Creative Commons para modificação ou reprodução, distribuição gratuita, sem fins lucrativas, com menção ao autor.");
                   
                   printf("\n\nPressione \"enter\" para encerrar.");
                   getchar();
                   fflush(stdin);
               }
               
               return 0; // Encerra o jogo
           }
           else // Saída bloqueada
           {
               printf("\n\nVocê ainda não terminou de coletar todas as pistas.");
               continuar();
               mapa();
               printf("\n\nPara onde você deseja ir agora?\n\n");
               printf("0 - Saída\n");
               printf("2 - Biblioteca\n");
               printf("3 - Sala de Jantar\n");
               printf("5 - Quarto Principal\n");
               printf("6 - Quarto das Crianças\n");
               printf("\n");
               
               RespostaValida = 0;
               do
               {
                   scanf("%d", &LocalEscolhido);
                   fflush(stdin);
                   if ((LocalEscolhido == 0) || (LocalEscolhido == 2) || (LocalEscolhido == 3) || (LocalEscolhido == 5) || (LocalEscolhido == 6))
                       RespostaValida = 1;
                   else
                   {
                       printf("\n\nResposta inválida.");
                       continuar();
                       mapa();
                       printf("\n\nPara onde você deseja ir agora?\n\n");
                       printf("0 - Saída\n");
                       printf("2 - Biblioteca\n");
                       printf("3 - Sala de Jantar\n");
                       printf("5 - Quarto Principal\n");
                       printf("6 - Quarto das Crianças\n");
                       printf("\n");
                   }
               } while (RespostaValida == 0);
           }
       }
       if (LocalEscolhido == 1) // Hall de Entrada
       {
           if (HallVisitado == 0)
           {
               pistas[PistaNum] = 'O';
               PistaNum = PistaNum + 1;
           }
    
           Hall(&HallVisitado);

           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if ((LocalEscolhido == 0) || (LocalEscolhido == 2) || (LocalEscolhido == 3) || (LocalEscolhido == 5) || (LocalEscolhido == 6))
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("0 - Saída\n");
                   printf("2 - Biblioteca\n");
                   printf("3 - Sala de Jantar\n");
                   printf("5 - Quarto Principal\n");
                   printf("6 - Quarto das Crianças\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
       }
       else if (LocalEscolhido == 2) // Biblioteca
       {
           if (BibliotecaVisitada == 0)
           {
               pistas[PistaNum] = 'R';
               PistaNum = PistaNum + 1;
           }
           
           Biblioteca(&BibliotecaVisitada);
           BibliotecaVisitada = 1;
           
           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if (LocalEscolhido == 1)
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("1 - Hall de Entrada\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
           
       }
       else if (LocalEscolhido == 3) // Sala de Jantar
       {
           if (SalaDeJantarVisitada == 0)
           {
               pistas[PistaNum] = 'D';
               PistaNum = PistaNum + 1;
           }
           
           SalaDeJantar(&SalaDeJantarVisitada);
  
           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if ((LocalEscolhido == 1) || (LocalEscolhido == 4))
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("1 - Hall de Entrada\n");
                   printf("4 - Cozinha\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
       }
       else if (LocalEscolhido == 4) //Cozinha
       {
           if (CozinhaVisitada == 0)
           {
               pistas[PistaNum] = 'R';
               PistaNum = PistaNum + 1;
           }
           
           Cozinha(&CozinhaVisitada);
 
           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if (LocalEscolhido == 3)
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("3 - Sala de Jantar\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
       }
       else if (LocalEscolhido == 5) // Quarto Princiap
       {
           if (QuartoPrincipalVisitado == 0)
           {
               pistas[PistaNum] = 'E';
               PistaNum = PistaNum + 1;
           }
           
           QuartoPrincipal(&QuartoPrincipalVisitado);
           
           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if (LocalEscolhido == 1)
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("1 - Hall de Entrada\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
       }
       else if (LocalEscolhido == 6) // Quarto das Crianças
       {
           if (QuartoDasCriançasVisitado == 0)
           {
               pistas[PistaNum] = 'D';
               PistaNum = PistaNum + 1;
           }
           
           QuartoDasCriancas(&QuartoDasCriançasVisitado);
           
           RespostaValida = 0;
           do
           {
               scanf("%d", &LocalEscolhido);
               fflush(stdin);
               if (LocalEscolhido == 1)
                   RespostaValida = 1;
               else
               {
                   printf("\n\nResposta inválida.");
                   continuar();
                   mapa();
                   printf("\n\nPara onde você deseja ir agora?\n\n");
                   printf("1 - Hall de Entrada\n");
                   printf("\n");
               }
           } while (RespostaValida == 0);
       }
   }
}
