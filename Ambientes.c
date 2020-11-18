//
//  Ambientes.c
//  MansaoMalAssombrada
//
//  Created by Eduardo Cortez on 17/11/20.
//

#include "Ambientes.h"

void continuar()
{
    printf("\n\nPressione \"enter\" para continuar...\n");
    getchar();
    fflush(stdin);
}

void mapa()
{
    printf("\n\nMAPA DA CASA\n\n");
    printf("_____________________________________________________\n");
    printf("|                   _|                   |_          |\n");
    printf("|                   _                     _          |\n");
    printf("|                    |                   |           |\n");
    printf("|       (5)          |                   |    (6)    |\n");
    printf("|                    |___________________|           |\n");
    printf("|                    |____           ____|           |\n");
    printf("|____________________|____           ____|___________|\n");
    printf("|                    |____           ____|           |\n");
    printf("|                    |____           ____|           |\n");
    printf("|        (4)         |                   |           |\n");
    printf("|                    |                   |           |\n");
    printf("|________| |_________|                   |           |\n");
    printf("|                    |                   |    (2)    |\n");
    printf("|                    |                   |           |\n");
    printf("|        (3)        _|        (1)        |_          |\n");
    printf("|                   _                     _          |\n");
    printf("|                    |                   |           |\n");
    printf("|____________________|________| |________|___________|\n");
    printf("\n");
    printf("                              (0)\n");
}


