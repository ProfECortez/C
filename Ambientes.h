//
//  Ambientes.h
//  MansaoMalAssombrada
//
//  Created by Eduardo Cortez on 17/11/20.
//

#ifndef Ambientes_h
#define Ambientes_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

void continuar(void);

void mapa(void);

void Hall (int *HallVisitado);
void Biblioteca (int *BibliotecaVisitada);
void SalaDeJantar (int *SalaDeJantarVisitada);
void Cozinha (int *CozinhaVisitada);
void QuartoPrincipal (int *QuartoPrincipaVisitado);
void QuartoDasCriancas (int *QuartoDasCriancasVisitado);

#endif /* Ambientes_h */
