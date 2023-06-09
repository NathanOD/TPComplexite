//
//  calendrier.h
//  TPComplexite
//
//  Created by Nathan Odic on 25/03/2023.
//

#ifndef calendrier_h
#define calendrier_h

#define X_CALENDRIER 8
#define Y_CALENDRIER 7

#include <stdio.h>

// Fonction affichant le calendrier
void afficherCal (int cal[X_CALENDRIER][Y_CALENDRIER]);

// Fonction ajoutant la date choisie par l'utilisateurau calendrier
void indiquerJour(int jour, int numJour, int mois, int cal[X_CALENDRIER][Y_CALENDRIER]);

#endif /* calendrier_h */