void Hall (int *HallVisitado)
{
    printf("\n\nDestacando-se das cortinas, da mobília e do carpete, que estão em pleno estado de decomposição, ao fundo do hall de entrada, existem dois quadros relativamente bem conservados. Ao se aproximar deles, você repara que o primeiro representa uma mulher, em finos trajes medievais. Sob o quadro, há uma placa em que se lê “Guinevère”. Ao lado desse quadro, há um rosto de um homem, portanto uma coroa. Apesar de não ter sido vítima do tempo e da decomposição, alguém tentou arruinar este quadro. Sobre o rosto, há uma grande letra O desenhada. Abaixou do quadro, a placa que dizia “Rei Arthur” teve a palavra “Rei” riscada, como se alguém quisesse removê-la.\n\n");
    
    if(*HallVisitado == 0)
    {
        printf("Pista encontrada: \"O\"");
        *HallVisitado = 1;
    }
    
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


void Biblioteca (int *BibliotecaVisitada)
{
    printf("\n\nA biblioteca dessa mansão é um cômodo enorme. Muitas de suas estantes, no entanto, estão em ruinas. Há muitos livros pelo chão, que caíram das estantes conforme as tábuas de madeira que formavam suas prateleiras cederam. Há pedaços de papel rasgado por todo o chão. Esses papéis têm as típicas marcas de terem sido rasgados por ratos, para servirem de substrato para suas tocas; as milhares de partículas de fezes de rato pelo chão e o os sons de seus guinchos e corridas apressadas pelo cômodo reforçam essa história. Você agradece mentalmente por estar de botas e calças compridas, mas ainda assim reza para que os ratos não corram em sua direção.");
    
    continuar();
    
    printf("\nNo meio do cômodo há uma mesa de estudos, com um único livro sobre ela. Esse livro parece relativamente conservado em relação aos demais, e há um marcador preso a ele.");
    printf("\n\nAbrindo o livro na página marcada, você lê: \"Mordred era o filho de Arthur com Morgana. Mordred foi criado pela mãe e, durante a maior parte de sua vida, apenas ouvia as histórias sobre o grande, belo, bondoso e astuto Arthur – um poderoso e hábil guerreiro, que comandava seu exército com estratégias brilhantes. Para Mordred, seu pai não passava de uma figura lendária, que dedicava mais atenção à Bretanha do que ao próprio filho... Mordred cresceu uma criança amargurada com o pai ausente.\"");
    
    if(*BibliotecaVisitada == 0)
    {
        continuar();
        
        printf("\n\nAo fechar o livro, um pequeno papel cai de dentro dele. O papel contém apenas um rabisco, no formato da letra R");
        printf("\n\nPista encontrada: \"R\"");
        *BibliotecaVisitada = 1;
    }
    
    continuar();
    
    mapa();
    
    printf("\n\nPara onde você deseja ir agora?\n\n");
    printf("1 - Hall de Entrada\n");
    printf("\n");
}


void SalaDeJantar (int *SalaDeJantarVisitada)
{
    printf("\n\nA sala de jantar possui uma enorme mesa redonda em seu centro, com 12 acentos ao seu redor. Fora isso, há alguns armários e cristaleiras. Todos os móveis estão no mesmo estado que o resto da casa: em plena decadência. O chão está imundo, repleto de poeira, madeira em decomposição e fezes de ratos. Um móvel se destaca desse estado: a imensa e desproporcional mesa redonda.");
    
    if(*SalaDeJantarVisitada == 0)
    {
        continuar();
        
        printf("\n\nVocê se aproxima da mesa estranhamente grande e bem conservada. O tampo da mesa foi riscado com alguma faca ou outro objeto pontiagudo. Nesse risco, lê-se a letra D.");
        
        printf("\n\nPista encontrada: \"D\"");
        *SalaDeJantarVisitada = 1;
    }
    
    continuar();
    
    mapa();
    
    printf("\n\nPara onde você deseja ir agora?\n\n");
    printf("1 - Hall de Entrada\n");
    printf("4 - Cozinha\n");
    printf("\n");
}



void Cozinha (int *CozinhaVisitada)
{
    printf("\n\nDeus! Aqui definitivamente é onde está a entrada para o ninho dos ratos. Você atravessa o batente da porta entre a sala de jantar e a cozinha e logo vê ratos de todos os tamanhos correndo para se esconder.");
    printf("\n\nO cheiro de fezes de rato agora empesteia o ambiente, e os guinchos dos animais assustados é extremamente enervante. Apenas o seu profissionalismo o impele a continuar sua investigação. Todos os outros pensamentos racionais o instigam a sair desse ambiente.");
    
    if (*CozinhaVisitada == 0)
    {
        continuar();
        
        printf("\n\nVocê força suas pernas a se moverem, adentrando o mar de ratos. Mesmo vestindo luvas, sua repulsa por tocar nas portas dos armários se apodera de você.  Você tenta usar sua lanterna, tentando enganchá-la nos puxadores.");
        printf("\n\nO primeiro armário que você tenta abrir está tão podre que a porta se solta e cai sobre você. Dezenas de fezes de rato caem em sua direção, prendendo-se à sua roupa. Dessa vez, você não consegue se controlar e mais uma vez vomita.");
        
        continuar();
        
        printf("\n\nAinda curvado pela ânsia, esfregando a boca com a manga do paletó, você repara em um pedaço do que parece ser uma caneca de porcelana no chão. Apenas um pedaço; não fragmentos, como se a caneca houvesse caído no chão e quebrado. Sobre esse pedaço, uma letra gravada: R.");
        printf("\n\nPista encontrada: \"R\"");
        
        *CozinhaVisitada = 1;
    }
    
    continuar();
    
    mapa();
    
    printf("\n\nPara onde você deseja ir agora?\n\n");
    printf("3 - Sala de Jantar\n");
    printf("\n");
}



void QuartoPrincipal (int *QuartoPrincipaVisitado)
{
    printf("\n\nO quarto principal da casa parece um dia ter sido mobiliado de maneira luxuosa. Claramente a cama é grande, cercada por colunas de madeira elaborada (e, agora, marcadas por furos de cupim e poeira) que um dia sustentaram um dossel. O que um dia foi o colchão da cama está despedaçado – sem dúvida, algo realizado pelos ratos que, agora, habitam a casa às centenas. Junto com a espuma e fezes de rato espalhadas pelo cômodo, há muita poeira e folhas, que entraram no cômodo pelo enorme buraco que pega a parede dos fundos da casa e o telhado. Você consegue ver que, atrás da casa há uma árvore. Provavelmente um de seus velhos e grandes galhos caiu e levou consigo enormes pedaços da casa.");
    
    if (*QuartoPrincipaVisitado == 0)
    {
        continuar();
        
        printf("\n\nAo seu lado, está um guarda-roupa com um espelho muito empoeirado. Tão empoeirado que você diria que não conseguiria sequer enxergar o próprio reflexo. Mas, ainda assim, algo apareceu ali. Uma sombra, de relance. Durou apenas uma fração de segundo, mas foi o suficiente para que você reconhecesse a aparência humana. Ao olhar em direção ao espelho, aquele ser desapareceu, deixando para trás apenas uma marca na poeira, no formato da letra E.");
        printf("\n\nPista encontrada: \"E\"");
        
        *QuartoPrincipaVisitado = 1;
    }
    
    continuar();
    
    mapa();
    
    printf("\n\nPara onde você deseja ir agora?\n\n");
    printf("1 - Hall de entrada\n");
    printf("\n");
}


void QuartoDasCriancas (int *QuartoDasCriancasVisitado)
{
    printf("\n\nEste quarto comporta duas beliches, ambas já devastadas pelo tempo. A madeira que as emoldura está roída, mofada e quebrada. Os armários e cômodas são todos de madeira. Todos igualmente mofados. O telhado acima do quarto está com um enorme rombo, que já deixou muita água da chuva passar e se acumular ali. Ao dar um passo à frente, você noda que a madeira do piso está prestes a ceder. Não é bom você ficar aqui se arriscando por muito tempo.");
    printf("\n\nO cheiro no ambiente – aquela mescla de podridão, umidade, mofo e fezes de rato e de pássaros que pousaram sobre o telhado quebrado – também te impele a se retirar.");

    if (*QuartoDasCriancasVisitado == 0)
    {
        continuar();
        
        printf("\n\nO chão está estalando com seu peso e você está prestes a sair. No centro do piso que está a ponto de ceder, no entanto, você vislumbra um livro... não, não um livro. Um diário. Um estranho diário que não parece ter sido atacado pelos ratos.");
        printf("\n\nUtilizando-se de sua lanterna e se esticando ao máximo, evitando dar o derradeiro passo que faria o piso ruir e, provavelmente, parte da casa desabar sobre sua cabeça, você tenta alcançar esse diário e puxá-lo em sua direção.");
        
        continuar();
        
        printf("\n\nVárias tentativas são feitas. Você tenta mudar a posição de seu corpo. Tenta mudar a posição de seus pés. Tenta tatear pelas partes mais firmes do piso.");
        printf("\n\nVocê está se esticando ao máximo, quase perdendo o equilíbrio e também quase deslocando seu ombro. Seu braço está formigando pelo esforço e pela estranha posição.");
        printf("\n\nJá se questionando sobre por que está fazendo isso e, prestes a desistir, você finalmente consegue. Toca a borda do diário com sua lanterna e o puxa o suficiente para que possa pegá-lo com as mãos.");
        
        continuar();
        
        printf("\n\nCom o diário em segurança, você se afasta alguns passos do piso traiçoeiro e o abre na página marcada. Você lê:");
        printf("\n\n\"Mordred cresceu e finalmente foi viver na corte de seu pai Arthur. Arthur, como de costume, passava mais tempo em batalhas que ao lado do filho, que era impedido de acompanhar o pai \"por sua segurança\". Essa situação só enfurecia Mordred mais ainda. Tal ódio levou a uma afinidade entre ele e Guinevère – esposa de Arthur, que nunca amara realmente o rei. Juntos, tramaram para que Mordred desposasse Guinevère e assumisse o trono. Juntos, riscariam o nome de Arthur da história da Bretanha.\"");
        
        continuar();
        
        printf("\n\nAo fechar o diário, você nota que, agora, sua capa tem a letra D gravada sobre ela. Você tem certeza de que a capa era totalmente lisa até há poucos instantes...");
        printf("\n\nPista encontrada: \"D\"");
        
        *QuartoDasCriancasVisitado = 1;
    }
    
    continuar();
    
    mapa();
    
    printf("\n\nPara onde você deseja ir agora?\n\n");
    printf("1 - Hall de entrada\n");
    printf("\n");
}



